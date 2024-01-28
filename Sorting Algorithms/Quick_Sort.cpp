#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
int pivot=high; int index=low;


for(int i=low;i<high;i++)
{	
	if(arr[i]<arr[pivot]){
            swap(arr[index],arr[i]);    index++;
            }
}
swap(arr[pivot],arr[index]);
return (index);
}



void quickSort(int arr[],int low,int high)
{

if(low<high)
{
	int pi=partition(arr,low,high);

	quickSort(arr,low,pi-1);
	quickSort(arr,pi+1,high);
}
}


int main() {
int arr[]={10,7,8,9,1,5};
int n=sizeof(arr)/sizeof(arr[0]);

quickSort(arr,0,n-1);

cout<<"Sorted Array\n";
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}

