// Set-2 Question-7.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int,int);
int squarescuts(int,int);


int main()
{
	int v, d;
	cout<<"Enter the breadth of chocolate bar : "<<endl;
	cin>>v;
	cout<<"Enter the length of chocolate bar : "<<endl;
	cin>>d;
	cout <<"Answer is = "<< squarescuts(v, d)<<endl;
	return 0;
}


int gcd(int x, int y)
{

	while(x!=y)
	{
		if(x>y)
        {
			x-=y;
        }    
		else
        {
			y-=x;
        }    
	}
	return x;
}
int squarescuts(int p, int q)
{
	int r,answers;
	r= gcd(p, q);
	answers = (p * q) / (r * r);
	return answers;
}
