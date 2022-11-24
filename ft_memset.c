/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ken <ken@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:36:47 by keys              #+#    #+#             */
/*   Updated: 2022/11/24 14:53:02 by ken              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char ch;

	tmp =(unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
		*tmp++ = ch;
	return ((void *)tmp);
}
