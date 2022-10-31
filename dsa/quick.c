#include <stdio.h>
#include <stdlib.h>
int partition(int a[],int low,int high);
void printarray(int a[],int n);
void quickSort(int a[],int low,int high);
int main()
{
    int a[] = {3, 5, 2, 13, 12,1,16,4}; // higher lower is 5>3 12!<3  // 3 , 2 , 5 ,13,12 // 2,3,5,13,12
    int n = 8;                   // 5 13 12 // 5 12 13 
    printarray(a, n);
    quickSort(a, 0, n-1); //
    printarray(a, n);
}
void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // 3,5,2,13,12
    }
    printf("\n");
}
void quickSort(int a[], int low, int high) // 5
{
    int partitionindex; // 1
    if (low < high)
    { // 0<4
        partitionindex = partition(a, low, high);
        printarray(a,8);
        quickSort(a, low, partitionindex-1);
        quickSort(a, partitionindex + 1, high);
    }
}
int partition(int a[], int low, int high)
{
    int temp;
    int pivot = a[low]; // a[0] = 3
    int i = low + 1; // a[1]=5
    int j = high; // a[4]=12
    do
    {
        while (a[i] <= pivot) // 5<3
        {
            i++; // 1
        }
        while (a[j] > pivot) // 12>3 13>3 2>3
        {
            j--; // 2
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    // swap of values after j crosses i  
    temp=a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}


// understand it once again please