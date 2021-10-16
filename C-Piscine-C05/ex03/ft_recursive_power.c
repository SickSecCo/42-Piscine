/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:16:11 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 18:16:13 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_power(int nb, int power)
{
    if (power == 0)
        return (1);
    else if (power < 0)
        return (0);
    if (nb == 0)
        return (0);
    if (power-- > 1)
    {
        return(nb * ft_recursive_power(nb, power));
    }
    return (nb);
}
#include <stdio.h>
#include <math.h>
int main(void)
{
    int nb = -3;
    int power = 3;
    printf("%d\n", ft_recursive_power(nb, power));
    printf("%f\n", pow(nb, power));
}
