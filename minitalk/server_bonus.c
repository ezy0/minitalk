/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:34 by migmoren          #+#    #+#             */
/*   Updated: 2023/06/05 10:25:18 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_handler(int sig, siginfo_t *act, void *oldact)
{
	static int				bit;
	static unsigned char	c;

	(void)oldact;
	if (sig == SIGUSR1)
		kill(act->si_pid, SIGUSR1);
	else
		kill(act->si_pid, SIGUSR2);
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
	struct sigaction	sigact;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error. No se necesitan argumentos\n");
		return (1);
	}
	ft_printf("PID: %d\n", getpid());
	sigact.sa_sigaction = ft_handler;
	sigaction(SIGUSR1, &sigact, NULL);
	sigaction(SIGUSR2, &sigact, NULL);
	while (1)
	{
		pause();
	}
}
