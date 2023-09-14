/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:09:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/14 19:37:49 by ecaliska         ###   ########.fr       */
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
	while (s[i])
	{
		if (s[i] == c && s[i])
		{
			i++;
		}
		else
		{
			word++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

static void	freeing(char *str, int j)
{
	while (j > 0)
	{
		free(&str[j]);
		j--;
	}
	free(str);
}

static char	*duplicate(const char *s, int c)
{
	char	*dup;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	dup = (char *)malloc(sizeof(char) * j + 1);
	if (!dup)
		return (NULL);
	while (count < j)
	{
		dup[count] = s[count];
		i++;
		count++;
	}
	dup[count] = '\0';
	return (dup);
}

static char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		return (NULL);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (strchr(&s[i], c) == NULL)
		{
			str[j] = duplicate(&s[i], c);
			i += strlen(str[j]);
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}
/*
int    main(void)
{
	int i = 0;
	
	char    tab[] = "***";
	char **out = (char **)ft_split(tab, '*');
	while (i < 3)
	{
		printf("%s\n", out[i]);
		free(out[i]);
		i++;
	}
	free(out);
	return (0);
}*/