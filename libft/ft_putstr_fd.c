/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karai <karai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:06:34 by karai             #+#    #+#             */
/*   Updated: 2024/10/30 19:16:06 by karai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s += 1;
	}
	write(fd, "\0", 1);
}

// int main(void)
// {
// 	char *s = "asd";
// 	ft_putstr_fd(s,1);
// }
