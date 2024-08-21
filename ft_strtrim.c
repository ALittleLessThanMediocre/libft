/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:12:26 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 09:39:11 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	len = 0;
	while (s[i] && ft_ismspace(s[i]))
		i++;
	len = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_ismspace(s[len + i]))
		len--;
	if (!(str = ft_strnew(len + 1)))
		return (NULL);
	ft_strncpy(str, (s + i), (len + 1));
	return (str);
}
