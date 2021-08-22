#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

int	ft_toupper(int c);

int	ft_tolower(int c);

int	ft_isspace(int c);

int	ft_atoi(const char *nptr);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
