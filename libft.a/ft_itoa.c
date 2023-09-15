/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:32 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/14 20:45:49 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	string(int j, char *str, int n)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	str[j] = 0;
	j--;
	while (n > 0)
	{
		str[j--] = (n % 10) + '0';
		n /= 10;
	}
	return (*str);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*str;

	j = len(n);
	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 12);
		if (!str)
			return (NULL);
		str = "-2147483648";
		return (str);
	}
	else if (n <= 0)
		j += 1;
	str = (char *) malloc(sizeof(char) * j + 1);
	if (!str)
		return (NULL);
	string(j, str, n);
	return (str);
}
/*
int	main(void)
{
	int		n;
	char	*str;

	n = -7483648;
	str = ft_itoa(n);
	printf("%s", str);
	return (0);
}
*/