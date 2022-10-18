/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:09:40 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/13 11:15:20 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(char *dst, char *src, int n);
size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c1;
	int		c2;
	char	*s3;
	char	*s4;

	c1 = ft_strlen(s1);
	c2 = ft_strlen(s2);
	s3 = (char *) malloc((c1 + c2) * sizeof(char));
	s4 = ft_memcpy(s3, (char *)s1, c1);
	ft_memcpy(&s3[c1], (char *)s2, c2);
	s3[c1 + c2] = '\0';
	return (s4);
}
