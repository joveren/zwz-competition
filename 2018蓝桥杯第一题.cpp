/*��Ŀ1

���⣺����

1/1 + 1/2 + 1/4 + 1/8 + 1/16 + ....?
ÿ����ǰһ���һ�룬���һ����20��,
��������Ƕ��٣�����÷�����ʾ������
���ƣ�
3/2
��Ȼ����ֻ�Ǽ���ǰ2����ѡ����ӷ�ĸҪ���ʡ�

ע�⣺
��Ҫ�ύ�����Ѿ�Լ�ֹ��ķ������м��κ�λ�ò��ܺ��пո�

�벻Ҫ��д�κζ�������ֻ���š�

����˼·����ֱ������ͨ�֣�����cmath���pow()�����������׵ó���

�𰸣�1048575/524288
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
