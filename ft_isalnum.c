/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:16:38 by aripoll-          #+#    #+#             */
/*   Updated: 2022/09/19 12:06:58 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c);
int	ft_isupper(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_islower(c) || ft_isupper(c) || ft_isdigit(c));
}
