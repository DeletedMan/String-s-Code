#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<deque>
#include<set>
#include<map>
#include<list>

using namespace std;

void findLongestConseqSubseq(int arr[],long long int n)
{
	sort(arr,arr+n);
	int curr_count=1,prev_count=1;
	for(int i=0;i<n;i++)
	{
		if((arr[i]+1)==arr[i+1])
		{
			curr_count++;
			if(curr_count>prev_count)
			{
				prev_count=curr_count;
			}
		}
		else
		{
			curr_count=1;
		}
	}
	std::cout<<prev_count<<endl;
	return;
}
int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		long long int n;
		std::cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			std::cin>>arr[i];
		}
		findLongestConseqSubseq(arr,n);
	}
	return 0;
}
