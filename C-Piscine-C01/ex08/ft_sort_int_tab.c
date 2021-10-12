/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:36:22 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/07 17:32:49 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)

{
	int	temp;
	int	i;
	int	x;

	x = 0;
	while (x < size)
	{
		i = 0;
		while (i < size)
		{
			if (tabi[x] > tab[size - 1 - i] && x < (size - 1 - i))
			{
				temp = tab[size - 1 - i];
				tab[size - 1 - i] = tab [x];
				tab[x] = temp;
			}
			i++;
		}
		x++;
	}
}
