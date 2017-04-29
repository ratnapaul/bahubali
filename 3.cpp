#include<bits/stdc++.h>
using namespace std;
int main()
{
     int m,n;
	cin>>m;
	cin>>n;	
	string s[2*m+3];
	string s1;
	int k=0;
	//cout<<m<<endl;
	cin.ignore();
	while(m!=0)
	{
	  getline(cin,s1);
	//	cout<<s1<<endl;
	  	for(int i=0;i<s1.length();i++)
		{
			if(s1[i]=='<')
			{
				i++;
				while(s1[i]!='>')
				{
					s[k]+=s1[i];
					i++;
					if(s1[i]=='"')
					{
						i++;
						while(s1[i]!= '"')
						{
								i++;
						}
						i++;
					}
				}
				k++;
			}
		}
		m--;	
	}
		//cout<<"in storage"<<endl;
		for(int i=0;i<k;i++)
		{
		//	cout<<s[i]<<endl;	
		}
	int c=0;
	//cout<<n<<endl;
	while(n!=0)
	{
		getline(cin,s1);
		//cout<<s1<<endl;
		string s3;
		int f=0,l=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]=='<')
			{
				i++;
				while(s1[i]!='>')
				{
					s3+=s1[i];
					i++;
					if(s1[i]=='"')
					{
						i++;
						while(s1[i]!= '"')
						{
								i++;
						}
						i++;
					}
					
				}
				
			}
		}
 		//cout<<s3<<endl;
		for(int i=0;i<k;i++)
		{
			
			if(s3==s[i])
			{
				f=1;
			}
		}
		if(f==0)
		{
			c++;
		}
		n--;
	}
		if(c)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
return 0;
}
