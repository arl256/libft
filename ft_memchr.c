/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:45:34 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/17 11:59:50 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memchr( const void *s, int c, size_t n)
{
	size_t			cont;
	unsigned char	compara;

	cont = 0;
	compara = (unsigned char)c;
	while (cont < n)
	{
		if (((unsigned char *)s)[cont] == compara)
		{
			return (&(((unsigned char *)s)[cont]));
		}
		else
		{			
			cont++;
		}
	}
	return ((char *) NULL);
}
