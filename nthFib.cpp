#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include<stack>
#include<deque>
#include<queue>

using namespace std;

int nthfibNum(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return (nthfibNum(n-1)+nthfibNum(n-2));
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n;
		std::cin>>n;
		std::cout<<nthfibNum(n)<<endl;
	}
	return 0;
}
