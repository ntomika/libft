/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/10/31 19:35:30 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
		while (i != n)
		{
			if (*s2 != *s1)
				return ((unsigned char)*s1 - (unsigned char)*s2);
			if ((*s2 == '\0') || (*s1 == '\0'))
				return ((unsigned char)*s1 - (unsigned char)*s2);
			s1++;
			s2++;
			i++;
		}
	return (0);
}
