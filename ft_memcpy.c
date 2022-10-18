/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:49:02 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/13 13:40:25 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n && src != 0)
	{
		((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dst);
}
