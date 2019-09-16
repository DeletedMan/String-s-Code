#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<stack>
#include<map>
#include<set>

using namespace std;


void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		std::cout<<arr[i]<<" ";
	}
	return;
}


void shuffle(int arr[],int n)
{
	int new_arr[n];
	int i,j;
	for(i=0,j=n/2;i<n/2 && j<n;i++,j++)
	{
		arr1[i]=arr[i];
		arr1[i+1]=arr[j];
	}
	printArray(arr1,n);
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
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		shuffle(arr,n);
	}
	return 0;
}
