// Bubble Sort 
#include<iostream>
using namespace std;
void printArray(int* A, int n)
{
    for(int i = 0; i<n; i++)
    {
       cout<< A[i]<<" ";
    }
    cout<<"\n";
}
void bubbleSort(int *A, int n)
{
    for(int i = 0; i < n-1; i++)  //for number of passes
    {
        for(int j = 0; j < n-i-1; j++) // for number of compare.
        {
            if(A[j] > A[j+1])
            {
                int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
            }
        }
    }
}
int main() {
    int A[] = { 12,54,65,7,23,9};
    int n = 6; // size of array 
    printArray(A,n); // print array before sorting
    bubbleSort(A,n);// function to sort the array
    printArray(A,n);// print array after sorting

    return 0;
}