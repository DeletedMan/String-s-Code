#include<list>
#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

void least_average(int arr[],int n,int k)
{
	int curr_sum=0,min_sum;
	int res_index,i;
	int last_index;
	for(i=0;i<k;i++)
	{
		curr_sum+=arr[i];
	}
	min_sum=curr_sum;
	for(i=k;i<n;i++)
	{
		curr_sum+=arr[i]-arr[i-k];
		if(curr_sum<min_sum)
		{
			min_sum=curr_sum;
			res_index=i-k+2;
			last_index=i+1;
		}
	}
	std::cout<<res_index<<" "<<res_index+k-1<<endl;
	return;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		int n,k;
		std::cin>>n>>k;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		least_average(arr,n,k);
	}
	return 0;
}
