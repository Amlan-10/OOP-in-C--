#include<stdio.h>

void Merge(int a[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int b[r];
    while(i<=mid && j<=r)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=a[j];
            j++;k++;
        }
    }
    else{
        while(i<=r)
        {
            b[k]=a[i];
            i++;k++;
        }
    }
    for(k=l;k<=r;k++)
    {
        a[k]=b[k];
    }
}
void MergeSort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,r);
        Merge(a,l,mid,r);
    }

}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is: ");
    MergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}