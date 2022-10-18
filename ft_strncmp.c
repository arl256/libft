/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:11:57 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/17 12:05:22 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s1);

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	c1;

	c1 = 0;
	while (c1 < size && c1 <= ft_strlen(s1))
	{
		if ((unsigned char)s1[c1] > (unsigned char)s2[c1])
		{
			return (1);
		}
		if ((unsigned char)s1[c1] < (unsigned char)s2[c1])
		{
			return (-1);
		}
		c1++;
	}
	return (0);
}
