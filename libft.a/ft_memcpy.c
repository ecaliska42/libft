/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:13:56 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/05 19:06:17 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *p = (unsigned char *) src;
    unsigned char *a = (unsigned char *) dest;

    while (p[i] && i < n)
    {
        a[i] = p[i];
        i++;
    }
    return a;
}
/*
int main(void)
{
    char dest[] = "ASfhehsiudfh";
    char src[] = "Hello there";
    size_t n = 3;
    ft_memcpy(&dest, &src, n);
    printf("this is the destination %s\n", dest);
    return 0;
}


/*
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
*/