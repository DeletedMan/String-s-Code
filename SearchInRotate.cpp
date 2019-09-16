#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int search( unsigned long long int  arr, unsigned long long int  n, unsigned long long int k)
{
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			flag=1;
			std::cout<<i<<endl;
			break;
		}
	}
	if(flag==0)
	{
		std::cout<<"-1"<<endl;
	}
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		 unsigned long long int  n;
		std::cin>>n;
		 unsigned long long int *arr=new  unsigned long long int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		 unsigned long long int k;
		std::cin>>k;
		search(arr,n,k);
	}
	return 0;
}
