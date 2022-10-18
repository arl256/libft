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

char	*ft_strnstr(const char	*larga, const char *corta, size_t len)
{
	int	cont_l;
	int	cont_c;

	cont_l = 0;
	cont_c = 0;
	while (larga[cont_l] != '\0')
	{
		if (corta[cont_c] == larga[cont_l])
		{
			while (corta[cont_c] != '\0' && corta[cont_c] == larga[cont_l])
			{
				cont_c++;
				cont_l++;
			}
			if (corta[cont_c] == '\0' || (size_t) cont_c >= len)
			{
				return ((char *)&larga[(cont_l - cont_c)]);
			}
		}
		cont_c = 0;
		cont_l++;
	}
	return (0);
}
