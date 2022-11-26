/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keys <keys@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:16:34 by keys              #+#    #+#             */
/*   Updated: 2022/11/24 16:37:24 by keys             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *tmp;

	if (dst == src || n == 0)
		return (dst);
	tmp =dst;
	while (n-- != 0)
	{
		ft_memset(dst++, *((int *)src++),1);
	}
	return (tmp);
}
