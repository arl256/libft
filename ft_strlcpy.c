/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:13:52 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/13 18:35:05 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	c_dst;
	size_t	c_src;

	c_src = ft_strlen(src);
	if (n >= c_src)
	{
		return (-1);
	}
	c_dst = 0;
	while (c_dst < n && ((char *)src)[c_src] != '\0')
	{
		dst[c_src + c_dst] = ((char *)src)[c_dst];
		c_dst++;
	}
	dst[c_src + c_dst] = '\0';
	return (c_dst - 1);
}
