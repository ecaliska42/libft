/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:32:01 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/14 20:55:37 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;
	size_t	j;

	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	i = 0;
	j = s_dst;
	if (size == 0)
		return (s_dst + s_src);
	while (src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
		if (j == size - 1)
			break;
	}
	dst[j] = '\0';
	return (s_dst + s_src);
}
/*

int main(void)
{
	char dst[] = "This is";
	const char src[] = "a potentially long string";
	size_t size = 16;
	printf("this is the dst string: %s\n",dst);
	//printf("this is the ft_function: %zu\n",ft_strlcat(dst,src,size));
	//printf("this is the dst string with ft: %s\n",dst);
	printf("this is the original function: %zu\n",strlcat(dst,src,size));
	printf("this is the dst new string: %s\n",dst);
}
*/

/*
int main()
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 16;
	char buffer[size];

	strcpy(buffer,first);
	r = strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return(0);
}
*/

/*
The strlcpy() and strlcat() functions copy and concatenate 
strings
respectively. They are designed to be safer, more consistent,
and less error prone replacements for strncpy(3) and 
strncat(3).
Unlike those functions, strlcpy() and strlcat() take the full
size of the buffer (not just the length) and guarantee 
to NUL-terminate
the result (as long as size is larger than 0 or, in the case 
of strlcat(),
as long as there is at least one byte free in dst).  Note that 
a byte for the NUL
should be included in size.  Also note that strlcpy() and 
strlcat() only oper‐
ate on true “C” strings.  This means that for strlcat() both 
src and dst must
be NUL-terminated.

The strlcat() function appends the NUL-terminated string src
 to the end of dst.
It will append at most size - ft_strlen(dst) - 1 bytes,
NUL-terminating the result.
*/