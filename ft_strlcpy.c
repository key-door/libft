/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ken <ken@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:05:54 by kyoda             #+#    #+#             */
/*   Updated: 2022/11/24 15:38:00 by ken              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	if(!src)
		return 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	if(len <= dstsize-1)
		ft_memmove(dst,src,len+1);
	else
	{
		ft_memmove(dst,src,dstsize-1);
		ft_bzero(&dst[dstsize-1],1);
	}
	return (len);
}
