/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatumik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:38:52 by bbatumik          #+#    #+#             */
/*   Updated: 2019/09/11 17:45:18 by bbatumik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int nombre[size];

	i = 0;
	while (i < size)
	{
		nombre[i] = tab[i];
		i++;
	}
	i = 0;
	while (size > 0)
	{
		tab[size - 1] = nombre[i];
		size--;
		i++;
	}
}
