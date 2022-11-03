#include<iostream>
using namespace std;

	void printArray(int *A, int n)
	{
		for(int i = 0; i < n; i++)
		{
			cout<< A[i] << " ";
		}cout<< "\n";
	}
	
	void insertionSort(int *A, int n)
	{ 
	    int key,j;
	for(int i =1; i <= n-1; i++) // for passes
	{
		key = A[i];
		j = i-1;
		// loop for each passes
		while(j>=0 && A[j] > key){
		A[j+1] = A[j];
		j--;
		}
		A[j+1] = key;
	}

	    
	}


int main()
{
	int A[] = {12,54,65,7,23,9};	// input array 
	int n = 6;						// size of array
	printArray(A,n); 	// print array before sorting 
	insertionSort(A,n);	// sorting algorithm application
	printArray(A,n);	// print array after sorting

return 0;
}	