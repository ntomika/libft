/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/22 16:53:42 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p;
	const char	*s;
	size_t		i;

	p = dst;
	s = src;
	i = 0;
	if (p == NULL && s == NULL)
		return (NULL);
	if (p < s)
	{
		while (i++ != len)
			*p++ = *s++;
	}
	else
	{
		p = p + len - 1;
		s = s + len - 1;
		while (i++ != len)
			*p-- = *s--;
	}
	return (dst);
}
