/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:56:46 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/06 13:17:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(char *dst, char *src, int len)
{
	int	cont;

	cont = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
	}
	else
	{
		while (cont < len)
		{
			dst[cont] = src[cont];
			cont++;
		}
	}
	return (dst);
}
