#include<stdio.h>
void student_with_max_marks(int index);

int a[4][5];
int main()
{
 int id,n,index,i,j;

 printf("\n Enter the marks as per the Id os student \n");
 for(i=0;i<4;i++)
 { 
        for(j=0;j<5;j++)
        {
	 printf("Enter element [%d,%d] : ",i,j);
                scanf("%d",&a[i][j]);
                
        }
    
 
 
 }

  for(i=0;i<4;i++)
 { 
     
        for(j=0;j<5;j++)
        {
                printf("%d ",a[i][j]);
                
        }
         printf("\n");
   
 
 
 }
  printf("\n Enter the subject index \n" );
 
 scanf("%d",&index);
student_with_max_marks(index);
}
 
void student_with_max_marks(int index)
{       int k,max,i,j;
j=index-1;
        max=a[1][j];
        for(i=1;i<4;i++)
        {
                if(a[i][j]>=max)
                {
                max=a[i][j];
                k=i;
        }
        }

printf("The highest marks is %d and index is %d ",max,100 + k 	+ 1);
}
