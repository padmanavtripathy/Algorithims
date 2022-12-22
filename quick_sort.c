#include<stdio.h>
void quicksort(int arr[],int p,int r)
{
    if (p<=r)
    {
        int q = partition(arr,p,r);
        quicksort(arr,p,q-1);
        quicksort(arr,q+1,r);
    }

}
int partition(int arr[],int p, int r)
{
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if (arr[j] <= x)
        {
            i=i+1;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
    int temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;

    return i+1;
}
int main()
{
    int arr[]={1,2,1,7,5,6};
    int p=0,r=5;
    for(int i=p;i<=r;i++)
    {
        printf("%5d",arr[i]);
    }
    printf ("\n \t\tBefore Sorting\n");
    quicksort(arr,p,r);
    for(int i=p;i<=r;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\n\t\tAfter Sorting");
}