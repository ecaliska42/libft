/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:31:56 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/06 20:51:26 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i = 0;
    const char *str1 = (const char *) s1;
    const char *str2 = (const char *) s2;
    while(i<n)
    {
        if(str1[i] == str2[i])
            i++;
        else
            return (str1[i]-str2[i]);
    }
    return (str1[i]-str2[i]);
}
/*
int main (void)
{
    const char s1 [] = "Abcdefg";
    const char s2 [] = "abcDEFG";
    size_t n = 5;
    printf("this is the ft_function: %d\n", ft_memcmp(&s1,&s2,n));
    printf("this is the original function: %d\n",memcmp(&s1,&s2,n));
    return 0;
}*/