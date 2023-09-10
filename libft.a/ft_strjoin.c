/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:19 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/10 14:00:58 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	int		sizes;
	char	*str1;

	str1 = (char *)s1;
	i = 0;
	str = (char *)malloc(sizeof(char) * (strlen(s1)+strlen(s2)));
	if (!str)
		return (NULL);
	sizes = strlen(s1) + strlen(s2);
	while (s2[i])
	{
		str1[strlen(s1) + i] = s2[i];
		i++;
	}
	str = str1;
	return (str);
}
/*
int main(void)
{
	char const s1 [] = "Hello kjlafsdazio";
	char const s2 [] = "World";
	printf("this is the function : %s", ft_strjoin(s1, s2));
}
*/