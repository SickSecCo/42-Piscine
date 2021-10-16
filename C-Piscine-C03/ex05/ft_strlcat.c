/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:15:15 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 11:33:32 by fforlini         ###   ########.fr       */
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

	dest_size = ft_count(dest);
	src_size = ft_count(src);
	if (dest_size >= size)
		return (src_size + size);
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] != '\0' && i < (size - 1 - dest_size))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	return (dest_size + src_size);
}
