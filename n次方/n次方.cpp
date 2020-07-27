#include<iostream>
using namespace std;
void main() {
		double base;
		int exponent;
		cin>>base>>exponent;
        double a=base;
		double n=exponent;
	    if(exponent<0)
			exponent=-exponent;
        while(exponent>1)
        {
            a=a*base;
			exponent--;
        }
		if(n<0)
			a=1/a;
        cout<< a<<endl;
	}