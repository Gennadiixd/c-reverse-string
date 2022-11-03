#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char str[100];
  char *strReversedPtr;

  printf("Enter a value :");
  scanf("%s", str);

  strReversedPtr = (char *)malloc(strlen(str) * sizeof(char));

  int i;
  for (i = strlen(str) - 1; i >= 0; i = i - 1)
  {
    *strReversedPtr = str[i];
    strReversedPtr++;
  }

  // for (i = strlen(str) - 1; i >= 0; i = i - 1)
  // {
  //   strReversedPtr--;
  // }

  // while (*strReversedPtr != '\0')
  //   printf("%c", *strReversedPtr++);

  return 0;

  // char hello[] = "Hello";
  // char world[] = "World";
  // char greeting[13];

  // strcat(greeting, hello);
  // strcat(greeting, " ");
  // strcat(greeting, world);

  // int l = strlen(greeting);

  // printf("Greeting message: %s\n", greeting);
  // printf("greeting length is %d\n", l);

  // return 0;
}