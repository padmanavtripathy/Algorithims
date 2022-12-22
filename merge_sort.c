#include<stdio.h>
void merge(int arr[],int p,int q,int r)
{
    int l1=q-p+1;
    printf("\n1st l1%10d \n",l1);
    int l2=r-q;
    printf("\n 2nd l2 %10d \n",l2);
    int S[l1];
    int R[l2];
    for(int i=0;i<l1;i++)
    {
        S[i] = arr [p+i];
    }
    for(int j=0;j<l2;j++)
    {
        R[j] = arr [q+1+j];
    }
    int k=0;
    int i=0;
    int j=0;
    for (i=0,j=0;i<=l1 && j<=l2 ; i++,j++)
    {
        if(S[i]<R[j])
        {
            arr[k]=S[i];
            k++;
        }
        else{
            arr[k]=R[j];
            k++;
        }
    }
    for(i;i<l1;i++)
    {
        arr[k]=S[i];
        k++;
    }
    for(j;j<l2;j++)
    {
        arr[k]=R[j];
        k++;
    }

}
void mergesort(int arr[],int p, int r)
{
    int q=(p+r)/2;
    if(p<=r)
    {
   


        mergesort(arr,p,q);
        printf("\n %5d %5d\n",p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }
    
}

int main()
{
    int arr[]={1,2,1,7,5,6};
    int p=0,r=5;
    printf("\n Before Sorting");
     printf("-------------------------------------------------\n");
    for(int i=p;i<=r;i++)
    {
        printf("%5d",arr[i]);
    }
    
     printf("\n After Sorting\n");
     printf("--------------------------------------------------\n");
    mergesort(arr,p,r);
    for(int i=p;i<=r;i++)
    {
        printf("%5d",arr[i]);
    }
    

}