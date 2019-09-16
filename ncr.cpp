#include <iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

unsigned int fact(unsigned int n)
{
    unsigned int arr[n+1];
    arr[0]=1;
    for(int i=1;i<=n;i++)
    {
        arr[i]=i*arr[i-1];
    }
    return arr[n];
}

void cal_ncr(unsigned int n,unsigned int r)
{
    unsigned int a=fact(n);
    unsigned int b=fact(n-r);
    unsigned int c=fact(r);
    unsigned int result=((a%mod)/((b%mod)*(c&mod)))%mod;;
    std::cout<<result<<endl;
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
	    unsigned int n,r;
	    std::cin>>n>>r;
	    cal_ncr(n,r);
	}
	return 0;
}
