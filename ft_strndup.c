/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:24:51 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 09:17:56 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;

	if (!(dup = (char *)malloc(sizeof(char) * n + 1)))
		return (NULL);
	ft_strncpy(dup, str, n);
	return (dup);
}
