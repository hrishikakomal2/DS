#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n, digit , rev = 0, num;
	cin>>n;
	num = n;
	while (n != 0)
	{
	   digit = n%10;
	   rev = (rev*10) + digit;
	   n= n/10;
	}
	if ( rev == num )
	{
		cout<<"palin";
		
	}
	else 
	{
		cout<<"not palin";
	}
	return(0);
}
