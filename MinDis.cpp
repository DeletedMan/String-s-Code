#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

long long minDist(long long arr[],long long n,long long x,long long y)
{
	int prev,i;
	long long min_dist=INT_MAX,flag1=0,flag2=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			flag1=1;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==y)
		{
			flag2=1;
		}
	}
	if(flag1==0 || flag2==0)
	{
		return -1;
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==x || arr[i]==y)
		{
			prev=i;
			break;
		}
	}
	for(;i<n;i++)
	{
		if(arr[i]==x || arr[i]==y)
		{
			if(arr[prev]!=arr[i] && i-prev<min_dist)
			{
				min_dist=i-prev;
				prev=i;
			}
			else
			{
				prev=i;
			}
			
		}
	}
	return min_dist;
}
int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		long long n;
		std::cin>>n;
		long long *arr=new long long[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		long long x,y;
		std::cin>>x>>y;
		long long temp=minDist(arr,n,x,y);
		if(temp)
		{
			std::cout<<temp<<endl;
		}
		else
		{
			std::cout<<"-1"<<endl;
		}
	}
	return 0;
}
