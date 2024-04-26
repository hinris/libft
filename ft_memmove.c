/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:08:05 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/18 19:06:30 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		d[n] = s[n];
	return (dest);
}
/*int main() {
	char source[] = "Hello, World!";
	char destination[20] = "hi mf";

	ft_memmove(destination, source, sizeof(source));

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
}*/
