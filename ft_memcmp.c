/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:10:38 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/18 21:37:44 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	size_t					i;

	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	printf("%d", ft_memcmp("helloa", "hello", 6));
	return 0;
}*/
