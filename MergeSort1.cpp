// Program for merge sort
#include<iostream>
using namespace std;

// merge two subarrays of array[].
// first subarray is arr[begin..mid]
// second subarray is arr[mid+1..end]

void merge(int a[], int beg, int mid, int end)
{
	int i, j, k;
	
	int n1 = mid - beg +1;	// size of array 1 (left array)
	int n2 = end - mid;		// size of array 2 (right array)
	// temporary arrays Lr(left array), Rt(right array)
	int Lr[n1], Rt[n2];	
	
	// copy data to temp arrays
	for(int i = 0; i < n1; i++)
	{
		Lr[i] = a[beg + i];


	}
	for(int j = 0; j < n2 ; j++)
		{
			Rt[j] = a[mid+1+j];
		}
		
		i = 0; 
		j = 0;
		k = beg; // initial index of merged sub-array
		
		while(i<n1 && j<n2)
		{
			if(Lr[i] <= Rt[j])
			{
				a[k] = Lr[i];
				i++;
			}
			else{
				a[k] = Rt[j];
				j++;
			}
			k++;
		}
		while(i < n1)
		{
			a[k] = Lr[i];
			i++;
			k++;
		}
		while(j < n2)
		{
			a[k] = Rt[j];
			j++;
			k++;
		}
}
	void mergeSort(int a[], int beg, int end)
	{
		if(beg < end)
		{
			int mid = (beg + end )/2;
		mergeSort(a, beg, mid);
		mergeSort(a, mid + 1, end);
		merge(a, beg, mid, end);
		}
	}
		
	// function to print array
	void printArray(int a[], int n)
	{
		int i; 
		for(i = 0; i < n; i++)
		{
			cout<< a[i]<<" ";
		}
	}		
		
	int main()
	{
		
		int a[] = { 10,29,23,4,14,19,49,54 };
		int n = 8;
		// or int n = sizeof(a) / sizeof(a[0]);
		cout<<"Before sorting array elements are : \n" ;
		printArray(a , n);
		cout<< endl;
		mergeSort(a , 0 , n-1);
		cout<<"After sorting array elements are : \n" ;
		printArray(a , n);
		return 0;
	}
		
		
		
		
		
		
		
	
