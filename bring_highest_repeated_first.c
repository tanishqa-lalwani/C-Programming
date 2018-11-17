/******************************************************************************

                         find highest repeated character and bring it in
                         front of the string
*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int c[26]={0},i=0,l1,j;
   char str[10]={0};
    
    gets(s);
    l1=strlen(s);
    while(s[i]!='\0')
    {
        if(s[i]>='a' && s[i]<='z')
        {
        c[s[i]-97]++;
        }
        else if (s[i]>='A' && s[i]<='Z')
        {
        c[s[i]-65]++;
        }
        i++;
    }
    int max=c[0],k,a;
    for(i=0;i<26;i++)
    {
       a=c[i];
       if(a>max)
       {
       max=a;
      k=i+97;
       }
    }
    printf("%d %c",max,k);
    printf("\n");
    
   
    
    j=max;
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=k)
        {
            str[j]=s[i];
            j++;
            }
            str[j]='\0';
        }
         for(i=0;i<max;i++)
    {
      str[i]=k;  
    }
    puts(str);
  //  for(i=0;str[i]!='\0';i++)
    //printf("\n%c",str[i]);
    
    return 0;
}