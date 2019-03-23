/*题目1

标题：分数

1/1 + 1/2 + 1/4 + 1/8 + 1/16 + ....?
每项是前一项的一半，如果一共有20项,
求这个和是多少，结果用分数表示出来。
类似：
3/2
当然，这只是加了前2项而已。分子分母要求互质。

注意：
需要提交的是已经约分过的分数，中间任何位置不能含有空格。

请不要填写任何多余的文字或符号。

解题思路：可直接手算通分，利用cmath里的pow()函数，很容易得出答案

答案：1048575/524288
*/
#include<iostream>
#include<vector>
#include<algorithm> 
#include<cmath>
using namespace std;
int main()
{
	long long int a=pow(2,19);
//	cout<<a<<endl;
	long long int b=a*2-1;
//	cout<<b;
	cout<<b<<"/"<<a;
	return 0;
}
