/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:41:55 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/25 18:48:56 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current;
    t_list  *next;
    
    if (lst)
    {
        current = *lst;
        while (current)
        {
            next = current->next;
            ft_lstdelone(current, (del));
            current = next;
        }
        *lst = NULL;
    }
}