/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/22 17:04:29 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	int		i;
	int		j;

	str = (char*)haystack;
	i = 0;
	if (ft_strlen(needle) == 0)
		return (str);
	while ((i < (int)len) && haystack[i])
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && ((i + j) < (int)len))
		{
			if (!(needle[j + 1]))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
