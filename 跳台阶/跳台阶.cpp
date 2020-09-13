#include<iostream>
using namespace std;
void main()
{
   int a=1,b=2,c,n,x;
   cin>>n;
   if(n==1)
	   x=1;
   else if(n==2)
	   x=2;
   else
   {
      for(n;n>2;n--)
	  {
          c=a+b;
	      a=b;
	      b=c;
	  }
	  x=c;
   }
   cout<<x<<endl;
}