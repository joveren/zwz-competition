#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
using namespace std;
 
int n, k, ans = 0;
int temp[3], num[100005], vis[100005] = { 0 };
 
void dfs(int s)
{
	if (s == 3)
	{
		int t = temp[0] + temp[1] + temp[2];
		if (t%k == 0 && t > ans)
			ans = t;
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (!vis[i])
			{
				temp[s] = num[i];
				vis[i] = 1;
				dfs(s + 1);
				vis[i] = 0;
			}
		}
	}
}
 
int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	dfs(0);
	printf("%d\n", ans);
	return 0;
}

