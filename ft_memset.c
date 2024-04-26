/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:07:26 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/18 20:57:05 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	uc;

	p = s;
	uc = (unsigned char)c;
	while (n--)
	{
		*p++ = uc;
	}
	return (s);
}

/* int main() {
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);

	ft_memset(str + 10, 'A', 10);
	puts(str);

	return 0;
}
 */