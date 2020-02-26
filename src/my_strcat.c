#include "libmy.h"

//La fonction strcat() ajoute la chaîne src à la fin de la chaîne dest en écrasant le caractère nul (« \0 ») à la fin de dest, puis en ajoutant un nouveau caractère nul final. 

char	*my_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}