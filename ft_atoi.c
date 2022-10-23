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

int ft_isdigit(char c);
int ft_isprint(char c);

int	excepto(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c =='\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	signo(char c)
{
	if (c == '-')
		return (2);
	else if (c == '+')
		return (1);
	return (0);
}

int ft_atoi(const char *strnum)
{
	int cont;
	int num;
	int neg;

	cont = 0;
	num = 0;
	neg = 0;
	if ( strnum[cont] < 32 && !excepto( strnum[cont]))
		return(0);
	while ( strnum[cont] == 32 || excepto( strnum[cont]))
		cont++;
	if (signo(strnum[cont]) > 0)
	{
		neg = signo(strnum[cont]) - 1;
		cont++;
	}
	if (ft_isdigit( strnum[cont]))
	{
		while (ft_isdigit( strnum[cont]))
		{
			num = (10 * num) + ( strnum[cont]+ 0 - 48);
			cont++;
		}
	}
	else return (0);

	if (neg == 1)
	{
		num = -num;
	}
	return (num);


}
