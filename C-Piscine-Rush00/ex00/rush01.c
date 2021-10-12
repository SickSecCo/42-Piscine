/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtorregr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:31:15 by dtorregr          #+#    #+#             */
/*   Updated: 2021/10/02 17:43:50 by fdrudi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_set_nl(void)
{
	char	nl_ascii;

	nl_ascii = 10;
	write(1, &nl_ascii, 1);
}

void	print_line(char start_char, char mid_char, char end_char, int length)
{
	int	i;

	ft_putchar(start_char);
	if (length == 1)
	{
		return ;
	}
	i = 1;
	while (i < length - 1)
	{
		ft_putchar(mid_char);
		i++;
	}
	ft_putchar(end_char);
}

void	rush(int x, int y)
{
	int	current_line;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_line('/', '*', '\\', x);
	print_set_nl();
	if (y == 1)
	{
		return ;
	}
	current_line = 1;
	while (current_line < y - 1)
	{
		print_line('*', ' ', '*', x);
		print_set_nl();
		current_line++;
	}
	print_line('\\', '*', '/', x);
	print_set_nl();
}
