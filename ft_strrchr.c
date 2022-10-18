/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:13:02 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/13 16:14:24 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s1);

char	*ft_strrchr(const char *str, int c)
{
	int		cont;

	cont = ft_strlen((char *)str);
	while (cont >= 0)
	{
		if (((char *)str)[cont] == (char)c)
		{
			return ((char *) &str[cont]);
		}
		cont--;
	}
	return ((char *) NULL);
}
