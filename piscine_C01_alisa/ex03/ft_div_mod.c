/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashashen <ashashen@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:14:00 by ashashen          #+#    #+#             */
/*   Updated: 2024/03/20 12:45:57 by ashashen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 7;
	b = 2;
	
	printf("a : %d, b : %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
	return (0);
}*/
