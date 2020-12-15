/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/22 15:20:49 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	size = (ft_strlen(s) + 1);
	res = (char *)malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);
	size = 0;
	while (s[size])
	{
		res[size] = f(size, s[size]);
		size++;
	}
	res[size] = '\0';
	return (res);
}
