/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:16:11 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/17 17:39:17 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (power-- > 1)
	{
		return (nb * ft_recursive_power(nb, power));
	}
	return (nb);
}
