/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:47:09 by vbleskin          #+#    #+#             */
/*   Updated: 2025/12/18 22:44:08 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int			ft_isalpha(int c); //op
int			ft_isdigit(int c); //op
int			ft_isalnum(int c); //op
int			ft_isascii(int c); //op
int			ft_isprint(int c); //op
int			ft_strlen(const char *str); //op
void		*ft_memset(void *s, int c, size_t n); //op
void		ft_bzero(void *s, size_t n); //op
void		*ft_memcpy(void *dest, const void *src, size_t n); //op
void		*ft_memmove(void *dest, const void *src, size_t n); //op
size_t		ft_strlcpy(char *dest, const char *src, size_t s);
				//copie s caractere(s) de src dans dest
size_t		ft_strlcat(char *dest, const char *src, size_t s); //op
int			ft_toupper(int c); //op
int			ft_tolower(int c); //op
char		*ft_strchr(const char *s, int c); //op
char		*ft_strrchr(const char *s, int c); //op
int			ft_strncmp(const char *s1, const char *s2, size_t n); //op
void		*ft_memchr(const void *s, int c, size_t n); //op
int			ft_memcmp(const void *s1, const void *s2, size_t n); //op
char		*ft_strnstr(const char *big, const char *little, size_t len); //op
int			ft_atoi(const char *str); //op
void		*ft_calloc(size_t nmemb, size_t size); //op
char		*ft_strdup(const char *s); //op
char		*ft_substr(char const *s, unsigned int start, size_t len); //mko
char		*ft_strjoin(char const *s1, char const *s2); //mko
char		*ft_strtrim(char const *s1, char const *set); //op
char		**ft_split(char const *s, char c); //mko
char		*ft_itoa(int n); //op
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //op
void		ft_striteri(char *s, void (*f)(unsigned int, char*)); //op
void		ft_putchar_fd(char c, int fd); //op
void		ft_putstr_fd(char *s, int fd); //op
void		ft_putendl_fd(char *s, int fd); //op
void		ft_putnbr_fd(int n, int fd); //op

t_list		*ft_lstnew(void *content); //op
void		ft_lstadd_front(t_list **lst, t_list *new); //op
int			ft_lstsize(t_list *lst); //op
t_list		*ft_lstlast(t_list *lst); //op
void		ft_lstadd_back(t_list **lst, t_list *new); //op
void		ft_lstdelone(t_list *lst, void (*del)(void*)); //op
void		ft_lstclear(t_list **lst, void (*del)(void*)); //op
void		ft_lstiter(t_list *lst, void (*f)(void *)); //op
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); //op

#endif