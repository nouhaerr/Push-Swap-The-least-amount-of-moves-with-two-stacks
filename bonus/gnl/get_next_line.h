/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:04:43 by nerrakeb          #+#    #+#             */
/*   Updated: 2023/04/13 15:30:53 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../../libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_read_and_add_to_stash(int fd, char *stash);
char	*ft_new_line(char *stash);
char	*ft_save(char *stash);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, const char *s2);
char	*ft_strdup(const char *str);
char	*ft_substr(const char *s, unsigned int start, size_t len);

#endif
