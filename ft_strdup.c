/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:07:20 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:07:40 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		c1;
	int		largo;

	largo = ft_strlen(s);
	dup = (char *) malloc(largo * sizeof(char));
	c1 = 0;
	while (c1 < largo)
	{
		dup[c1] = s[c1];
		dup[c1 + largo] = s[c1];
		c1++;
	}
	dup[c1 + largo] = '\0';
	return (dup);
}
