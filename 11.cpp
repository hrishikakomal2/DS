#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
	if(num <= 1)
	{
		return false;
	}
	for (int i = 2 ; i <= num/2 ;i++)
	{
		if(num%i == 0)
		{
			return false;
		}
		return true;
	}
}

int main()
{
	int n,arr[10];int count =0;
	cout<<"enter your size : ";
	cin>>n;
	cout<<"enter elements : ";
	for (int i = 0 ; i < n ; i++)
	{
		cin>>arr[i];
	}
    bool prime=false;
	for(int i =0;i< n ;i++)
	{
		prime = isPrime(arr[i]);
		if(prime == true)
		{
			count++;
		}
	}
	cout<<count;
	
}
