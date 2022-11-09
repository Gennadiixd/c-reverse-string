#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char *read_line_cli()
{
  char *str = NULL;
  size_t size = 0, index = 0;
  int current_char = EOF;
  int CHUNKSIZE = 5 * sizeof(char);

  while (current_char)
  {
    current_char = getc(stdin);

    /* Check if we need to stop. */
    if (current_char == EOF || current_char == '\n')
      current_char = 0;

    /* Check if we need to expand. */
    if (size <= index)
    {
      size += CHUNKSIZE;
      str = realloc(str, size);
      if (!str)
      {
        free(str);
        str = NULL;
        exit(1);
      }
    }

    /* Actually store the thing. */
    str[index++] = current_char;
  }

  return str;
}

char *get_reversed(char *str)
{
  char *reversed;
  reversed = (char *)malloc(sizeof(str));

  int len = strlen(str);
  int i;
  for (i = 0; i < len; i = i + 1)
  {
    *(reversed + i) = str[len - 1 - i];
  }

  return reversed;
};

char *reverse_in_place(char *str)
{
  int len = strlen(str);
  int i;
  for (i = 0; i < floor(len / 2); i = i + 1)
  {
    *(str + i) = str[i] ^ str[len - 1 - i];
    *(str + len - 1 - i) = str[i] ^ str[len - 1 - i];
    *(str + i) = str[i] ^ str[len - 1 - i];
  }
};

int main()
{
  char *str_from_cli = read_line_cli();
  reverse_in_place(str_from_cli);

  printf("%s", str_from_cli);
}