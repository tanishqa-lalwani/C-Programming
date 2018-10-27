/******************************************************************************

                            find specific pattern from multiple strings
*******************************************************************************/

#include <stdio.h>
#include <string.h>

int m,i;
int search_word(char s1[],char s2[])
{
    int i,j;
   int l1=strlen(s1);
    int l2=strlen(s2);
    
     i=0;
        for(j=0;j<l1;j++)
        {
            if(s2[0]==s1[j])
            {
                i=j;
                int k=0;
               for(;k<l2;k++)
               {
                   if(s2[k]==s1[i++])
                   {
                       continue;
                   }
                   else
                    break;
               }
               
               if(k==l2)
               { 
                   //printf("found it at %d",j);
               return j+1;
               }
            }
        }
        
        return 0;
       
}

void search_strings(char p[][100],int n,char s1[])

{
    int l;
    
    for(int c=0;c<n;c++)
    {
        l=search_word(p[c],s1);
        printf("\n %s %d",p[c],l);
    }
    
}


int main()
{
  printf("Enter your string");
  char paragraph[5][100];
  for(i=0;i<5;i++)
  {
    gets(paragraph[i]);
   }

   printf("Enter the word you want to find");
   char s1[50];
   gets(s1);
   
search_strings(paragraph,5,s1);
   
   
    return 0;
}


     
