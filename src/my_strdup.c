#include "libmy.h"

//La fonction strdup() renvoie un pointeur sur une nouvelle chaîne de caractères qui est dupliquée depuis str

char	*my_strdup(char *src)
{
	int		n;
	char	*tab;

	n = 0;
	n = my_strlen(src);
	if (!(tab = (char*)(malloc(sizeof(char) * (n + 1)))))
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		tab[n] = src[n];
		n++;
	}
	tab[n] = '\0';
	return (tab);
}