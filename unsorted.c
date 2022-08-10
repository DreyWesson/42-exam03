#include <stdio.h>

void ft_sort(char *dest);
void ft_print(char *dest);
int ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void ft_print(char *dest)
{
	int i;
	i = 0;
	while(dest[i] != '\0')
	{
		if (dest[i] != dest[i + 1])
			printf("%c", dest[i]);
		i++;
	}
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
	while (j_counter <= j+1)
	{
		dest[i + j_counter + 1] = str_2[j_counter];
		j_counter++;
	}
	// dest[i + j + 1] = '\0';
	// pick a char, harvest all similar char and then unshift
	int itr;
	int itr_2;
	// int itr_3;
int tmpo;
char new_str[i +j+1];

	itr = 0;
	int newcounter;
	newcounter = 0;
	while(dest[itr] != '\0')
	{
		itr_2 = itr;
	tmpo = 0;
		while(dest[itr_2] != '\0')
		{

			// printf("%c",dest[itr_2]);
			// printf("%c ::: %c\n",dest[itr],dest[itr_2]);
			if (dest[itr] == dest[itr_2])
			{

				// itr_3 = itr_2 + 1;
				// // overwrite and unshift
				// while(dest[itr_3] != '\0')
				// {
				// 	dest[itr_3] = dest[itr_3 + 1];
				// 	itr_3++;
				// }
				if(tmpo == 1)
				{
					new_str[newcounter] = dest[itr];
					newcounter++;
				}
				tmpo++;
			}
			// printf("%s\n",dest);
			// printf("%i\n", tmpo);

				
			itr_2++;
		}
			printf("%s\n",new_str);

			// printf("\n");

		itr++;
	}

	// ft_sort(dest);
	// ft_print(dest);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_strcat(argv[1], argv[2]);	
	return (0);
}