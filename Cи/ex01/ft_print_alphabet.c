/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:43:10 by user              #+#    #+#             */
/*   Updated: 2024/03/03 16:42:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}
void ft_print_alphabet(void)
{
    char letter;
    letter = 'a';
    while (letter < 'z')
    {
        ft_putchar(letter);
        letter++;
    }
}
int main(void) 
{
    ft_print_alphabet();
}
