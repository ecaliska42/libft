/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:04 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/14 20:43:51 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	const char s1 [] = "ABCDEFG";
	const char s2 [] = "ABCDeFG";
	size_t n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
	return 0;
}
*/
/* The  strncmp()  function is similar, except it compares
only the first (at most) n bytes of s1 and s2.*/