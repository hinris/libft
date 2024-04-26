/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:15 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/25 18:15:30 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstlast(t_list *lst)
{
    t_list  *list;

    if (!lst || lst->next == NULL)
        return (lst);
    list = lst;
    while (list->next != NULL)
        list = list->next;
    return (list);
}