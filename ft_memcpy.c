/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ken <ken@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:16:34 by keys              #+#    #+#             */
/*   Updated: 2022/11/24 15:04:17 by ken              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int *c;
	void *tmp;

	if (dst == src || n == 0)
		return (dst);
	tmp =dst;
	c = (int *)src;
	while (n-- != 0)
		ft_memset(dst++, *c++,1);
	return (tmp);
}
