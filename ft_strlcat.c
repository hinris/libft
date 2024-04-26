/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:08:36 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/18 21:32:21 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	dl = 0;
	sl = 0;
	i = 0;
	while (dest[dl] != '\0' && dl < size)
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (dl < size)
	{
		while (src[i] != '\0' && dl + i < size - 1)
		{
			dest[dl + i] = src[i];
			i++;
		}
		dest[dl + i] = '\0'; 
	}
	return (dl + sl);
}
