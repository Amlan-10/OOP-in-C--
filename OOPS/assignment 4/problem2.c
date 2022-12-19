#include<stdio.h>
#include<malloc.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int *a;
     a=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

for(int i=0;i<n-1;i++){
    int temp;
    for(int j=0;j<n-i-1;j++){
        if(a[j+1]<a[j])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
     }
  }
  printf("The second largest element is : %d",a[n-2]);
return 0;
}