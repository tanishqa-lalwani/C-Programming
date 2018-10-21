/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void to_check_pallidrome(char s1[]) ;
int i;

int main()
{
    char s1[50];
    printf("Enter a string");
    gets(s1);
to_check_pallidrome(s1);

    return 0;
}
void to_check_pallidrome(char s1[]) 
{
    int l1,is_pallidrome=1;
    l1=strlen(s1);
    for(i=0;i<l1/2;i++)
    {
        if(s1[i]!=s1[l1-i-1])
        is_pallidrome=0;
    }
    if(is_pallidrome==1)
    {
        printf("It is a is pallidrome");
        
    }
    else
    printf("Not a pallidrome");
}