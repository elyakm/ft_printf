/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:40:15 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/27 15:03:57 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
    int		i;
    int     len;
	va_list args;

	i = 0;
    va_start(args, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
            ft_formater(fmt[++i] + 1, args);
      else
      {
          len += write(1, fmt + i, 1);
          i++;
      }
    }
    va_end(args);
    return (len);
}
