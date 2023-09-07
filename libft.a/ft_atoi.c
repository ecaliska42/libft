/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:31:50 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/07 18:54:32 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int number(const char *nptr)
{
    int i = 0;
    while (nptr[i] == 13 || nptr[i] == 32 || nptr[i] == 9 || nptr[i] == 10)
    {
        i++;
    }
    return (i);
}

int ft_atoi(const char *nptr)
{
int num = 0;
int neg = 1;
int pos = number(nptr);



if (nptr[pos] == '-' || (nptr[pos] == '+'))
    {
        if (nptr[pos] == '-')
            neg *= -1;
        pos++;
    }

while (nptr[pos])
{
    if (nptr[pos] >= '0' && nptr[pos] <= '9')
    {
        num = num * 10 + (nptr[pos] - '0');
        pos++;
    }
    else
        break;
}

return (num * neg);
}

/*
int main (void)
{
    const char nptr[] = "   -  2asd 2";
	printf("this is the ft_ funct.: %d\n", ft_atoi(nptr));
	printf("this is the orig. funct.: %d\n", atoi(nptr));
    return 0;
}
*/

/*

while (nptr[pos] <= '0' && nptr[pos] >= '9')
{
    num = num * 10 + (nptr[i] - '0');
    pos++;
    i++;
}
*/

/*
The  atoi()  function converts the
initial  portion  of  the   string
pointed  to  by  nptr to int.  The
behavior is the same as

   strtol(nptr, NULL, 10);

except that atoi() does not detect
errors.
*/