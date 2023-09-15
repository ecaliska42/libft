/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:31:52 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/15 13:04:07 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mal;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mal = malloc (nmemb * size);
	if (!mal)
		return (NULL);
	bzero (mal, (nmemb * size));
	return (NULL);
}
/*
int main(void)
{
	size_t nmemb = 5;
	size_t size = 4;
	ft_calloc(nmemb, size);
}
*/