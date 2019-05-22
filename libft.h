#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void    ft_isalnum(int c);
void    ft_isalpha(int c);
void    ft_isascii(int c);
void    ft_isdigit(int c);
void    ft_isprint(int c);
void    ft_strdup(const char *s1);
void    ft_strlen(const char *s);
void    ft_tolower(int c);
void    ft_toupper(int c);

#endif
