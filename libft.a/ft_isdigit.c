/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:18:29 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/08 14:46:21 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	if (!(str <= '0' && str >= '9'))
		return (0);
	else
		return (1);
}