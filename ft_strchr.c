/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:25 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/13 16:01:41 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s1);

char	*ft_strchr(const char *str, int c)
{
	int		cont;

	cont = 0;
	while (cont <= (int)ft_strlen((char *)str))
	{
		if (((char *)str)[cont] == (char)c)
		{
			return ((char *) &str[cont]);
		}
		cont++;
	}
	if (cont > (int)ft_strlen((char *)str) + 1)
	{
		return ((char *)&str[cont]);
	}
	return ((char *) NULL);
}
