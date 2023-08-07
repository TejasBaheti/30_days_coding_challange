#include<iostream>
using namespace std;

int main()
{
	int x;
	int arr[x];
	cout<<"Enter the number of elements in an array : ";
	cin>> x;
	
	cout<<"Enter the array elements";
	for(int i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	
	int n;
	cout<<" Enter the Number of elements to be shifted : ";
	cin>> n ;
	int temp[x];
	int k =0;
	for(int i=n;i<x;i++)
	{
		temp[k]=arr[i];
		k++;
	}
	
	for(int i=0;i<n;i++)
	{
		temp[k]=arr[i];
		k++;
	}
	
	for(int i=0;i<x;i++)
	{
		arr[i]=temp[i];
		cout<<arr[i]<<"  ";
	}
}
