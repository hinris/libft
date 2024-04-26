/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:13:08 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/26 13:44:16 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*p;

	total_size = nmemb * size;
	if (!total_size)
		return (ft_strdup(""));
	if (nmemb > total_size || size > total_size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (nmemb * size));
	return (p);
}

/* int main() {

	int *arr = (int *)ft_calloc(-5, sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed\n");
		return 1;
	}

	for (int i = 0; i < 15; i++) {
		printf("%d ", arr[i]); // Should print all zeros
	}

	free(arr);
	return 0;
} */
