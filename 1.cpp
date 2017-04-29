#include<bits/stdc++.h>
using namespace std;
int main()
{
int time[400],c[27]={};
int wc[27]={};
int i;
string s;
int k=1;
int t=0;
int count=0;
while(cin>>time[k])
{
   if(time[k]!=-1)
   {
	
	char ch;

	cin>>ch;
	cin>>s;
	if(s=="right")
	{
             if(!c[ch-64])
	      {
		c[ch-64]++;
		t+=time[k]+wc[ch-64]*20;

		count++;
              }
	}
	else
	{
		wc[ch-64]++;
	}
	k++;
   }
   else
  {
    break;
  }
}
cout<<count<<" "<<t<<endl;
return 0;
}
