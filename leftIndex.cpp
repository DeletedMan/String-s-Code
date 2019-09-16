#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<set>
#include<map>
#include<list>

using namespace std;

int leftIndex(int arr[],int n)
{
	return 0;
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long long int n;
		long long int *arr=new long long int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		int temp=leftIndex(arr,n);
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
