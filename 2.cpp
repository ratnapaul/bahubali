#include<bits/stdc++.h>
using namespace std;
int main()
{
	int money[11]={};
	string s[11];
	string s1,s2;
	int a;
   int n,t;
	cin>>n>>t;
	int i=0;
	while(i<n)
	{
		cin>>s[i];
		i++;
	}
	while(t--)
	{
		cin>>s1;
		cin>>a;
		cin>>s2;
		for(int i=0;i<n;i++)
		{
			if(s[i]==s1)
			{
				money[i]-=a;
			}
			else if(s[i]==s2)
			{

				money[i]+=a;
			}
		}
	}	

         for(int i=0;i<n;i++)
	 {
		cout<<s[i]<<" ";
		if(money[i]>0)
		{
			cout<<money[i]<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	 }



	return 0;
}
