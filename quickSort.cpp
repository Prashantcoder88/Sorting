
#include<iostream>
using namespace std;
    void printArray(int* A, int n){
        for(int i = 0; i < n; i++)
        {
           
            cout<<A[i]<<" ";
        }
       cout<<"\n";
    }
    int partition(int A[], int low, int high){
        int pivot = A[low];
        int i = low + 1;
        int j = high;
        int temp;
        do{
        while(A[i] <= pivot){
            i++;
        }
        while(A[j] > pivot){
            j--;
        }
        if(i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
        }while(i <j);
            // swap A[low] and A[j]
        temp = A[low];
        A[low] = A[j];
        A[j] = temp;
       return j;
    }
    void quickSort(int A[], int low, int high)
    {
        int partitionIndex; // index of pivot after partition
        if(low < high){
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A,partitionIndex + 1, high);  // sort right subarray
        }
    }
int main() {
   int A[] = { 41,52,31,39,16,17,2,3,1,10};
   int n = 10;
   cout<<" Array before sorting: "<<endl;
   printArray(A,n); // array before sorting
   quickSort(A,0,n-1); // sorting procedure
   cout<<" Array after sorting: "<<endl;
   printArray(A,n); // array after sorting

    return 0;
}