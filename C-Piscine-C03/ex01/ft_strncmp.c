/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:06:17 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/14 23:20:51 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
int main (void)
{
	char s[] = "fsgmf";
	char s1[] = "dfhsgnw";
	ft_strncmp(s, s1, 4);
}

