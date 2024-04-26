/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:46:20 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/18 16:07:40 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*dest;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (*str1)
		dest[i++] = *str1++;
	while (*str2)
		dest[i++] = *str2++;
	dest[i] = '\0';
	return (dest);
}

/* int main(int argc, char const *argv[])
   {
   printf("%s", ft_strjoin("hello ", "mother fucker"));
   return 0;
   } */
