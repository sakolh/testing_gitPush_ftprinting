/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:27:27 by shirapra          #+#    #+#             */
/*   Updated: 2022/03/04 02:29:16 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char *)s;
	ptr2 = 0;
	i = 0;
	while (*(ptr1 + i))
	{
		if (*(ptr1 + i) == c)
			ptr2 = ptr1 + i;
		i++;
	}
	if (c == '\0')
		return (ptr1 + i);
	return (ptr2);
}*/
