/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:46:01 by bkeskint          #+#    #+#             */
/*   Updated: 2021/07/30 09:14:25 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft/libft.h"
#include	"ft_printf.h"

void	handle_string(t_parameters table)
{
	char	*s;

	s = (char *)va_arg(table->ap, char *);
	if (s == NULL)
		table->count += write(1, "(null)", 6);
	else
		table->count += write(1, s, ft_strlen(s));
	(table->i)++;
}
