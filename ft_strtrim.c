/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:27:35 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/24 16:00:07 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 && !set)
		return (NULL);
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end >= start)
		end--;
	dest = (char *) malloc(end - start + 2);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, &s1[start], end - start + 2);
	return (dest);
}

/* int main(void)
   {
   char *why = "    boy  :D    ";
   char *trimmed;

   trimmed = ft_strtrim(why, "   ");
   printf("%s", trimmed);
   free(trimmed);
   return 0;
   } */
