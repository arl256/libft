/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:12:20 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:12:24 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t size);
size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *larga, const char *corta, size_t len)
{
	size_t	cont;

	cont = 0;
	if (ft_strlen(corta) == 0)
		return ((char *)larga);
	while ((char)larga[cont] >= '\0' && cont < len)
	{
		if (ft_strncmp((char *)&larga[cont], corta, ft_strlen(corta)) == 0)
		{
			if (ft_strlen(corta) + cont > len)
			{
				return (0);
			}
			return ((char *) &larga[(cont)]);
		}
		cont++;
	}
	return (0);
}
