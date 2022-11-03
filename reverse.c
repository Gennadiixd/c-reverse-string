#include <stdio.h>
#include <string.h>

int main()
{

  char str[10];
  char strReversed[10];

  printf("Enter a value :");
  scanf("%s", str);

  int i;
  for (i = strlen(str) - 1; i >= 0; i = i - 1)
  {
    strReversed[strlen(str) - i] = str[i];
  }

  printf("\nYour reversed string: %s ", strReversed);

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