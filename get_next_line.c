/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <dgreat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 07:03:22 by dgreat            #+#    #+#             */
/*   Updated: 2019/05/06 22:16:03 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #include "get_next_line.h"
*/

#include "libft/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#define BUFF_SIZE 32

static t_list	*get_file(int fd, t_list *head)
{
	t_list			*tmp;

	if (!head || fd < 0)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
			return (tmp);
		tmp = tmp->next;
	}
	if (!(tmp = ft_lstnew(ft_strnew(0), fd)))
		return (NULL);
	ft_lstadd(&head, tmp);
	return (tmp);
}

static int		last_hero()
{
	t_list		*list;
	t_list		*plist;

	return (0);
}

static int		result(char line, int len, t_list *head, t_list *file)
{
	if (ft_strchr_safe(file->content, '\n'))
	{
		free(line);
		line = ft_memccpy(line, file->content, '\n', ft_strlen(file->content));
		start = size_t(ft_strchr(file->content, '\n') - (char *)(file->content) + 1));
		file->content = ft_realloc(file->content + start, ft_strlen(file->content + start));
		return (1);
	}
	if (file->content && !len)
	{
		return (1);
	}
	return (last_hero());
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*head;
	t_list			*file;
	int				len;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	if (!line || fd < 0 || read(fd, buf, 0) < 0)
		return (-1);
	if (!(file = get_file(fd, head)))
		return (-1);
	len = 1;
	while (ft_strchr_safe(file->content, '\n') && len)
	{
		len = read(file->content_size, buf, BUFF_SIZE);
		buf[len] = 0;
		tmp = ft_strjoin(file->content, buf);
		free(file->content);
		file->content = ft_strdup_safe(tmp);
		free(tmp);
	}
	*line = file->content;
	return (result(*line, len, head, file));
}
