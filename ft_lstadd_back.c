/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodrig <anrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:03:53 by anrodrig          #+#    #+#             */
/*   Updated: 2024/04/25 18:13:17 by anrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!*lst)
    {
        *lst = new;
    }
    else
    {
        while ((*lst)->next)
            *lst = (*lst)->next;
        (*lst)->next = new;
    }
}