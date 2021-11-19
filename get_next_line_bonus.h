/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleroy <aleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:22:31 by aleroy            #+#    #+#             */
/*   Updated: 2021/10/18 18:22:33 by aleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

int		ft_strlen(char *str);

char	*ft_strjoin_gnl(char *s1, char *s2, int i, int c);
char	*ft_strdup_gnl(const char *s1);
int		modif_buf_gnl(char *buf);
char	*gnl2(char *line, char *buf);
char	*get_next_line(int fd);

#endif
