/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:27:27 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/04 02:17:57 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
//original code with error 
//=======================================
/*char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr1;

	ptr1 = (char *)s;
	i = 0;
	while (*(ptr1 + i))
	{
		if (*(ptr1 + i) == c)
			return (ptr1 + i);
		i++;
	}
	if (c == '\0')
		return (ptr1 + i);
	return (0);
}*/
//========================================
