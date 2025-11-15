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


nb_list	*ft_parse(nb_list *head, char *arg);
void    ft_index(nb_list *head_a, int nb);
void	alg(nb_list **head_a);
void    sa(nb_list *head_a);
void    sb(nb_list *head_b);
void    ss(nb_list  *head);
void    pa(nb_list **head_a, nb_list **head_b);
void    pb(nb_list **head_a, nb_list **head_b);
void    ra(nb_list **head_a);
void    rb(nb_list **head_b);
void    rr(nb_list **head_a, nb_list **head_b);
void    rra(nb_list **head_a);
void    rrb(nb_list **head_b);
void    rrr(nb_list **head_a, nb_list **head_b);

#endif
