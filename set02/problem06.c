 //Write a program to reverse a string.
  
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
  int i;
  input_string(&a);
  str_reverse(&str, &rev_str);
  output(&a, &reverse_a);
  return 0;
}
void input_string(char *a)
{
  int i;
  printf("Enter a string:\n");
  scanf("%s",a);
  //return i;
}
void str_reverse(char *str, char *rev_str)
{
  int i;
  for (i = 0; i < strlen(str); i++){
    rev_str[i] = str[strlen(str)-i-1];
  }
  //return rev_str;
}
void output(char *a, char *reverse_a)
{
  str_reverse(a, reverse_a);
  printf("The reversed string is %s", reverse_a);
}