/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:55:50 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/18 12:55:53 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char s)
{
    write (1, &s, 1);
}

int main(int ac, char **argv)
{
    int i = 0;
    while (argv[0][i] != '\0')
    {
        ft_putchar(argv[0][i++]);
    }
    write (1, "\n", 1);
}
