/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:55:02 by user              #+#    #+#             */
/*   Updated: 2024/03/03 18:02:17 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}
void ft_print_reverse_alphabet(void)
{
  char letra;

  for (letra = 'z'; letra >= 'a'; letra--)
  {
    ft_putchar(letra);
  }
}
int main(void)
{
	ft_print_reverse_alphabet();
}