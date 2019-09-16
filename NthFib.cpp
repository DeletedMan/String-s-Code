#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int last_digit(int n)
{
	if(n<=9)
	{
		return n;
	}
	else
	{
		return (n%10);
	}
}

int nthFib(int n)
{
	int fib[n+2];
	fib[0]=1;
	fib[1]=1;
	for(int i=2;i<n+2;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	return last_digit(fib[n-1]);
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n;
		std::cin>>n;
		std::cout<<nthFib(n)<<endl;
	}
	return 0;
}
