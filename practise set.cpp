//linear search

#include<iostream>
using namespace std;
int main()
{
	int size,search,count=0;
	cout<<"Enter The Size Of Array :";
	cin>>size;
	int arr[size];
	for(int i=1 ; i <= size; i++)
	{ 
	   cout<<"Enter the Array "<<i<<" element :";
	   cin>>arr[i];
		
	}
	
	cout<<"Now enter the element which you want to search in array :";
	cin>>search;
	for(int i=1 ; i <= size; i++)
	{ 
	   if(arr[i]==search)
	   cout<<"Your element present on "<<i<<" index\n";		
	   else
	   count++;
	}
	if(count==size)
	cout<<"Your element is not present in array";
}


