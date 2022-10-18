/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:54:56 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 14:55:24 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *c, int fd)
{
	int	cont;

	cont = 0;
	while (c[cont] != '\0')
	{
		write(fd, &c[cont], 1);
		cont++;
	}
	write(fd, 0, 1);
}
