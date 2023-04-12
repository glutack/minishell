/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irmoreno <irmoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:03:43 by irmoreno          #+#    #+#             */
/*   Updated: 2023/03/01 17:39:24 by irmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h> //open
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_printf(char const *arg, ...);

/*printf
int				ft_printf(char const *arg, ...);
unsigned int	ft_putchar(char c);
unsigned int	ft_putstr(char *str);
unsigned int	ft_putnbr(int n);
unsigned int	ft_putnbru(unsigned long n);
unsigned int	ft_puthex(const char *type, unsigned long n);*/

		//F -> 0 | T -> 1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
			/* writes len bytes of value c to the string b
				RETURN -> void b*/
void	*ft_bzero(void *s, size_t n);
			/* RETURN -> writes n zeroes bytes to the string s. 
						If n is 0, it does nothing*/
void	*ft_memcpy(void	*dst, const void *src, size_t n);
			/* copies n bytes from memory area src to memory area dst. If dst 
			and src overlap, bahaviour is undefined. Applications in which dst 
			and src might overlap should use MEMMOVE
				RETURN -> original value of dst*/
void	*ft_memmove(void *dst, const void *src, size_t len);
			/* copies n bytes from string src to string dst. The strings may
			overlap; the copy is done in a non-destructive manner
				RETURN -> original value of dst*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
			/* concatenates str. Takes full size of dest buffer and NULL
			terminates. Copies up to dstsize - 1 char from src to dst
				RETURNS -> lenght of src*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
			/* appends string src to the end of dst. Appends at most 
			dstsize - strlen(dst) - 1 characters. It NUL-terminates unless
			dstsize is 0 or original dst string was longer than dstsize. If src
			and dst strings overlap, behaviour is undefined
				RETURNS -> initial lenght of dst + lenght of src*/
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
			/* locates first occurrence of (char)c in string s. \0 considered
				RETURN -> pointed to located char or NULL if no c in s*/
char	*ft_strrchr(const char *s, int c);
			/* strchr but reverse*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
			/* compares s1 and s2 up to n characters. Designed for comparing 
			strings rather than binary data, chars after \0 are not compared
				RETURNS -> int according as s1 is greather, equal or less than
						s2. Done using unsigned chars*/
void	*ft_memchr(const void *s, int c, size_t n);
			/* locates first occurrence of (unsigned char)c in string s up to 
			n bytes
				RETURN -> pointer to byte located or NULL if no c in s*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
			/* compares byte string s1 against byte string s2, both assumed to
			be n bytes long
				RETURN -> int according as s1 is greater, equal or less than
				s2*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
			/* locates first occurrence of string needle in string haystack up
			to len characters. Chars after \0 are not searched
				RETURN -> if needle empty: haystack. If no needle: NULL*/
int		ft_atoi(const char *str);
			// 	RETURN -> converts intial portion of str to int
void	*ft_calloc(size_t count, size_t size);
			/* allocates enough space for count objects that are size bytes of
			memory
				RETURN -> */
char	*ft_strdup(const char *s1);
			/* allocates enough memory for a copy of string s1, does the copy
				RETURN -> pointer to the copy, NULL if insufficient memory*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
			/* 	RETURN -> reserva (malloc) y devuelve una substring de string s,
						creada a partir de start y con longitud máxima len. NULL
						si no hay suficiente memoria*/
char	*ft_strjoin(char const *s1, char const *s2);
			/* 	RETURN -> reserva (malloc) y devuelve una nueva string formada
						por s1 y s2 concatenadas*/
char	*ft_strtrim(char const *s1, char const *set);
			/* elimina todos los caracteres de la tr set desde el principio y
			final de s1, hasta encontrar un caracter no perteneciente a set.
				RETURN -> string resultante con reserva de malloc*/
char	**ft_split(char const *s1, char c);
			/* 	RETURN -> reserva (malloc) un array de strings resultante de
						separar s en substrings utilizando c como delimitador. 
						Termina con	puntero NULL*/
void	ft_free_split(char **ptr);
char	*ft_itoa(int n);
			/* 	RETURN -> utilizando malloc, genera str que represente valor int
						recibido como argumento*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
			/* aplica función f a cada carácter de str s
				RETURN -> nueva str con resultado del sucesivo f*/
char	ft_striteri(char *s, void (*f)(unsigned int, char*));
			/* aplica función f a cada carácter de str s
				RETURN -> */
void	ft_putchar_fd(char c, int fd);
			/* envía char c al fd
				RETURN -> */
void	ft_putstr_fd(char *s, int fd);
			/* envía str s al fd
				RETURN -> */
void	ft_putendl_fd(char *s, int fd);
			/* envía str s al fd, seguido de un salto de línea
				RETURN -> */
void	ft_putnbr_fd(int n, int fd);
			/* envía int n al fd
				RETURN -> */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void *content);
			/* crea un nuevo nodo con malloc. Variable content se inicializa
			con el contenido de parámetro content, la variable next	con NULL
				RETURN -> el nuevo nodo*/
void	ft_lstadd_front(t_list **lst, t_list *new);
			/* añade nodo new al principio de lista lst
				RETURN -> */
int		ft_lstsize(t_list *lst);
			/* 	RETURN -> cuenta el número de nodos de una lista*/
t_list	*ft_lstlast(t_list *lst);
			/*	RETURN -> el último nodo de la lista*/
void	ft_lstadd_back(t_list **lst, t_list *new);
			/* añade nodo new al final de lst
				RETURN -> */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
			/* toma como parámetro un nodo lst y libera la memoria del
			contenido (del) y el nodo.
				RETURN -> */
void	ft_lstclear(t_list **lst, void (*del)(void *));
			/* elimina y libera nodo lst y todos los consecutivos
				RETURN -> */
void	ft_lstiter(t_list *lst, void (*f)(void *));
			/* itera lst y aplica f en contenido de cada nodo
				RETURN -> */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
			/*	itera lst al contenido de cada nodo y aplica f. Del se usa
			para eliminar contenido de un nodo si es necesario
				RETURN -> nueva lista con f aplicada*/
#endif
