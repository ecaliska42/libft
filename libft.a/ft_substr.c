/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:14 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/10 14:03:04 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	i = 0;
	subs = (char *)malloc(sizeof(char) * len);
	if (!subs)
		return (NULL);
	while (i < len)
		subs[i++] = s[start++];
	return (subs);
}
/*
#include <stdio.h>

int main(void)
{
	char const s []= "1234567891011121314";
	unsigned int start = 5;
	size_t len = 8;
	printf("this is the function %s\n", ft_substr(s, start, len));
}
*/