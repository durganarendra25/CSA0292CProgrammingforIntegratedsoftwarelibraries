#include <stdio.h>  
#include<string.h>  
int main()  
{  
   int stringcompare;
   char str1[20];  
   char str2[20];    
   int value;   
   printf("Enter the first string : ");  
   scanf("%s",str1);
   printf("Enter the second string :");
   scanf("%s",str2);
   if(strcmp(str1,str2)==0)   
   printf("strings are same");  
   else  
   printf("strings are not same");  
   return 0;  
}  