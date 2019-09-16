#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
#include<list>
#include<map>
#include<stack>
#define N 0
#define E 1
#define S 2 
#define W 3
using namespace std;

bool robotMove(string str)
{
	int x,y;
	x=0,y=0;
	int dir=N;
	for(int i=0;i<str.length();i++)
	{
		char move=str[i];
		if(move=='R')
		{
			dir=(dir+1)%4;	
		}
		else if(move=='L')
		{
			dir=(4+dir-1)%4;
		}
		else
		{
			if(dir==N)
			{
				y++;
			}
			else if(dir==E)
			{
				x++;
			}
			else if(dir==S)
			{
				y--;
			}
			else
			{
				x--;
			}
		}
	}
	return(x==0 && y==0);
}

int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		string str;
		std::cin>>str;
		if(robotMove(str))
		{
			std::cout<<"Circular"<<endl;
		}
		else
		{
			std:;cout<<"Not Circular"<<endl;
		}
	}
	return 0;
}
