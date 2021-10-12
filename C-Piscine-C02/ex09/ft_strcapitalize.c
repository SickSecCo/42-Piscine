/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:18:50 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/12 17:22:56 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		if (i == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] += 'a' - 'A';
		else if ((str[count] < '0') || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || (str[count] > 'z'))
			i = 0;
		else
			i++;
		count++;
	}
	return (str);
}
