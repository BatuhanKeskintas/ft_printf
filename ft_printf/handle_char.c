/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeskint <bkeskint@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:23:02 by bkeskint          #+#    #+#             */
/*   Updated: 2021/07/30 01:38:26 by bkeskint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	handle_char(t_parameters table)
{
	table->cha = va_arg(table->ap, int);
	table->count += write(1, &(table->cha), 1);
	(table->i)++;
}
