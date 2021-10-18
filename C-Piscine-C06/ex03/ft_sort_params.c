/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforlini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:18:51 by fforlini          #+#    #+#             */
/*   Updated: 2021/10/18 15:18:52 by fforlini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void ft_putchar(char s)
{
    write (1, &s, 1);
}
int check(char *str1, char *str2)
{
    int	i;

	i = 0;
	while (str2[i] != '\0' && str1[i] != '\0' && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
void ft_print(int ac, char **agv)
{
    int c = 1;
    int a;
    while (c < ac)
        {
            a = 0;
            while (agv[c][a] != '\0')
                ft_putchar(agv[c][a++]);
            write (1, "\n", 2);    
            c++;
        }
}
int main(int ac, char **agv)
{
    int s, v;
    char *temp;
    if (ac > 1)
    {
        s = 1;
        while (s < ac)
        {
            v = s + 1;
            while (v < ac)
            {
                if (check(agv[s], agv[v]) > 0)
                {
                    temp = agv[s];
                    agv[s] = agv[v];
                    agv[v] = temp;
                }
                v++;

            }
            s++;
        }
        ft_print(ac, agv);
    }
    return (0);
}


