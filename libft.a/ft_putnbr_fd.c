/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_putnbr_fd_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaliska <ecaliska@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 21:25:25 by ecaliska          #+#    #+#             */
/*   Updated: 2023/09/09 20:34:30 by ecaliska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	print(char c, int fd)
{
	write (fd, &c, 1);
}

void fd_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (n < 0 && n > -2147483648)
	{
		print('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		fd_putnbr_fd(n / 10, fd);
		fd_putnbr_fd(n % 10, fd);
	}
	else if (n < 10 && n >= 0)
	{
		print(n + '0', fd);
	}
}

int	main(void)
{

	fd_putnbr_fd(0, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(123456, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(-123456, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(354951, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(658761, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	fd_putnbr_fd(-2147483647, 1);
	write(1, "\n", 1);
	
	return (0);
}