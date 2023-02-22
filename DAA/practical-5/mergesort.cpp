#include<iostream>
using namespace std;


void merge(int arr,int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
    
	//temp array
	int a[n1];
	int b[n2];

	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}

	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+i+1];
	}

	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2)
	{

	}



}
void mergesort(int arr,int l,int r){
    if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);

		merge(arr,l,mid,r);
	}
}


int main()
{
	return 0;
}