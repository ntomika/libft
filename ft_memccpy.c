/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/22 16:51:13 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*p;
	const char	*s;
	size_t		i;

	p = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		p[i] = s[i];
		if (s[i] == (char)c)
			return (p + i + 1);
		i++;
	}
	return (NULL);
}
