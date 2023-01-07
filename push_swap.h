/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 15:45:53 by sbadr             #+#    #+#             */
/*   Updated: 2023/01/07 17:15:24 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct node {
	int			index;
	int			data;
	struct node	*next;
}t_stack;

typedef struct vars{
	int	pos;
	int	j;
	int	l;
	int	chunk;
	int	deep;
}t_vars;

void	error_print(void);
void	check_repeated(char **str, int size);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(const char *src);
char	*ft_strjoin(int size, char **strs, char *sep);
t_stack	*push(t_stack *head, int data, int index);
t_stack	*push_back(t_stack *head, long data, int index);
t_stack	*ft_last(t_stack *lst);
t_stack	*pop(t_stack *head);
t_stack	*ft_last(t_stack *lst);
long	check_int(char *str);
int		ft_strlen(char *str);
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
int		check_sorted(t_stack **a);
char	**ft_split(char *s, char c);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **head_a, t_stack **head_b);
void	sa(t_stack **head_a);
void	sb(t_stack **head_b);
void	ss(t_stack **head_a, t_stack **head_b);
void	rra(t_stack **head_a);
void	rrb(t_stack **head_b);
void	rrr(t_stack **head_a, t_stack **head_b);

void	indexer(t_stack **a);
int		lst_size(t_stack *lst);
void	sorted(t_stack **a, t_stack **b, int chunk, int deep);
void	stacker(t_stack **a, t_stack **b, int size);
int		get_lowest_pos(t_stack **stack, int pos);
int		highest_index(t_stack *stack);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
t_stack	*node_position(t_stack **a, int index);
int		position(t_stack **a, int index);

#endif