/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aripoll- <aripoll-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:11:24 by aripoll-          #+#    #+#             */
/*   Updated: 2022/10/10 15:11:30 by aripoll-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*retorno;
	int		cont;

	retorno = (char *) malloc(ft_strlen(s) * sizeof(char));
	cont = 0;
	while ((char)s[cont] != '\0')
	{
		retorno[cont] = f((unsigned int)(char)s[cont], (char)s[cont]);
		cont++;
	}
	return (retorno);
}
