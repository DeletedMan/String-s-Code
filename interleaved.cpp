#include<iostream>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

int isInterleaved(char *a,char *b,char *c)
{
	if(!(*a|| *b || *c))
	{
		return 1;
	}
	if(*c=='\0')
	{
		return 0;
	}
	else if(*c==*a)
	{
		return(isInterleaved(a+1,b,c+1));
	}
	else if(*c==*b)
	{
		return(isInterleaved(a,b+1,c+1));
	}
}

int main()
{
	int test;
	std::cin>>test;
	while(test--)
	{
		char a[100],b[100],c[100];
		std::cin>>a>>b>>c;
		if(isInterleaved(a,b,c))
		{
			std::cout<<"1"<<endl;
		}
		else
		{
			std::cout<<"0"<<endl;
		}
	}
	return 0;
}
