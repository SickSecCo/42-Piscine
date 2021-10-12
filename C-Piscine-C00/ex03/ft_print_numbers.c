/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:54:26 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/04 22:18:50 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	unsigned int	i;
	unsigned int	number;

	number = '0';
	i = 0;
	while (i <= 9)
	{
		ft_putchar(number);
		number++;
		i++;
	}
}
