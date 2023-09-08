/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:31:52 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/08 20:53:29 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	mal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = (char *) malloc (nmemb * size);
	if (!mal)
		return (NULL);
	bzero (mal, (nmemb * size));
}



/*

*/