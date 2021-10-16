/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:46:37 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 18:46:40 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_fibonacci(int index)
{
    int position;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return(ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
