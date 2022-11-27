/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keys <keys@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:22:39 by keys              #+#    #+#             */
/*   Updated: 2022/11/27 11:21:23 by keys             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	itoa_ans(int n, char *str);

// char	*ft_itoa_num(int n, char *str, int len)
// {
// 	char	*num;
// 	int		number;

// 	if (!n)
// 		return (str);
// 	else
// 	{
// 		num = n % len + '0';
// 	}
// 	return (ft_itoa_ans(n, ft_strjoin(num, str), len));
// }

static char	*ft_remalloc(char *str, int c)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(str);
	tmp = (char *)malloc(sizeof(char) * (len + 2));
	if (!tmp)
		return (NULL);
	*tmp = (char)c;
	ft_strlcat(tmp + 1, str, len + 1);
	free(str);
	return (tmp);
}

static char	*ft_get_num(char *str, long n)
{
	int	c;

	while (n)
	{
		c = (n % 10) + 48;
		n = n / 10;
		str = ft_remalloc(str, c);
		if (!str)
			return (NULL);
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	int		flag;

	flag = 0;
	number = (long)n;
	if (number == 0)
		return (ft_strdup("0"));
	if (number < 0)
	{
		flag = 1;
		number = number * -1L;
	}
	str = ft_strdup("");
	if (!str)
		return (NULL);
	str = ft_get_num(str, number);
	if (!str)
		return (NULL);
	if (flag == 1)
		str = ft_remalloc(str, '-');
	return (str);
}
