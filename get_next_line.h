/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <dgreat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 19:18:34 by dgreat            #+#    #+#             */
/*   Updated: 2019/05/03 04:34:04 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** # include <sys/types.h>
** # include <sys/uio.h>
** # define BUFF_SIZE 32
*/
int					get_next_line(const int fd, char **line);

#endif
