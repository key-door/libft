/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keys <keys@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:50:34 by keys              #+#    #+#             */
/*   Updated: 2022/10/25 14:29:23 by keys             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t count_word(char *tmp, char c)
// {
// 	size_t count;

// 	count = 0;
// 	while(*tmp)
// 	{
// 		while(*tmp == c)
// 			tmp++;
// 		if(!tmp)
// 			break;
// 		count++;
// 		while(*tmp != c)
// 			tmp++;
// 	}
// 	return count;
// }

// void ft_null_c(char *tmp, char c)
// {
// 	while(*tmp)
// 	{
// 		if(*tmp == c)
// 			*tmp = '\0';
// 		tmp++;
// 	}
// }
// char **ft_split(char const *s, char c)
// {
// 	char *tmp;
// 	char **split;
// 	size_t count;
// 	size_t i;

// 	i = 0;
// 	printf("%d",__LINE__);
// 	if(!s)
// 		return NULL;
// 	tmp =(char *)s;
// 	while(*tmp == c)
// 		tmp++;
// 	printf("%d",__LINE__);
// 	count = count_word(tmp, c);
// 	split = (char **)malloc(count + 1);
// 	printf("%d",__LINE__);
// 	if(!split)
// 		return NULL;
// 	ft_null_c(tmp, c);
// 	printf("%d",__LINE__);
// 	while(count--)
// 	{
// 		split[i] = strdup(tmp);
// 		if(!split[i])
// 			return NULL;
// 	printf("%d",__LINE__);
// 		while(*tmp != '\0' )
// 			tmp ++;
// 		while(*tmp == '\0')
// 			tmp++;
// 		i++;
// 	}
// 	split[i] = NULL;
// 	return split;
// }

// int main()
// {
// 	printf("%d",__LINE__);
// 	char *test = "   123  fv 312   frg";
// 	char **tmp;

// 	tmp = ft_split(test, ' ');
// 	printf("%d",__LINE__);
// 	for(int i = 0; i < 5; i++)
// 		printf("%s",tmp[i]);
// 	printf("%d",__LINE__);
// 	return 0;
// }
