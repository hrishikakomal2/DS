#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,n,result = 0,digit;
	cin>>num;
	n = num;
	while (n!=0)
	{
		digit = n%10;
		result+=digit*digit*digit;
		n = n/10;
	}
	
	if (num == result)
	{
		cout<<"ARMSTRONG";
	}
	else
	{
		cout<<"NOT ARMSTRONG";
	}
	return(0);
}
