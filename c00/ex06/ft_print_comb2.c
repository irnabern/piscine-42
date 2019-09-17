/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatumik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:05:39 by bbatumik          #+#    #+#             */
/*   Updated: 2019/09/09 12:38:48 by bbatumik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int un;
	int deux;

	un = 0;
	deux = 1;
	while (un <= 98)
	{
		deux = un + 1;
		while (deux <= 99)
		{
			ft_putchar(un / 10 + '0');
			ft_putchar(un % 10 + '0');
			ft_putchar(' ');
			ft_putchar(deux / 10 + '0');
			ft_putchar(deux % 10 + '0');
			if (un != 98)
				write(1, ", ", 2);
			deux++;
		}
		un++;
	}
}
