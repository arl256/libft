/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:41 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:10:53 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	cont2;

	cont = 0;
	cont2 = 0;
	while (dst[cont] != '\0')
	{
		cont++;
	}
	while (cont2 < size)
	{
		dst[cont + cont2] = src[cont2];
		cont2++;
	}
	dst[cont + cont2] = '\0';
	return (cont + cont2);
}
