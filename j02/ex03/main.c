#include <unistd.h>
#include <stdio.h>
void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_print_comb(void)
{
  int i;
  int j;
  int k;
  int count;

  i = 48;
  j = 49;
  k = 50;
  count = 48;
  while (i <= 55)
  {
    while (j <= 56)
    {
      while (k <= 57)
      {
        ft_putchar(i);
        ft_putchar(j);
        ft_putchar(k);
        ft_putchar(',');
        ft_putchar(' ');
        k++;
      }
      j++;
      k = '3';
    }
    i++;
    j = '0';
  }
}

int   main(void)
{
  ft_print_comb();
  return 0;
}