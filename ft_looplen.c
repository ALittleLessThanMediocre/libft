/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_looplen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:23:01 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/11 17:35:51 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_looplen(t_list *alst)
{
	t_list	*slow_ptr;
	t_list	*fast_ptr;
	t_list	*tmp;
	int		output;

	slow_ptr = alst;
	fast_ptr = alst;
	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			tmp = slow_ptr;
			output = 1;
			while (tmp->next != slow_ptr)
			{
				output++;
				tmp = tmp->next;
			}
			return (output);
		}
	}
	return (0);
}
