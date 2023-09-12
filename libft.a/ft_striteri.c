/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:21 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/10 16:16:34 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(f)(i, &s[0]);
		i++;
	}
}
/*
void ft_write(unsigned int i, char *s)
{
	s[i] -= 32;
	write(1, &s[i], 1);
	//toupper(s[i]);
}

int main()
{
	char s [] = "hello";
	ft_striteri(s, ft_write);
}
*/