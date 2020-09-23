/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:50:23 by rbeach            #+#    #+#             */
/*   Updated: 2020/02/10 19:50:28 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H
# include <io.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
//# include <sys/uio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "global_vars.h"

void	ft_map(int ar, char **av);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_file_checker(char *f_name);
int		ft_map_checker(char *f_name);
void	ft_map_push(void);
int		ft_legend_checker (char *str);
int		ft_legend_checker_2 (char *str);
void	ft_file_copier (char *f_name);
char	*ft_strcpy(char *dest, char *src, unsigned int i);
int		ft_word_counter(char *str);
int		ft_word_sizer(char *str, int ind);
void	ft_range_fuller(char **result, char *str, int word_counter);
void	ft_copier(char **result, char *str);
char	**ft_split_leoric(char *str);
int		ft_file_sizer (char *f_name);
int		ft_desk_checker(void);
char	**ft_resulter(void);
int		ft_check_sqr(char **str, t_coords cord);
char	**ft_rewrite_sqr(char **diablo, t_coords cord);
t_list	*ft_create_elem(char data);
void	ft_list_push_back(t_list **begin_list, char a);
void	ft_free_write(t_list **ptr);
void	ft_map2(void);

#endif
