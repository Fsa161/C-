#include <stdio.h>
#include <ctype.h>

int main(void) {
  char x = 'a';
  printf("Hello World\n"); 
  printf("The value of x is %i\n", toupper(x));
  printf("%s", isalpha(x)? "True" : "False");
  return 0;


}