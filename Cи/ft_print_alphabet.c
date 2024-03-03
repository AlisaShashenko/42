#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}
void ft_print_alphabet(void)
{
  char letra;

  for (letra = 'a'; letra <= 'z'; letra++)
  {
    ft_putchar(letra);
  }
}
int main(void)
{
	ft_print_alphabet();
}
