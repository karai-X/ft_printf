/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_cnt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:39:33 by karai             #+#    #+#             */
/*   Updated: 2024/11/24 14:23:12 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd_cnt(char c, int fd, int *cnt)
{
	int	temp;

	temp = write(fd, &c, fd);
	if (temp == -1 || *cnt == -1)
		*cnt = -1;
	else
		*cnt += 1;
}

void	ft_putstr_fd_cnt(char *s, int fd, int *cnt)
{
	if (s == NULL)
	{
		ft_putstr_fd_cnt("(null)", fd, cnt);
		return ;
	}
	while (*s != '\0')
	{
		ft_putchar_fd_cnt(*s, fd, cnt);
		s += 1;
	}
}

bool	ft_is_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
	{
		return (true);
	}
	else
		return (false);
}
