/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 17:02:37 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/06 17:45:20 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (lst && new)
	{
		if (*lst == NULL)
		{
			*lst = new;
			return ;
		}
		temp = ft_lstlast(*lst);
		new->next = temp->next;
		temp->next = new;
	}
}
