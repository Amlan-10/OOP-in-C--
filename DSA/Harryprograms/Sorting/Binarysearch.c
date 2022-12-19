#include<stdio.h>

int binarySearch(int a[],int n,int key)
{
int l=0;int r=n-1;
while(l<=r)
{
int mid=l+(r-l)/2;
if(a[mid]==key)
{
    return mid;
}
else if(a[mid]>key)
{
    r=mid-1;
}
else if(a[mid]<key){
    l=mid+1;
}
}
return -1;
}
int main()
{
    int n,key;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);
    int ans=binarySearch(a,n,key);
    if(ans!=-1)
    {
    printf("The key is found at: %d",ans);
    }
    else
    {
        printf("Key not found!");
    }
return 0;

}
