#include<stdio.h>
int main()
{
int a[50][50];
int i,j;

printf("Enter rows");
int m,n;
scanf("%d",&m);
printf("Enter columns");
scanf("%d",&n);
int t;

printf("Enter elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter element [%d,%d] : ",i,j);
scanf("%d",&a[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
t=a[i][j];
a[i][j]=a[j][i];
a[j][i]=t;
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
