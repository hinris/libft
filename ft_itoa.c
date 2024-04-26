/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:51:41 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/24 16:04:36 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoa_len(int n)
{
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	nb;
	unsigned int	i;

	i = ft_itoa_len(n);
	dest = (char *)ft_calloc(i + 1, sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[0] = '-';
		nb = -1 * n;
	}
	else
		nb = n;
	while (nb > 10 && i > 0)
	{
		dest[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	dest[i - 1] = nb + '0';
	return (dest);
}

/* int main(int argc, char const *argv[])
   {
   int     i;

   i = -2147483648;
   char *p;
   p = ft_itoa(i);
   printf("%s", p);
   free(p);
   return 0;
   } */
