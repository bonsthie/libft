#ifndef FT_LIBFT_H
#define FT_LIBFT_H

#include <stddef.h>
#include <stdlib.h>

int    ft_isalpha(int c);
int    ft_isdigit(int num);
int    ft_isalnum(int i);
int    ft_isascii(int i);
int    ft_isprint(int i);
int    ft_strlen(const char *str);
int    ft_toupper(int c);
int    ft_tolower(int c);
char  *ft_strchr(const char *str, int c);
char  *ft_strrchr(const char *str, int c);
int    ft_strncmp(const char *first, const char *second, size_t length);
void  *ft_memset(void *str, int c, size_t n);
void  *ft_memchr(const void *str, int c, size_t n);
void   ft_bzero(void *s, size_t n);
int    ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t ft_strlcat(char *dest, const char *src, unsigned int size);
char  *ft_strdup(const char *source);
void *ft_memcpy(void *destination, const void *source, size_t num);
void *ft_memmove(void *destination, const void *source, size_t num);
char *ft_strnstr(const char *big, const char *little, size_t len);
int	ft_atoi(const char *str);
void *ft_calloc(size_t nitems, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif
