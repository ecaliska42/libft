/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:06 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/08 18:55:13 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	sizelit;

	i = 0;
	j = 0;
	sizelit = strlen(little);
	if (!*little)
		return ((char *)&big[i]);
	while (big[i] != '\0' && i < len)
	{
		if (little[j] == big[i] && (i + sizelit) < len + 1)
		{
			while (little[j] != '\0' && i < len + sizelit)
				if (!(little[j++] == big[i++]))
					return (NULL);
			return ((char *)&big[i - j]);
		}
		else
			i++;
	}
	return (NULL);
}

/*
int main(void)
{
	const char big [] = "asdfafsfa";
	const char little [] = "fa";
	size_t len = 4;
	printf("this is the ft_function: %s\n",ft_strnstr(big, little, len));
	printf("this is the original function: %s\n",strnstr(big, little, len));
}
*/




/*The strnstr() function locates the first occurrence of the null-termi‐
nated string little in the string big, where not more than len charac‐
ters are searched.  Characters that appear after a ‘\0’ character are
not searched.  Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern.*/
/*
x   If little is an empty string, big is returned;
o   if little occurs nowhere in big, NULL is returned
o   otherwise a pointer to the first character of the first occurrence
		of little is returned.
*/