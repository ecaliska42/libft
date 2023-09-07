/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:07:11 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/07 19:06:18 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *a = (unsigned char *)dest;
    unsigned char temp[n];
    unsigned char *p = (unsigned char *)src;
    size_t i = 0;
    while (p[i] && i < n)
    {
        temp[i] = p[i];
        a[i] = temp[i];
        i++;
    }
    return (a);
}
/*
int main(void)
{
    unsigned char dest[] ="AAAAAAAAAAA";
    unsigned char src[] ="BBBBBBBBBBB";
    size_t n = 2;
    ft_memmove(&dest, src, n);
    printf("This is the destination %s\n", dest);
}

/*The  memmove()  function  copies n bytes from memory area src to memory area dest.  The memory
areas may overlap: copying takes place as though the bytes in src are first copied into a tem‐
porary  array that does not overlap src or dest, and the bytes are then copied from the tempo‐
rary array to dest.*/