/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 07:21:07 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/11 07:50:53 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_print_unique(char *dest)
{
	int		x;
	int		y;
	int		z;
	char	new_dest[126];
	int		j;

	j = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		y = x;
		z = 0;
		while (dest[y] != '\0')
		{
			if (dest[x] == dest[y])
				z++;
			if (dest[x] == dest[y] && z > 1)
				dest[y] = 30;
			y++;
		}
		if (dest[x] >= 32 && dest[x] <= 126)
		{
			new_dest[j] = dest[x];
			j++;
		}
		new_dest[j] = '\0';
		x++;
	}
	printf("%s\n", new_dest);
}

void	ft_strcat(char *str, char *str_2)
{
	int		i;
	int		j;
	int		i_counter;
	int		j_counter;
	char	dest[126];

	i_counter = 0;
	j_counter = 0;
	i = ft_len(&str[1]);
	j = ft_len(&str_2[2]);
	while (i_counter <= i)
	{
		dest[i_counter] = str[i_counter];
		i_counter++;
	}
	j++;
	while (j_counter <= j)
	{
		dest[i_counter + j_counter] = str_2[j_counter];
		j_counter++;
	}
	ft_print_unique(dest);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_strcat(argv[1], argv[2]);
	return (0);
}
