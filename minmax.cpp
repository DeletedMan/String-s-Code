#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct minmax
{
	int max;
	int min;
};

struct minmax MinMax(int arr[],int n)
{
	struct minmax pair;
	int i;
	if(n%2==0)
	{
		if(arr[0]>arr[1])
		{
			pair.max=arr[0];
			pair.min=arr[1];
		}
		else
		{
			pair.min=arr[0];
			pair.max=arr[1];
		}
		i=i+2;
	}
	else
	{
		pair.max=arr[0];
		pair.min=arr[0];
		i=i+1;
	}
	while(i<n-1)
	{
		if(arr[i]>arr[i+1])
		{
			if(arr[i]>pair.max)
			{
				pair.max=arr[i];
			}
			if(arr[i+1]<pair.min)
			{
				pair.min=arr[i+1];
			}
		}
		else
		{
			if(arr[i+1]>pair.max)
			{
				pair.max=arr[i+1];
			}
			if(arr[i]<pair.min)
			{
				pair.min=arr[i];
			}
		}
		i=i+2;
	}
	return pair;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n;
		std::cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		struct minmax paras=MinMax(arr,n);
		std::cout<<paras.max<<" "<<paras.min<<endl;
	}
	return 0;
}
