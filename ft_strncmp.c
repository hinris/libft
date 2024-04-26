/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:09:33 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/17 23:47:23 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int		main(int argc, const char *argv[])
{
	printf("%d", ft_strncmp("test\200", "test\0", 6));
} */