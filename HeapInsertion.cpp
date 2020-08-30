//Heap 
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void heapify(int arr[],int n,int i);

void insert(int arr[],int &n,int key)
{
	n=n+1;
	arr[n-1]=key;
	heapify(arr,n,n-1);
}
void swap(int *x,int *y)
{
 int temp = *x; 
    *x = *y; 
    *y = temp;
}

void heapify(int arr[],int n,int i)
{
	int parent=(i-1)/2;
	if(arr[parent]>0)
	{
	if(arr[i]>arr[parent])
	{
		swap(&arr[i],&arr[parent]);
		heapify(arr,n,parent);
	}
    }
}

 void display(int arr[],int n)
 {
 	printf("The generated heap is: ");
	for(int i=0;i<n;++i)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
 }

int main()
{
	int arr[MAX],n,i,key;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the key to be inserted: ");
	scanf("%d",&key);
	insert(arr,n,key);
	display(arr,n);
	return 0;
}
