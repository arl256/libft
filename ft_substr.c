/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:14:49 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:14:54 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dup;
	unsigned int	c1;
	unsigned int	c2;

	c1 = (unsigned int) ft_strlen(s);
	dup = (char *) malloc(c1 * sizeof(char));
	c2 = 0;
	while (c2 < len && c2 < c1)
	{
		dup[c2] = s[start - 1 + c2];
		c2++;
	}
	dup[c2] = '\0';
	return (dup);
}
