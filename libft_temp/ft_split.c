/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:22 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/09 20:17:35 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i = 0;
    int j = 0;
    //int p = 0;
    char *str = (char *)malloc(strlen(s) + 1);
    //int lens = strlen(str);
    while (s[i])
    {
        //char *str = (char *)malloc(strlen(s) + 1);
        if(s[i] != c)
        {
            str[j] = s[i];
            j++;
            i++;
        }
        else
            free(str);
    i++;
    //j++;
    }
    return (&str);
}
/*
int main(void)
{
    char const s = ""
}
*/

