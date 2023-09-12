/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:22 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/11 14:54:29 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i = 0;
    int split;
    int count = 0;
    char **str = (char **)malloc(sizeof(char) * strlen(s));
    int old = 0;
    while (s[i])
    {
        while(s[i] != c)
        {
            i++;
        }
        split = i;
        old = split;
        str[count] = (char *)malloc((split - old) * sizeof(char));
        free (str[count]);
        count ++;

    }
    return (str);
}

int main(void)
{
    char const s [] = "To be or not to be this is the question.";
    char c = 32;
    printf("%s\n", *ft_split(s, c));
}
