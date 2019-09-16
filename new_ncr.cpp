#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

unsigned int ncr(unsigned int n,unsigned int k)
{
	if(k>n)
	{
		return 0;
	}
	unsigned int arr[n+1][k+1];
	int i,j;
	for(i=1;i<=n;i++)
	{
		arr[i][0]=1;
	}
	for(j=0;j>=k;j++)
	{
		arr[0][j]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j>i)
			{
				arr[i][j]=0;
			}
			else if(i==1)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=(arr[i-1][j-1]%mod+arr[i-1][j]%mod)%mod;
			}
		}
	}
	return (arr[n][k]);
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		unsigned int n,r;
		std::cin>>n>>r;
		std::cout<<ncr(n,r)<<endl;
	}
	return 0;
}
