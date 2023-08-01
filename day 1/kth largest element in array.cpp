#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements in an array :";
	cin>> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<" enter "<<i+1 <<" element :";
		cin>>arr[i];
		cout<<endl;
	}
	
	cout<<"Given array is :";
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	
	cout<<endl;
	int flag = 0;
	int temp;
	for(int i=0;i<n;i++)
	{
		flag = 0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
	
	int k; 
	
	cout<<" Enter the value of k :";
	cin>> k;
	
	cout<< endl<< k <<" largest number in array is : "<< arr[k-1];
	
}
