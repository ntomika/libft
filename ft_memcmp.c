/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/22 16:51:59 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *dst, const void *src, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	p1 = dst;
	p2 = src;
	i = 0;
	while (i != n)
	{
		if (*p1 != *p2)
			return ((unsigned char)*p1 - (unsigned char)*p2);
		p1++;
		p2++;
		i++;
	}
	return (0);
}
