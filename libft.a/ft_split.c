/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:09:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/12 21:50:08 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>

static int	count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while(s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
		    word++;
			i++;
            while(s[i] != c)
                i++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int	start;
	int end;
	int j;
	int x;
	int len;
	char **str;

	if (!s)
		return (NULL);

	j = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * count_word(s, c) + 1);
	if (!str)
		return (NULL);
	//while (s[i] == c)
	//	i++;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		if (i == strlen(s))
		{
			str[j] = (char *)malloc(sizeof(char));
			if (!str[j])
				free(str[j]);
			break;
		}
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
int    main(void)
{
	int i = 0;
	
	char	tab[] = "**asf**affe*ff*";
	ft_split(tab, '*');
	char **out = (char **)ft_split(tab, '*');
	while (i < count_word(tab, '*') + 1)
	{
		printf("%s\n", out[i]);
		free(out[i]);
		i++;
	}
	free(out);
	return (0);
}
*/