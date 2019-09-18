/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbatumik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:18:58 by bbatumik          #+#    #+#             */
/*   Updated: 2019/09/18 12:12:02 by bbatumik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int affino;
	int romeo;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		affino = 0;
		if (str[i] == to_find[affino])
		{
			romeo = i;
			while (str[i] == to_find[affino])
			{
				if (to_find[affino + 1] == '\0')
					return (&str[romeo]);
				affino++;
				i++;
			}
			i = romeo;
		}
		i++;
	}
	return (0);
}
