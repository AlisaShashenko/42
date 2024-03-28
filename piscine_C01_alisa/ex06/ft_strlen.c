/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashashen <ashashen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:27:18 by ashashen          #+#    #+#             */
/*   Updated: 2024/03/20 16:07:04 by ashashen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

/*int main(void)
{
    char    str[] = {"Hello"};
    int longitud = ft_strlen(str);
    printf("line longitud: %d\n", longitud);
    return (0);
}*/
