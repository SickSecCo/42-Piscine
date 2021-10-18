/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:07:44 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/18 13:07:46 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char s)
{
    write (1, &s, 1);
}

int main(int ac, char **agv)
{
    int a = 0;
    int c = 1;
    if (ac > 1)
    {
    while (c < ac)
    {
        a = 0;
        while (agv[c][a] != '\0')
            ft_putchar(agv[c][a++]);
        write (1, "\n", 1);
        c++;
    }
    }
    return (0);
}
