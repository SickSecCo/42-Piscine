/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:45:05 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/05 10:47:59 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print1(int a)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
}

void	ft_print2(int b)
{
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write (1, ", ", 2);
			ft_print1(a);
			write (1, " ", 1);
			ft_print2(b);
			b++;
		}
		a++;
	}
}
