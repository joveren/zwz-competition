#include<iostream>
using namespace std;
int main()
{
	int r,y,g;//red,yellow,green
	int n;//number
	int k,t;//type,time
	int num=0;//answer
	
	cin>>r>>y>>g;
	cin>>n;
	
	for(int i=0;i<n;i++) 
	{
		cin>>k>>t;
		if(k==0)
		num+=t;
		else if(k==1)
		num+=t;
		else if(k==2)
		num+=(t+r);
		else
		num+=0;
	}
	cout<<num<<endl;
	return 0;
}
