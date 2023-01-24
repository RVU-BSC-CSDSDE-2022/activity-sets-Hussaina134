//Write a C program to compare two strings, character by character.
//> For example, `Hello` should be equal to `Hello`, but not equal to hello`.`
//> `Hello` will be lesser than `Hellw` (alphabetical order).

#include <stdio.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);


void input_two_strings(char *string1, char *string2)
{
 printf("Enter the first string :\n");
  scanf("%s",string1);
printf("Enter the second string:\n");
  scanf("%s",string2);
}
int stringcompare(char *string1, char *string2)
{  
    int result=0, i=0;
    int compare=stringcompare(string1,string2);  
  if(compare==0)  
  printf("strings are equal");  
 else  
 printf("strings are not equal");  
return 0;  

     if(string1[i]>string2[i])
       return 1;
  else return 2;
}
void output(char *string1, char *string2, int result)
{
 
  if(result==1)
    printf("%s is greater\n", string1);
  if(result==2)
     printf("%s is greater\n", string2);
  
}
int main()
{
  char string1[10],string2[10];
  int result=0;
  input_two_strings(string1,string2);
  result=stringcompare(string1, string2);
 output(string1, string2, result);
  }