#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<queue>
#include<list>
#include<algorithm>
#include<map>
using namespace std;

void findMissing(int arr[],int start,int end,int diff)
{
	int flag=0;
	if(end>=start)
	{
		int mid=start+(end-start)/2;
		if(arr[mid+1]-arr[mid]!=diff)
		{
			std::cout<<arr[mid]+diff<<endl;
			flag=1;
		}
		if(arr[mid]-arr[mid-1]!=diff)
		{
			std::cout<<arr[mid-1]+diff<<endl;
			flag=1;
		}
		if(arr[mid]==arr[0]+mid*diff)
		{
			findMissing(arr,mid+1,end,diff);
		}
		else
		{
			findMissing(arr,start,mid-1,diff);
		}
	}
	if(flag==0)
	{
		std::cout<<"Not Found"<<endl;
	}
	return;
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
	    int diff;
	    std::cin>>diff;
	    findMissing(arr,0,n-1,d);
	}
	return 0;
}
