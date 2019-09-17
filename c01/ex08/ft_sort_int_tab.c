/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatumik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:59:09 by bbatumik          #+#    #+#             */
/*   Updated: 2019/09/11 16:02:28 by bbatumik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int bba;

	i = 2;
	bba = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			bba = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = bba;
			i = 0;
		}
		else
			i++;
	}
}
