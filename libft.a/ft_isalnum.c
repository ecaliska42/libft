/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:18:29 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/05 12:31:15 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!(str[i] <= 'A' && str[i] >= 'Z' || str[i] <= 'a' && str[i] >= 'z'))
			return 0;
		else if (!(str[i] <= '0' && str[i] >= '9'))
			return 0;
		else
			i++;
	return 1;
}
