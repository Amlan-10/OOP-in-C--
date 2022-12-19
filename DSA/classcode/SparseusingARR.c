#include <stdio.h>
#include <stdlib.h>
void display(int *mat1[],int,int);
void sparse(int *mat1[],int *mat2[],int n,int m,int value);
int main(){
    int **mat1,*mat2,n,m,i,j,value=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    mat1=(int*)malloc(n*sizeof(int));
    
    printf("Enter the number of coloumns: ");
    scanf("%d",&m);
    for ( i = 0; i < m; i++)
    {
        mat1[i]=(int*)malloc(m*sizeof(int));
    }
    printf("Enter the values in Matrix:\n");
    for ( i = 0; i < n; i++)
    {
        for(j=0;j<m;j++){
            printf("Enter the value in [%d][%d] position: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nThe matrix is:\n");
    display(mat1,n,m);
    for ( i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++){
            if (mat1[i][j]!=0)
            {
                value++;
            }
        }
    }
    //printf("value = %d",value);
    mat2=(int**)malloc(value*sizeof(int));
    for ( i = 0; i < (value+1); i++)
    {
        mat2[i]=(int*)malloc(3*sizeof(int));
    }
    sparse(mat1,mat2,n,m,value);
    printf("\nThe Sparse Matrix Is:\n");
    display(mat2,value+1,3);

    return 0;
}
void display(int *mat1[],int n,int m){
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for(j = 0; j<m; j++){
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }
    
}
void sparse(int *mat1[],int *mat2[],int n,int m,int value){
    int c=1;
    mat2[0][0]=n;
    mat2[0][1]=m;
    mat2[0][2]=value;
    for (int i = 0; i < n; i++)//row count
    {
        for(int j=0;j<m;j++){//j is for coloumn count
            if (mat1[i][j]!=0)
            {
                mat2[c][0]=i;
                mat2[c][1]=j;
                mat2[c][2]=mat1[i][j];//it will put the value from original matrix
                c++;
            }
            
        }
    }
}