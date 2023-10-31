#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int   ft_isalpha(int c);
int   ft_isdigit(int num);
int   ft_isalnum(int i);
int   ft_isascii(int i);
int ft_isprint(int i);
int   ft_strlen(const char *str);
int   ft_toupper(int c);
int   ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int   ft_strncmp(const char *first, const char *second, size_t length);
void *ft_memset(void *str, int c, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
void  ft_bzero(void *s, size_t n);

#endif
