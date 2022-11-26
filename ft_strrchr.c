/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keys <keys@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:42:55 by kyoda             #+#    #+#             */
/*   Updated: 2022/11/26 14:54:30 by keys             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			len;

	ch = (unsigned char)c;
	if (!ch)
		return ((char *)(s + ft_strlen(s)));
	len = ft_strlen(s);
	if (len)
	{
		while (len--)
		{
			if (*(s + len) == ch)
				return ((char *)(s + len));
			s++;
		}
	}
	return (NULL);
}
