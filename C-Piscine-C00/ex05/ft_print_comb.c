/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:39:09 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/05 11:24:48 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_all(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_fine(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		ft_print_all(a, b, c);
		return ;
	}
}

void	ft_ciao_norminette(char a, char b, char c)
{
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a == '7' && b == '8' && c == '9')
				{
					ft_print_all(a, b, c);
					return ;
				}
				ft_print_all(a, b, c);
				write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 0;
	c = 0;
	ft_ciao_norminette(a, b, c);
}
