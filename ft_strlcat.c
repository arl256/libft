/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:41 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/17 16:35:28 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	cont;
    size_t  primero;
    size_t  segundo;

    primero = ft_strlen(dst);
    segundo = ft_strlen(src);
	cont = 0;
	if(n > 0)
	{
		while (cont< n - primero - 1 && ((char *)src)[cont] != '\0')
		{
			dst[primero + cont] = ((char *)src)[cont];
			cont++;
		}
		dst[primero + cont] = '\0';
	}
	    else
    {
        return (segundo);
    }
    return (primero + segundo);
}
