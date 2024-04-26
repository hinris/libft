/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:33:47 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/26 14:12:23 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}