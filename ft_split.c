/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:03:28 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:03:51 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int chr);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(char *dst, char *src, int n);

char	**ft_split(char const *s, char c)
{
	char	*mem;
	int		row;
	int		cont;
	char	**retorno;

	cont = 0;
	row = 0;
	mem = (char *)malloc(ft_strlen(s) * sizeof(char));
	ft_memcpy(mem, (char *)s, ft_strlen(s));
	retorno = (char **)malloc(3 * sizeof(char *));
	retorno[row] = &mem[cont];
	while (mem[cont] != '\0')
	{
		cont++;
		if (mem[cont] == c)
		{
			row++;
			mem[cont] = 0;
			cont++;
			retorno[row] = &mem[cont];
		}
	}
	return (retorno);
}
