#include<bits/stdc++.h>
using namespace std;


int main()
{
	int num, flag = 0;
	cin>>num;
	if(num == 0 || num == 1)
	{
		cout<<"not prime";
	}
	for(int i = 2;i <=num/2 ; i++)
	{
		if(num%i == 0)
		{
			cout<<"not prime";
			flag = 1;
			break;
			
		}
		
	}
	if (flag ==0)
	{
		cout<<"prime";
	}
	return(0);
}
