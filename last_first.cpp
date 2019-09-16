#include<iostream>
#include<bits/stdc++.h>
#include<list>
#include<algorithm>
#include<stack>
#include<deque>
using namespace std;

int first_Occurence(unsigned long long int arr[],int start,int end,unsigned long long int k)
{
	if(end>=start)
	{
		int mid=start+(end-start)/2;
		if(mid==0 || k>arr[mid-1] && k==arr[mid])
		{
			return mid;
		}
		else if(k>arr[mid])
		{
			return first_Occurence(arr,mid+1,end,k);
		}
		else
		{
			return first_Occurence(arr,start,mid-1,k);
		}
	}
	return -1;	
}

int last_Occurence(unsigned long long int arr[],int start,int end,unsigned long long k,int n)
{
	if(end>=start)
	{
		int mid=start+(end-start)/2;
		if(mid==n-1 || k<arr[mid+1] && arr[mid]==k)
		{
			return mid;
		}
		else if(k<arr[mid])
		{
			return last_Occurence(arr,start,mid-1,k,n);
		}
		else
		{
			return last_Occurence(arr,mid+1,end,k,n);
		}
	}
	return -1;
}

int main() 
{
    int test;
    std::cin>>test;
    while(test--)
    {
        int n;
        std::cin>>n;
        unsigned long long int *arr=new unsigned long long int[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
        unsigned long long int k;
        std::cin>>k;
        std::cout<<first_Occurence(arr,0,n-1,k)<<" ";
        std::cout<<last_Occurence(arr,0,n-1,k,n)<<endl;
    }
	return 0;
}
