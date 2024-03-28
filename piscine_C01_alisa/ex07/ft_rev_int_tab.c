/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashashen <ashashen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:20:39 by ashashen          #+#    #+#             */
/*   Updated: 2024/03/20 18:30:47 by ashashen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    j = size - 1;
    while (i < j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i ++;
        j --;
    }
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_rev_int_tab(tab, size);

    while (i < size)
    {
    printf("%d ", tab[i]);
    i ++;
    return (0);
    }
}