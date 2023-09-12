/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:13:56 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/11 14:28:52 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*a;
	size_t sizedest = strlen(dest);
	size_t sizesrc = strlen(src);

	i = 0;
	p = (unsigned char *) src;
	a = (unsigned char *) dest;
	if (sizedest < sizesrc)
	{
		while (i < n)
		{
			a[i] = p[i];
			i++;
		}
		return (a);
	}
	else
		while(n > 0)
		{
			a[n] = p[n];
			n--;
		}
	return (a);
}
*/
int main(void)
{
//	char dest[] = "source";
//	char src[] = "notdestination";
	char dest2[] = "source";
	char src2[] = "notdestination";
	size_t n = 20;
//	ft_memcpy(&dest, &src, n);
	memcpy(dest2, src2, n);
//	printf("this is the destination %s\n", dest);
	printf("this is the destination %s\n", dest2);
	//printf("this is the orig. functi.: %s\n", memcpy(&dest, &src, n));
	return 0;
}


/*
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
*/