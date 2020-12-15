/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:35:25 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/24 20:47:47 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		finish;

	start = 0;
	finish = 0;
	str = NULL;
	if (s1 == NULL || set == NULL)
		return (str);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	finish = ft_strlen(s1);
	while (ft_strrchr(set, s1[finish - 1]) && (start < (finish - 1)) && finish)
		finish--;
	str = ft_substr((char *)s1 + start, 0, finish - start);
	if (!str)
		return (NULL);
	return (str);
}
