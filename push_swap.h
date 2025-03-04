/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soer-ret <soer-ret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:25:06 by soer-ret          #+#    #+#             */
/*   Updated: 2025/03/04 00:56:49 by soer-ret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

//list
t_list				*ft_lstnew(int content);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst);
t_list				*ft_plstlast(t_list *lst);
int					ft_lstendex(t_list *a, int x);

//tools
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
int					chek_sorte(t_list *a);
long				ft_atoi(const char *nb, char **args, t_list **a);
int					chek_dup(t_list *a);
int					ft_checkargs(char *av);
void				fill_stack(t_list **a, char **av);
int					big_node(t_list *a);
void				ft_swap(int *a, int *b);
int					*sorarr(int *arr, int size);
int					*sorted(t_list *a);
int					get_rang(t_list **a);
void				range_up(int *s, int *e, int *rang, int size);
void				back_to_a(t_list **a, t_list **b, int *arr, int e);
char				**ft_freee(char **str);
void				ft_erreo(t_list **a, char **arr);

//moves
void				swap(t_list **t);
void				sa(t_list **a, int flag);
void				sb(t_list **b, int flag);
void				ss(t_list **a, t_list **b, int flag);

void				rotate(t_list **t);
void				ra(t_list **a, int flag);
void				rb(t_list **b, int flag);
void				rr(t_list **a, t_list **b, int flag);

void				r_rotate(t_list **t);
void				rra(t_list **a, int flag);
void				rrb(t_list **b, int flag);
void				rrr(t_list **a, t_list **b, int flag);

void				push(t_list **x, t_list **y);
void				pa(t_list **a, t_list **b, int flag);
void				pb(t_list **a, t_list **b, int flag);

void				sort_v1(t_list **a, t_list **b, int *arr, int size);
void				back_to_a(t_list **a, t_list **b, int *arr, int e);
void				sort3(t_list **a);
void				sort5(t_list **a, t_list **b);
int					small_node(t_list *a);

// bo_moves
void				bo_pa(t_list **a, t_list **b);
void				bo_pb(t_list **a, t_list **b);

void				bo_rra(t_list **a);
void				bo_rrb(t_list **b);
void				bo_rrr(t_list **a, t_list **b);

void				bo_ra(t_list **a);
void				bo_rb(t_list **b);
void				bo_rr(t_list **a, t_list **b);

void				bo_sa(t_list **a);
void				bo_sb(t_list **b);
void				bo_ss(t_list **a, t_list **b);

//bonus utils

int					ft_strcmp(const char *s1, const char *s2);
int					ft_moves(t_list **a, t_list **b, char *move);
int					ft_res(t_list **a, t_list **b);

//get next line

char				*get_next_line(int fd, int i);
char				*chyata(char *str);
char				*lineuntilnl(char *str);
char				*read_line(char *line, int fd);
char				*ft_strchr(const char *str, int c);
char				*ft_strjoin(char *s1, char *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				*ft_strdup(const char *s1);

#endif
