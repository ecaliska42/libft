/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:07:11 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/15 13:01:24 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*temp;
	unsigned char	*p;
	size_t			i;

	a = (unsigned char *)dest;
	p = (unsigned char *)src;
	i = 0;
	//if (n > ft_strlen((char *)a))
	//	return (NULL);
	if (!dest && !src)
		return (dest);
	temp = (unsigned char *)malloc(sizeof(char) * n);
	if (!temp)
		return (NULL);
	while (i < n)
	{
		temp[i] = p[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = temp[i];
		i++;
	}
	free (temp);
	return (dest);
}
/*
int main(void)
{
	//unsigned char dest[] ="AAAAAAAAA";
	//unsigned char src[] ="BBBBBBBBBBBB";
	unsigned char dest2[] ="AAAAAAAAA";
	unsigned char src2[] ="BBBBBBBBBBBB";
	size_t n = 20;
	//ft_memmove(&dest, src, n);
	memmove(&dest2, src2, n);
	//printf("This is the destination %s\n", dest);
	printf("This is the destination %s\n", dest2);
}
*/
/*
The  memmove()  function  copies n bytes from memory area src to memory
area dest. The memory areas may overlap: copying takes place as though
the bytes in src are first
copied into a temporary  array that does not overlap src or dest,
and the bytes are then copied from the tempo‐
rary array to dest.*/