/******************************************************************************

                           to find string is pallidrome using recursion
*******************************************************************************/

#include <stdio.h>
#include<string.h>
int is_pallidrome(char s[],int i,int j);
int main()
{
    int m,l;
    
   char s[50];
   printf("Enter your string");
   gets(s);
   l=strlen(s);
   m=is_pallidrome(s,0,l-1);
  if(m==1)
      printf("String is pallidrome");
      
  else 
  printf("String is not a pallidrome");
  
  return 0;

}
int is_pallidrome(char s[],int i,int j)
{
    if(j==i)
    {
        return 1;
    }
     
    else if(s[i]==s[j])
    
      return  is_pallidrome(s,++i,--j);

    else
        return 0;
    

}