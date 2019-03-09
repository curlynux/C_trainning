#include <unistd.h>

void  ft_puchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_numbers(void)
{
  int i;

  i = 48;
  while (i <= 57)
    ft_puchar(i++);
}

int   main(void)
{
  ft_print_numbers();
  return 0;
}