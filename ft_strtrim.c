/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:26:48 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/07 00:42:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
void	*ft_memmove(char *dst, char *src, int len);
char	*ft_strchr(const char *str, int chr);

void	ft_limites( const char *cadena, const char *busca, int *ini, int *fin)
{
	int		c1;
	int		largo;

	c1 = 0;
	largo = ft_strlen(cadena) - 1;
	while (ft_strchr (busca, cadena[c1]) != (char *) NULL)
	{
		c1++;
	}
	*ini = c1;
	while (ft_strchr (busca, cadena[largo]) != (char *) NULL)
	{
		largo--;
	}
	*fin = largo + 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*retorno;
	int		*primero;
	int		*ultimo;
	int		ini;
	int		fin;
	char	*donde;

	ini = 0;
	fin = ft_strlen(s1);
	primero = &ini;
	ultimo = &fin;
	ft_limites(s1, set, primero, ultimo);
	printf("\n%d - %d\n", *primero, *ultimo);
	retorno = (char *) malloc ((*ultimo - *primero) * sizeof(char));
	if (retorno != NULL || *primero > 0)
		;
	else
	{
		return ((char *) NULL);
	}
	donde = ft_memmove (retorno, (char *)&s1[*primero], (*ultimo - *primero));
	donde[(*ultimo - *primero)] = '\0';
	return ((char *)donde);
}
