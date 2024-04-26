/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:50:39 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/24 18:08:07 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		i;
	char	c[10];

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	while (nb)
	{
		c[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	while (i > 0)
		ft_putchar_fd(c[--i], fd);
}
