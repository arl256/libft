/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:13:56 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 16:14:06 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	row;
	size_t	col;
	size_t	largo;
	int		*lugar;

	row = 0;
	col = 0;
	largo = num * size;
	lugar = (int *)malloc(largo * sizeof(size_t));
	while (row <= num)
	{
		while (col <= size)
		{
			lugar[(row * col) + col] = 0;
			col++;
		}
		col = 0;
		row++;
	}
	return ((size_t *)lugar);
}
