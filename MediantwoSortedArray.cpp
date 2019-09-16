#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<stack>
#include<list>
using namespace std;

int findMedian(int arr1[],int arr2[],int n)
{
	if(n<=0)
	{
		return -1;
	}
	if(n==1)
	{
		return((arr1[0]+arr2[0])/2);
	}
	if(n==2)
	{
		return (floor((max(arr1[0],arr2[0])+min(arr1[1],arr2[1]))/2));
	}
	int m1=median(arr1,n);
	int m2=median(arr2,n);
	if(m1==m2)
	{
		return m1;
	}
	if(m1>m2)
	{
		if(n%2==0)
		{
			return findMedian(arr1,arr2+n/2-1,n-n/2-1);
		}
		else
		{
			return findMedian(arr1,arr2+n/2,n-n/2);
		}
	}
	if(m2>m1)
	{
		if(n%2==0)
		{
			return findMedian(arr1+n/2-1,arr2,n-n/2-1);
		}
		else
		{
			return findMedian(arr1+n/2,arr2,n-n/2);
		}
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
		int *arr1=new int[n];
		int *arr2=new int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr1[i];
		}
		for(int j=0;j<n;j++)
		{
			std::cin>>arr2[j];
		}
		findMedian(arr1,arr2,n);
	}
	return 0;
}
