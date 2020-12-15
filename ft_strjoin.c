/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:22:08 by eosfryd           #+#    #+#             */
/*   Updated: 2020/11/22 15:21:19 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	str1 = (char *)malloc(1 + i + j);
	if (str1 == NULL)
		return (NULL);
	str2 = str1;
	while (*s1)
		*str2++ = *s1++;
	while (*s2)
		*str2++ = *s2++;
	*str2 = '\0';
	return (str1);
}
