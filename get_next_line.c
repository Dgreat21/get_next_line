/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgreat <dgreat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 07:03:22 by dgreat            #+#    #+#             */
/*   Updated: 2019/05/01 05:00:50 by dgreat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//char	*ft_alloc(char *line, my_list *head)
//{
//	my_list		*cp;
//	size_t		size;
//	size_t		cnt;
//	int			i;
//
//	cp = head;
//	size = 0;
//	cnt = 0;
//	while (cp)
//	{
//		size += cp->content;
//		cp = cp->next;
//		cnt++;
//	}
//	if (!(line = ft_strnew(size - cnt + 1))))
//		return (NULL);
//	return (line);
//}
//
//void	ft_fill_line(char *line, my_list *head)
//{
//	my_list		*cp;
//	size_t		i;
//
//	cp = head;
//	while (cp)
//	{
//		i += ft_strlcat(line, cp->content, cp->)
//	}
//}
//

int		get_next_line(const int fd, char **line)
{
	static t_list	**head;
	t_list			*file;
	int				len;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	if (!line || fd < 0 || read(fd, buf, 0) > 0)
	if (!ft_alloc(&line, head))
	{
		ft_lst_clear(head);
		return (-1);
	}


}
