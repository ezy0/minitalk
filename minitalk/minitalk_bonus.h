/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:40:15 by migmoren          #+#    #+#             */
/*   Updated: 2023/06/07 08:48:35 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include "libft/libft.h"
# include <signal.h>

void	ft_communicate(pid_t pid, char *msg);
void	ft_handler(int sig, siginfo_t *act, void *oldact);
void	ft_confirm(int sig);

#endif