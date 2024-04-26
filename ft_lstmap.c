/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:59:35 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/25 19:11:37 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *list;
    t_list  *tmp;
    
    if (lst && f)
    {
        list = ft_lstnew(f(lst->content));
        tmp = list;
        while (lst->next)
        {
            lst = lst->next;
            if ((tmp->next = ft_lstnew(ft_strdup(f(lst->content)))) == NULL)
            {
                ft_lstclear(&list, del);
                return (NULL);
            }
            tmp = tmp->next;
        }
        return (list);
    }
    return (NULL);
}