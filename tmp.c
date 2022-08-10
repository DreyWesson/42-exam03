#include <stdio.h>

void ft_sort(char *dest);
void ft_print(char *dest, char *new_dest);
int ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_print(char *dest, char *new_dest)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(dest[i] != '\0')
	{
		if (dest[i] != dest[i + 1])
		{
			new_dest[j] = dest[i];
			j++;
		}
			// printf("%c", dest[i]);
		i++;
	}
	new_dest[j] = '\0';
}

void ft_sort(char *dest)
{
	char tmp;
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		while (dest[j] != '\0')
		{
			if (dest[j + 1] && dest[j] > dest[j + 1])
			{
				tmp = dest[j + 1];
				dest[j + 1]= dest[j];
				dest[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void ft_strcat(char *str, char *str_2)
{
	int i;
	int j;
	int i_counter;
	int j_counter;
	char new_dest[26];

	i_counter = 0;
	j_counter = 0;
	i = ft_len(&str[1]);
	j = ft_len(&str_2[2]);

	char dest[j +i + 1];
	while (i_counter <= i)
	{
		dest[i_counter] = str[i_counter];
		i_counter++;
	}
	while (j_counter <= j)
	{
		dest[i + j_counter] = str_2[j_counter];
		j_counter++;
	}
	dest[i + j + 1] = '\0';
	ft_sort(dest);
	ft_print(dest, new_dest);


}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_strcat(argv[1], argv[2]);	
	return (0);
}