/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:19 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/15 13:05:28 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	char	*str1;

	str1 = (char *)s1;
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1)+ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s2[i])
	{
		str1[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	str1[ft_strlen(s1) + i] = '\0';
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
/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/