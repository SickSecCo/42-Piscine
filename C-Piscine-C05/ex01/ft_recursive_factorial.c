/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:02:47 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 17:02:50 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if ( nb == 0 || nb == 1)
        return (1);
    if (nb > 0)
        nb = nb * ft_recursive_factorial(nb -1);
    return (nb);
}