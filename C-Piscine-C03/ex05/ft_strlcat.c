/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:15:15 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/16 19:41:16 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count(char *check)
{
	unsigned int	j;

	j = 0;
	while (check[j] != '\0')
		j++;
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;
	unsigned int	sol;

	dest_size = ft_count(dest);
	src_size = ft_count(src);
	if (size <= dest_size)
		sol = src_size + size;
	else
		sol = dest_size + src_size;
	i = 0;
	while (src[i] != '\0' && dest_size + 1 + i < size)
	{
		dest[dest_size + i] = src[src_size + i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (sol);
}
