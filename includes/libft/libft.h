#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> 
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *g);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t count);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memcpy (void *dest, const void *src, size_t n);
void	*ft_memccpy (void *dest, const void *src, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t count);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t num);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr (const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strdup(const char *str);
void	*ft_calloc (size_t numb, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *str, unsigned int start, size_t len);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, int word);

#endif