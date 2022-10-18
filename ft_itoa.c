/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:44:39 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 14:44:53 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

int	largo(int n)
{
	int	cont;

	cont = 0;
	if (n < 0)
	{
		cont++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		cont++;
	}
	cont++;
	return (cont + 1);
}

char	*ft_swap(char *entrada)
{
	int		largo;
	int		cont;
	int		fin;
	char	medio;

	cont = 0;
	largo = ft_strlen(entrada);
	fin = (largo - 1) / 2;
	if (entrada[0] == '-')
	{
		cont++;
		fin = (largo - 1) / 2;
	}
	while (cont <= fin)
	{
		medio = entrada[cont];
		entrada[cont] = entrada[largo -1];
		entrada[largo - 1] = medio;
		cont++;
		largo--;
	}
	return (entrada);
}

char	*ft_itoa(int n)
{
	int		cont;
	int		d;
	char	*donde;

	cont = 0;
	donde = (char *) malloc(largo(n) * sizeof(char));
	if (n < 0)
	{
		donde[cont] = '-';
		cont++;
		n = -n;
	}
	while (n > 9)
	{
		d = n % 10;
		n = n / 10;
		donde[cont] = d + '0';
		cont++;
	}
	donde[cont] = n + 48;
	donde[cont + 1] = '\0';
	donde = ft_swap(donde);
	return (donde);
}
