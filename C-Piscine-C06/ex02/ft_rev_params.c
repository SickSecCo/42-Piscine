/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:47:17 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/18 14:47:20 by fforlini         ###   ########.fr       */
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
    int c = ac - 1;
    if (ac > 1)
    {
    while (c > 0)
    {
        a = 0;
        while (agv[c][a] != '\0')
            ft_putchar(agv[c][a++]);
        write (1, "\n", 2);    
        c--;
    }
    }
    return (0);
}