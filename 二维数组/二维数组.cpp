#include<iostream>
using namespace std;
void main()
{
    int m,n,k,a=0,b;
	char s[20][20];
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
	    cin>>s[i][j];
		}
	}
	cin>>k;
	for(m;m>=1;m--)
	{
    	if(k>=(s[m-1][0]))
		{
			if(k>s[m-2][n-1])
			{
			    for(b=0;b<n;b++)
				{
	               if((s[m-1][b])==k)
				   {
		              a=1;
				      break;
				   }
				}
			}
		}
	}
	if(a==1)
		cout<<"k在数组中"<<endl;
	else if(a==0)
		cout<<"k不在数组中"<<endl;

/*	for(int a=0;a<m;a++)
	{
		for(int b=0;b<n;b++)
		{
	    cout<<s[a][b]<<'\t';
		}
		cout<<endl;
	}  */
}