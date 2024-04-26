/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:10:17 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/15 19:58:53 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

/*int main() {
	char str[] = "Hello World";
	char *found;

	// Search for the character 'o' in str
	found = ft_memchr(str, 'o', sizeof(str));

	if (found != NULL) {
		printf("Found 'o' at position: %ld\n", found - str);
	} else {
		printf("'o' not found in the string.\n");
	}

	return 0;
}*/
