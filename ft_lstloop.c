/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:30:53 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 09:39:46 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstloop(t_list **alst)
{
	t_list	*tmp;

	if (!*alst)
		return ;
	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return ;
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *alst;
}
