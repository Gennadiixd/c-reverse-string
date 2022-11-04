#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
        break;
      }
    }

    /* Actually store the thing. */
    str[index++] = current_char;
  }

  return str;
}

char *reverse(char *str)
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

int main()
{
  char *str_from_cli = read_line_cli();
  char *str_reversed = reverse(str_from_cli);

  printf("%s", str_reversed);
}