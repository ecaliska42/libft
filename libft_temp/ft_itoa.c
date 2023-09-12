/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:32 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/12 22:51:59 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	int i = 0;
	int j = n;
	int p = 0;
	char *str = NULL;

	while(j > 0)
	{
		j/=10;
		i++;
	}
	
	str = (char *) malloc(sizeof(char) * i + 1);

	while (i != 0)
	{
		str[p] = 0;
	}


	printf("%d", i);
	/*
	if (n = "-2147483648")
		return ("-2147483648");
	*/
	return (str);
}



int main(void)
{
	int n = 50235;
	ft_itoa(n);
	return(0);
}