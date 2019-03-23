
#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;
#define fi first
#define se second
#define pr make_pair
typedef pair<int, int> pii;
const int MAX_N = 1e1 + 5; 
bool exitable[MAX_N][MAX_N];
char mp[MAX_N][MAX_N];
set<pii> visit;
int main() {
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%s", mp[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            visit.clear();
            for (int x = i, y = j; true; ) {
                if (visit.find(pr(x, y)) != visit.end()) break;
                if (x < 0 || x > 9) {
                    ans++;
                    exitable[i][j] = true;
                    break;
                }
                if (y < 0 || y > 9) {
                    ans++;
                    exitable[i][j] = true;
                    break;
                }
                visit.insert(pr(x, y));
                if (mp[x][y] == 'L') y--;
                else if (mp[x][y] == 'R') y++;
                else if (mp[x][y] == 'U') x--;
                else if (mp[x][y] == 'D') x++;
            }
        }
    }
    printf("\nans = %d\n\n", ans);
    // 检验结果正确性
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (exitable[i][j]) printf("%c", mp[i][j]);
            else printf("*");
        }
        printf("\n");
    }
    return 0;
}
