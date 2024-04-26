/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:51:41 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/26 16:52:30 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	itoa_len(int n)
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

	i = itoa_len(n);
	dest = (char *)ft_calloc(i + 1, sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
		nb = -1 * n;
	else
		nb = n;
	while (i--)
	{
		dest[i] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

/* int main()
   {
   int     i;

   i = -2147483648;
   char *p;
   p = ft_itoa(i);
   printf("%s", p);
   free(p);
   return 0;
   } */
