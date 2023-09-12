/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:09:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/12 19:11:58 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	count_sep(char const *s, char c)
{
	int	i;
	int	seps;

	i = 0;
	seps = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			seps++;
		}
		i++;
	}
	return (seps);
}


char	**ft_split(char const *s, char c)
{
	int	i;
	int	start;
	int end;
	int j;
	int x;
	int len;
	char **str;

	j = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * count_sep(s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		len = end - start;
		str[j] = (char *)malloc((len) * sizeof(char) + 1);
		if (!str[j])
		{
			while (j-- > 0)
				free(str[j]);
			free(str);
			return (NULL);
		}
		x = 0;
		while (x < len)
			str[j][x++] = s[start++];
		str[j][x] = '\0';
		j++;
		i++;
	}
	str[j] = NULL;
	return (str);
}
/*
#include<stdio.h>

int    main(void)
{
	int i = 0;
	char	tab[] = "5****1*22*333*444*5*6*";
	char **out = (char **)ft_split(tab, '*');
	while (out[i])
	{
		printf("%s\n", out[i]);
		free(out[i]);
		i++;
	}
	free(out);
	return (0);
}
*/