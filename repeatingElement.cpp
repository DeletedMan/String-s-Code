#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void findrepeatedElement(long long int arr[],long long int n)
{
  long long int *hash=new long long int[n-2];
  int i;
  for(i=0;i<n;i++)
  {
      if(hash[arr[i]]==1)
      {
          std::cout<<arr[i]<<" ";
      }
      else
      {
          hash[arr[i]]++;
      }
  }
}

int main() 
{
    int test;
    std::cin>>test;
    while(test--)
    {
        long long int n;
        std::cin>>n;
        long long int *arr=new long long int[n+2];
        for(int i=0;i<n+2;i++)
        {
            std::cin>>arr[i];
        }
        findrepeatedElement(arr,n+2);
        std::cout<<endl;
    }
    return 0;
}
