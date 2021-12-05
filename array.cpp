#include<iostream>

using namespace std;

int search(int arr2[],int a,int b)
{
	for(int i=0; i<a; i++)
	{
	if(arr2[i]==b)
	return i;
}

return -1;
	
	
}


show(int arr1[])
{
	for(int i=0; i<5; i++)
	cout<<arr1[i];
}

int main()
{
	int arr[5];
	
	for(int i=0; i<5; i++)
	cin>>arr[i];
	
	int size=sizeof(arr)/sizeof(int);
	
	show( arr);
	cout<<"find your number on index numner "<<search(arr,size,2);

	return 0;
}
