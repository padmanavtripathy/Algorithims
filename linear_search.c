#include<stdio.h>
int main()
{
    int arr[]={1,3,4,5,6,7,9,8};
    int key;
    printf("Enter the key for searching:");
    scanf("%d",&key);
    for(int i=0;i<8;i++)
    {
        if (arr[i] == key)
        {
            printf("%d",i);
        }
    }
    printf("THE VALUE IS NOT IN LIST:");
}