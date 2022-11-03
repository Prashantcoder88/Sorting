// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void printArray(int* A, int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout<< A[i]<< " ";
    }
    cout<<"\n";
}

void selectionSort(int *A, int n)
    {   int indexOfMin, temp;
    for(int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for(int j = i+1; j < n ; j++)
        {
            if(A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }

// swap A[i] and A[indexOfMin] 
temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;

    }
}

int main()
{
    int A[] = { 12,54,65,7,23,9};
    int n = 6;
    printArray(A,n); // print array before sorting
    selectionSort(A,n); // apply selection sorting 
    printArray(A,n);    // print after sorting
    
    
    return 0;
    }
