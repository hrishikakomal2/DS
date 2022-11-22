#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
	int largest = arr[0];
	
	for ( int i =1;i<n;i++)
	{
		if(arr[i] > largest){
			largest = arr[i];
		}
		
	}
	int second = INT_MIN;
	for (int i = 0;i<n;i++)
	{
		if(arr[i] != largest && arr[i] < largest)
		{
			second = arr[i];
		}
	}
	return second;
}
int main()
{
	int n;
	int arr[10];
	cout<<"size of array : ";
	cin>>n;
	cout<<"Enter elements : ";
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
		
	cout<<secondLargest(arr,n);
}
