/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:13:52 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/17 13:32:21 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	c_dst;

	c_dst = 0;
	if(n > 0)
	{
		while (c_dst < n-1 && ((char *)src)[c_dst] != '\0')
		{
			dst[c_dst] = ((char *)src)[c_dst];
			c_dst++;
		}
		dst[c_dst] = '\0';
	}
	return ((size_t)ft_strlen(src));
}
