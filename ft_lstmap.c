/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:18:57 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 08:43:16 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*output;

	if (!lst || !f)
		return (NULL);
	if (lst->next)
	{
		output = ft_lstmap(lst->next, f);
		ft_lstadd(&output, f(lst));
	}
	else
		output = f(lst);
	return (output);
}
