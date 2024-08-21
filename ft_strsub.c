/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:21:55 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 09:46:39 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = -1;
	if (!s || !(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (++i < len)
		substr[i] = s[i + start];
	substr[i] = '\0';
	return (substr);
}
