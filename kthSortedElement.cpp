#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<queue>
#include<list>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

unsigned long long int printArray(unsigned long long int arr3[],unsigned long long int t)
{
	return arr3[t-1];
}
/*
unsigned long long int BinarySearch(unsigned long long int arr[],unsigned long long int r,unsigned long long l,unsigned long long t)
{
	if(l>=r)
	{
		unsigned long long int mid=r+(l-r)/2;
		if(arr[mid]==t)
		{
			return arr[mid+1];
		}
		else if(arr[mid]>t)
		{
			return BinarySearch(arr,r,mid-1,t);
		}
		else 
		{
			return BinarySearch(arr,mid+1,l,t);
		}
	}
}*/

unsigned long long int kthElement(unsigned long long int arr1[],unsigned long long int arr2[],unsigned long long int n,unsigned long long int m,unsigned long long int t)
{
	    int k=0,i,j;
		i=0,j=0;
		unsigned long long int  *arr3=new unsigned long long int[n+m];
		while(i<n && j<m)
		{
			if(arr1[i]>arr2[j])
			{
				arr3[k++]=arr2[j++];
			}
			else
			{
				arr3[k++]=arr1[i++];
			}
		}
		while(i<n)
		{
			arr3[k++]=arr1[i++];
		}
		while(j<m)
		{
			arr3[k++]=arr2[j++];
		}
		return printArray(arr3,t);
		//return (BinarySearch(arr3,0,(n+m)-1,t));
}

int main()
{
	int test,i;
	std::cin>>test;
	while(test--)
	{
		unsigned long long int n,m,k;
		std::cin>>n>>m>>k;
		unsigned long long int *arr1=new unsigned long long int[n];
		unsigned long long int *arr2=new unsigned long long int[m];
		for(i=0;i<n;i++)
		{
			std::cin>>arr1[i];
		}
		for(i=0;i<m;i++)
		{
			std::cin>>arr2[i];
		}
		std::cout<<kthElement(arr1,arr2,n,m,k)<<endl;
	}
	return 0;
}
