/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:46:09 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 14:46:15 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*primera;
	unsigned char	*segunda;

	primera = (unsigned char *) s1;
	segunda = (unsigned char *) s2;
	while (size > 0)
	{
		if (*primera == *segunda)
		{
			primera++;
			segunda++;
			size--;
		}
		else
		{
			return (*primera - *segunda);
		}
	}
	return (0);
}
