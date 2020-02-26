#include "libmy.h"

//La fonction strncat() est identique, à la différence que
//elle ne prend en compte que les n premiers caractères de src ; 
// et src n'a pas besoin d'octet nul final si elle contient n caractères ou plus.

char	*my_strncat(char *s1, char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0' && j < len)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}