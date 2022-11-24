/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ken <ken@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:53:48 by kyoda             #+#    #+#             */
/*   Updated: 2022/11/24 15:20:50 by ken              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	int	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (int *)src;
	if (len == 0 || dst == src)
		return (dst);
	if(dst < src)
		ft_memcpy(dst,src,len);
	else
		while(len--)
			ft_memset(&dst2[len], src2[len], 1);
	return (dst);
}

	// if (tmp_dest > tmp_src && tmp_dest - tmp_src < (long)len)
	// {
	// 	i = len - 1;
	// 	while (len-- > 0)
	// 	{
	// 		tmp_dest[i] = tmp_src[i];
	// 		i--;
	// 	}
	// }
	// else
	// {
	// 	while (len-- > 0)
	// 		*tmp_dest++ = *tmp_src++;
	// }
