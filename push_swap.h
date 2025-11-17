/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelero- <imelero-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:22:26 by imelero-          #+#    #+#             */
/*   Updated: 2025/11/13 18:55:12 by imelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"


t_list	*ft_parse(t_list *head, char *arg);
void	ft_free(t_list **stack_a, char **str);
int count_nodes(t_list *stack);
int count_min_index(t_list *head);
int count_max_index(t_list *head);
void	algorithm(t_list **stack_a, t_list **stack_b);
void	alg_onetwo(t_list **stack_a, int nodes);
void	alg_three(t_list **stack_a);
void	alg_four(t_list **stack_a, t_list **stack_b);
void	alg_five(t_list **stack_a, t_list **stack_b);
void    sa(t_list *stack_a, int print_check);
void    sb(t_list *stack_b, int print_check);
void    ss(t_list  *head);
void    pa(t_list **stack_a, t_list **stack_b);
void    pb(t_list **stack_a, t_list **stack_b);
void    ra(t_list **stack_a, int print_check);
void    rb(t_list **stack_b, int print_check);
void    rr(t_list **stack_a, t_list **stack_b);
void    rra(t_list **stack_a, int print_check);
void    rrb(t_list **stack_b, int print_check);
void    rrr(t_list **stack_a, t_list **stack_b);

#endif
