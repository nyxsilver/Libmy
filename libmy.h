#ifndef LIBMY_H
# define LIBMY_H

#include  <unistd.h>
#include  <stdlib.h>
#include  <string.h>
#include  <wchar.h>

typedef struct	list
{
	void        *content;
	size_t      content_size;
	struct list	*next;
}				t_list;

void			my_putchar(char c);
void			my_putstr(char *str);
int				my_strcmp(char *s1, char *s2);
size_t			my_strlen(char *str);
char			*my_strdup(char *src);
char			*my_strcpy(char *dst, char *src);
char			*my_strncpy(char *dst, char *src, size_t len);
int				my_atoi(char *str);
int				my_strncmp(char *s1, char *s2, size_t n);
char			*my_strcat(char *s1, char *s2);
char			*my_strncat(char *s1, char *s2, size_t len);


// void			*ft_memset(void *b, int c, size_t len);
// void			*ft_memcpy(void *dst,  void *src, size_t n);
// void			*ft_memccpy(void *dst,  void *src, int c, size_t n);
// void			*ft_memmove(void *dst,  void *src, size_t len);
// void			*ft_memchr( void *s, int c, size_t n);
// int			ft_memcmp( void *s1,  void *s2, size_t n);




size_t			ft_strlcat(char *dst, char *src, size_t size);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
char			*ft_strstr(char *haystack, char *needle);
char			*ft_strnstr(char *haystack, char *needle, size_t len);


int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif