/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:46:40 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/25 18:00:12 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int       i;
    t_list  *list;
    
    i = 0;
    list = lst;
    while (list != NULL)
    {
        list = list->next;
        i++;
    }
    return (i);
}