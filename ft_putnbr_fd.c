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

void	ft_putnbr_fd(int n, int fd)
{
	char c;
	long sign;

	sign = n;
	if (sign < 0)
	{
		sign = -sign;
		c = '-';
		write(fd, &c, 1);
	}
	if (sign >= 10)
	{
		ft_putnbr_fd(sign / 10, fd);
		ft_putnbr_fd(sign % 10, fd);
	}
	else
	{
		c = (sign + '0');
		write(fd, &c, 1);
	}
}
