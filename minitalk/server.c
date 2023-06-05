/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:34 by migmoren          #+#    #+#             */
/*   Updated: 2023/06/05 10:09:36 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int sig)
{
	static int				bit;
	static unsigned char	c;

	c = c | (sig == SIGUSR1);
	if (++bit == 8)
	{
		ft_putchar(c);
		bit = 0;
		c = 0;
	}
	else
		c = c << 1;
}

int	main(int argc, char *argv[])
{
	pid_t	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error. No se necesitan argumentos\n");
		return (1);
	}
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (1)
		pause();
}
