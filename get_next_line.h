/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otimofie <otimofie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:24:44 by otimofie          #+#    #+#             */
/*   Updated: 2018/03/04 14:39:33 by otimofie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>

# define BUFF_SIZE 10

int					get_next_line(const int fd, char **line);

typedef struct		s_lt
{
	int				fd;
	char			*content;
	struct s_lt		*next;
}					t_lt;

#endif
