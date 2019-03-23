/*题目2
标题：星期一

整个20世纪（1901年1月1日至2000年12月31日之间），一共有多少个星期一？
(不要告诉我你不知道今天是星期几)

注意：需要提交的只是一个整数，不要填写任何多余的内容或说明文字。*/
//解题思路是用excel表 datedif函数 ，看日历为2000年12月31号为星期日，所以要减一 
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
             int i=36527;
             cout<<i/7-1;
			  
	
}

