/******************************************************************************
Print Multiplication table of 2 nos
*******************************************************************************/

#include <stdio.h>
    int** multi_num(int m,int p );
int i,j;

int main()

{
  
    
    int a;
    scanf("%d",&a);

    int b;
    scanf("%d",&b);

  
         
   int **u= multi_num(a,b);
    for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
               printf(" %d ",u[i][j]);
                
            }
          printf("\n");  
        }
    return 0;
    
}
    int** multi_num(int m,int p )
    {
        
    int r=5,c=5;

    int **arr = (int **) malloc(r * sizeof(int *)); 
    for (i=0; i<r; i++) 
         arr[i] = (int *)malloc(c * sizeof(int)); 
         
            //6 int*
            //*= 5*int
            ///int[6][5]
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                arr[i][j]=(m*(i+1)*p*(j+1));
                
            }
            
        }
        return arr;
    
      }

