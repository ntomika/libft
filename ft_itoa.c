/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshellie <sshellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 20:14:07 by sshellie          #+#    #+#             */
/*   Updated: 2020/11/21 20:15:49 by sshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lendigit(int newn, int sign)
{
	int			len;

	if (newn == 0)
		return (1);
	len = 0;
	while (newn > 0)
	{
		newn /= 10;
		len++;
	}
	if (sign < 0)
		len++;
	return (len);
}

static void		ft_convert(int newn, int len, char *str, int sign)
{
	str[len] = '\0';
	str[--len] = newn % 10 + '0';
	newn /= 10;
	while (newn > 0)
	{
		str[--len] = newn % 10 + '0';
		newn /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

static	char	*ft_itoa_min(int n)
{
	char		*str;
	int			len;

	len = 10;
	n /= 10;
	n = -n;
	str = (char *)malloc(12);
	if (str == NULL)
		return (NULL);
	str[len + 1] = '\0';
	str[len] = '8';
	str[0] = '-';
	while (len-- != 1)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			newn;
	int			len;
	int			sign;

	sign = 1;
	if (n == (-2147483648))
		return (ft_itoa_min(n));
	else
	{
		if (n < 0)
		{
			newn = (long)n * (-1);
			sign = -1;
		}
		else
			newn = n;
		len = ft_lendigit(newn, sign);
		str = (char *)malloc(sizeof(len + 1));
		if (!str)
			return (NULL);
		ft_convert(newn, len, str, sign);
		return (str);
	}
}
