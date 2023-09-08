/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:31:58 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/08 14:57:16 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
	const char s[] = "Hellto World";
	int c = 't';
	printf("this is the ft_ funct.: %s\n", ft_strchr(s, c));
	printf("this is the orig. funct.: %s\n", strchr(s, c));
	return 0;
}
The strchr() function returns a pointer to the first occurrence 
of the character c in the string s.*/