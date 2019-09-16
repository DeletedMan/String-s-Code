#include <iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

unsigned int ncr(unsigned int n,unsigned int k)
{
	if(k==0 || k==n)
	{
		return 1;
	}
	else
	{
		return (ncr(n-1,k-1)+ncr(n-1,k));
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned int n,k;
		std::cin>>n>>k;
		std::cout<<ncr(n,k)%10000000007<<endl;
	}
	return 0;	
}
