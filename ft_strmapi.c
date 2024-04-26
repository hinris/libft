/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:02:11 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/24 18:09:18 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dest || !s)
		return (NULL);
	while (*s)
	{
		dest[i] = f(i, *s++);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
