/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:16 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/14 20:50:47 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (strncmp(str1, set, lenset) == 0)
		str1 = &str1[lenset];
	if (strncmp(&str1[lens1 - lenset], set, lenset) == 0)
		str1[lens1 - lenset] = '\0';
	if (strncmp(&str1[lens1 - lenset - lenset], set, lenset) == 0)
		str1[lens1 - lenset - lenset] = '\0';
	len = strlen(str1);
	ret = (char *) malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	ret[strlen(str1)] = '\0';
	while (len--)
		ret[len] = str1[len];
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
/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/