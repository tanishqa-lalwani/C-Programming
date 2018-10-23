#include<stdio.h>
int main()
{
        int n,m,i,j;
        printf("\n Enter the rows and columns of matrix\n");
        scanf("%d %d",&n,&m);
        int a[n][m],b[m][n];
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
         for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                       b[j][i]=a[i][j];
                }
        }
        printf("\n Transpose of given matrix is\n");
         for(i=0;i<m;i++)
        {
        printf("\n");
                for(j=0;j<n;j++)
                {
                     printf("%d",b[i][j]);
                }
        }
        
}

printf("New matrix is");
printf("\n");
for(i=0;i<n;i++)
{

for(j=0;j<m;j++)
{

printf("%d",a[j][i]);
}
printf("\n");

}
return 0;
}
