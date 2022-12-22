#include<stdio.h>
int search(int arr[],int first,int last,int key)
{
    int mid = (first+last)/2;
    if(first<last)
    {
    if(arr[mid] == key)
    {
        return mid;
    }
    if(arr[mid] > key)
    {

        search(arr,first,mid-1,key);
        
    }
    else
    {
        search(arr,mid+1,last,key);
    }

    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=9,first = 0, key;
    printf("Enter the value:");
    scanf("%d",&key);
    printf("%d",key);
    int index = search(arr,first,n,key);
    printf("\nThe Index Value is : %d",index);
}