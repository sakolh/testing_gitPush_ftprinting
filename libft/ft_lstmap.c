/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:33:18 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/07 00:14:07 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*frist;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	frist = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (frist)
			{
				new = frist->next;
				(*del)(frist->content);
				free(frist);
				frist = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&frist, new);
		lst = lst->next;
	}
	return (frist);
}
