/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:51:54 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 14:52:02 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		cont;
	char	fin;

	fin = '\n';
	cont = 0;
	while (s[cont] != '\0')
	{
		write(fd, &s[cont], 1);
		cont++;
	}
	write(fd, &fin, 1);
}
