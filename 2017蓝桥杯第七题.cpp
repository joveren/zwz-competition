
#include <iostream>
#include <string>
using namespace std;
string str;
int pos, len;
int dfs() {
    int num = 0, res = 0;
    while (pos < len) {
        if (str[pos] == '(') {
            pos++;
            num += dfs();
        }
        else if (str[pos] == ')') {
            pos++;
            break;
        }
        else if (str[pos] == '|') {
            pos++;
            res = max(num, res);
            num = 0;
        }
        else {
            pos++;
            num++;
        }
    }
    res = max(num, res);
    return res;
}
int main() {
    cin >> str;
    int ans = 0;
    len = str.length(), pos = 0;
    ans = dfs();
    cout << ans << endl;
    return 0;
}

