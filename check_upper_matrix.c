/******************************************************************************

                            Find the given matrix is upper matrix or not

*******************************************************************************/

#include <stdio.h>
void to_check_upper_matrix(int a[][10],int m);
int i,j;
int main()
{
    int a[10][10];
    int m,n;
    printf("Enter number of rows and columns of array");
    scanf("%d",&m);
    scanf("%d",&n);

if(m!=n)
{
    printf("The given matrix is not square matrix");
}
    else 
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    to_check_upper_matrix(a,m);
    }
    
    return 0;
}

void to_check_upper_matrix(int a[][10],int m)    
{
    int it_is_upper=1;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j && a[i][j]!=0)
            it_is_upper=0;
        }
    }
    
    if(it_is_upper==1)
    {
        printf("It is upper triangular matrix");
        
    }
   else
   printf("It is not");
}
