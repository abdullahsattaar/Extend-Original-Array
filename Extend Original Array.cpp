#include<iostream>
using namespace std;
int extend(int *&arr, int size)
{
   int *temp=new int[20],x,outputsize=0,y=0;
   for (int i=0; i<size; i+=2)
   {
	   x=arr[i];
	   y++;
	   for (int j=0;j<x;j++)
	   {
		   temp[j+y]=arr[i+1];
		   outputsize++;
	   }
   }
   delete arr;
   arr=temp;
   return outputsize;
}
int main()
{
	cout<<"Input size: "<<endl;
	int size;
	cin>>size;
	int *arr=new int [size];
	cout<<"input array"<<endl;
	for( int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	int h=extend(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Output Size = "<<h<<endl;


	system("pause");
	return 0;
}