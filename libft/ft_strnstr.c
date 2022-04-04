/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:13:50 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/03 01:48:49 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t l)
{
	unsigned int	j;
	unsigned int	i;

	if (!*f)
		return ((char *)s);
	j = 0;
	while (s[j] != '\0' && (size_t)j < l)
	{
		if (s[j] == f[0])
		{
			i = 1;
			while (f[i] != '\0' && s[j + i] == f[i] && (size_t)(j + i) < l)
				++i;
			if (f[i] == '\0')
				return ((char *) & s[j]);
		}
		++j;
	}
	return (0);
}
//j=>positon
//tof=>to_find
//s=>str
//l=>len
