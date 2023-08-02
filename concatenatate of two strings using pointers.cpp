#include <stdio.h>  
int main()  
{  
  char string1[20];   
  char string2[20];   
  int i=0,j=0;   
  char *str1;   
  char *str2;   
  str1=string1;  
  str2=string2;  
  printf("Enter the first string");  
  scanf("%s",string1);  
  printf("\nEnter the second string");  
  scanf("%s", string2);  
  while(string1[i]!='\0')  
  {  
        
     ++str1;  
     i++;  
  }  
  while(string2[j]!='\0')  
  {  
      *str1=*str2;  
      str1++;  
      str2++;  
      j++;  
  }
  printf("%d\n",j);
  string1[j+i]='\0' ;
  printf("The concatenated string is\n");
  j=0;
  while(string1[j]!='\0')
     {
     	printf("%c",string1[j]);
     	j++;
	   }  
  
    return 0;  
}
