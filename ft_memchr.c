/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 08:48:09 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 09:36:55 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return (((void *)&((unsigned const char *)s)[i]));
	}
	return (NULL);
}
