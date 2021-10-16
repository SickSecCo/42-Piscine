/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:28:56 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 22:56:44 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	if (*to_find == '\0')
		return (str);
	while (1)
	{
		if (*str == *to_find)
		{
			j++;
			to_find++;
		}
		if (*to_find == '\0')
			return (str - j + 1);
		if (*str == '\0')
			break ;
		str++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char	str[] = "sopra la capra la panca campa, sotto la capra la panca crepa"; 
	char	casalinga[] = "crepa";
	printf("%s\n", ft_strstr(str, casalinga));
}
