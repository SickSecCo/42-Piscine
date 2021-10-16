/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:36:11 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 17:36:15 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    i = nb;
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    if (nb == 0)
        return (0);
    while (power > 1)
    {
        nb *= i;
        power--;
    }
    return (nb);
}
#include <stdio.h>
#include <math.h>
int main(void)
{
    int nb = -2;
    int power = 6;
    printf("%d\n", ft_iterative_power(nb, power));
    printf("%f\n", pow(nb, power));
}
