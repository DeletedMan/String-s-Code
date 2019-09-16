#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<cmath>
using namespace std;

int bitonic(unsigned long int arr[],int start,int end,int x)
{
    if(end>=start)
    {
        unsigned long int mid=start+(end-start)/2;
        if(arr[mid]==x)
        {
            return 1;
        }
        if(x>arr[mid])
        {
            return bitonic(arr,mid+1,end,x);
        }
        else
        {
            return bitonic(arr,start,mid-1,x);
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
        unsigned long int n;
        std::cin>>n;
        unsigned long int *arr=new unsigned long int[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>arr[i];
        }
        sort(arr,arr+n);
        int x;
        std::cin>>x;
        if(bitonic(arr,0,n-1,x))
        {
            std::cout<<"1"<<endl;
        }
        else
        {
            std::cout<<"-1"<<endl;
        }
    }
    return 0;
}
