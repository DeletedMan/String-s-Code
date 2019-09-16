#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void fuck_u(long long int arr[],long long int n,int max)
{
    sort(arr,arr+n);
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            std::cout<<arr[i]<<" ";
            break;
        }
    }
    long long int _xor[1000000];
    memset(_xor,0,sizeof(_xor));
    for(i=0;i<n;i++)
    {
        _xor[arr[i]]++;
    }
    for(int k=0;k<max;k++)
    {
		if(_xor[k]==0 && k!=0)
		{
			std::cout<<k;
			break;
		}
	}
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
        long long int *arr=new long long int[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
        fuck_u(arr,n,max);
        std::cout<<endl;
    }
    return 0;
}
