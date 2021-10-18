/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:19:44 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/17 18:22:21 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_prime(int nb)
{
	int	c;

	while (1)
	{
		c = 2;
		if (nb < 2)
			return (0);
		while (c <= nb / 2)
		{
			if (nb % c == 0)
				return (0);
			c++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_find_prime(nb))
		nb++;
	return (nb);
}
