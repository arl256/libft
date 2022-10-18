/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:13:37 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 16:13:43 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c);

int	ft_atoi(const char *strnum)
{
	int	cont;
	int	num;
	int	signo;

	cont = 0;
	num = 0;
	signo = 0;
	if (strnum[cont] == 45)
	{
		signo = 1;
		cont++;
	}
	while (ft_isdigit(strnum[cont]))
	{
		num = 10 * num + (strnum[cont] - 48);
		cont++;
	}
	if (signo == 1)
	{
		num = -num;
	}
	return (num);
}
