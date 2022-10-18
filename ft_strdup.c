/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:07:20 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/17 17:10:47 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		c1;
	int		largo;

	largo = ft_strlen(s);
	dup = (char *) malloc((largo + 1) * sizeof(char));
	if (dup != (char *) NULL)
	{
		c1 = 0;
	while (c1 < largo && dup[c1] != (char) NULL)
		{
			dup[c1] = (char) s[c1];
			c1++;
		}
		return (dup);
	}
	else
	{
		return ((char *) NULL);
	}
}
