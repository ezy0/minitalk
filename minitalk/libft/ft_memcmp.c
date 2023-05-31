/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:42:05 by migmoren          #+#    #+#             */
/*   Updated: 2022/09/22 15:53:34 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 == s2)
		return (0);
	while (n-- > 0)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2 || !s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		else if (*(unsigned char *)s1 < *(unsigned char *)s2 || !s1)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
