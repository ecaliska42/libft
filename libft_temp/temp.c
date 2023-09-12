/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:09:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/12 18:05:53 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	count_sep(char const *s, char c)
{
	int i = 0;
	int seps = 0;
	while (s[i])
	{
		if(s[i] == c)
		{
			seps++;
		}
		i++;
	}
	return (seps);
}


char	**ft_split(char const *s, char c)
{
	int i = 0;
	int start;
	int end = 0;
	int j = 0;
	int x = 0;
	int len = 0;

	char **str = malloc(sizeof(char *) * count_sep(s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		start = i;
		while(s[i] != c && s[i])
			i++;
		end = i;
		len = end - start;
		str[j] = malloc((len + 1) * sizeof(char));
		if (!str[j])
			return (NULL);
		x = 0;
		while(x < len)
		{
			str[j][x] = s[start];
			x++;
			start++;
		}
		str[j][x] = '\0';
		j++;
	i++;
	}
	str[j] = NULL;
	return (str);
}

#include<stdio.h>

int    main(void)
{
	int i = 0;
	char	tab[] = "1";
	char **out = (char **)ft_split(tab, ' ');
	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return (0);
}

