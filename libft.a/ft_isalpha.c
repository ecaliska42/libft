/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:18:29 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/05 12:31:15 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	while (str)
		if (!(str <= 'A' && str >= 'Z' || str <= 'a' && str >= 'z'))
			return 0;
		return 1024;
}
