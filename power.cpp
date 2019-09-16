#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<list>
#include<deque>
#define mod 1000000007
using namespace std;
unsigned long long int reverse(unsigned long long int n)
{
	unsigned long long int rev_num=0;
	while(n>0)
	{
		rev_num=rev_num*10+n%10;
		n=n/10;
	}
	return rev_num;
}

unsigned long long int call_pow(unsigned long long int x,unsigned long long int n)//divide and conquer approach to solve above code..
{
	if(n==0)
	{
		return 1;
	}
	unsigned long long int temp=call_pow(x,n/2);
	if(n%2==0)
	{
		return ((temp)%mod*(temp)%mod)%mod;
	}
	else
	{
		return ((x)*(temp)%mod*(temp)%mod)%mod;
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned long long int n;
		std::cin>>n;
		if(n<=9)
		{
			std::cout<<call_pow(n,n)%mod<<endl;
		}
		else
		{
			unsigned long long int r=reverse(n);
			std::cout<<call_pow(n,r)%mod<<endl;
		}
	}
	return 0;
}
