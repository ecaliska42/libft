/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/10 14:00:25 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	int		lens1;
	int		lenset;
	int		len;
	char	*ret;

	str1 = (char *) s1;
	lens1 = strlen(str1);
	lenset = strlen(set);
	if (strncmp(s1, set, lenset) == 0)
		str1 = &str1[lenset];
	if (strncmp(&s1[lens1 - lenset], set, lenset) == 0)
		str1[lens1 - lenset] = '\0';
	if (strncmp(&s1[lens1 - lenset - lenset], set, lenset) == 0)
		str1[lens1 - lenset - lenset] = '\0';
	len = strlen(str1);
	ret = (char *) malloc(sizeof(char) * len);
	if (!ret)
		return (NULL);
	ret = str1;
	return (ret);
}
/*
int main(void)
{
	char const s1 [] = "Hello WorldHel";
	char const set [] = "\t";
	printf("%s", ft_strtrim(s1, set));
}
*/