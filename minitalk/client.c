/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:28 by migmoren          #+#    #+#             */
/*   Updated: 2023/06/01 12:33:09 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_communicate(pid_t pid, char *msg)
{
	int		i;
	int		b;

	i = -1;
	while (msg[++i])
	{
		b = 8;
		while (b--)
		{
			if (msg[i] >> b & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
	}
}

int	main(int argc, char *argv[])
{
	pid_t	pid;
	int		i;

	i = 0;
	if (argc != 3)
		ft_printf("Error. Numero incorrecto de argumentos\n");
	else if (ft_strlen(argv[2]) < 1)
		ft_printf("Error. String vacía\n");
	else
	{
		pid = ft_atoi(argv[1]);
		ft_communicate(pid, argv[2]);
		return (0);
	}
	return (1);
}
