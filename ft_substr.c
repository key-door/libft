/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keys <keys@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:21:32 by kyoda             #+#    #+#             */
/*   Updated: 2022/11/27 06:23:33 by keys             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start || !len)
		return (ft_calloc(1, 1));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ans = malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}
