/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:40:15 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/27 16:59:33 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
    int		i;
    int     len;
	va_list args;

	i = 0;
	len = 0;
    va_start(args, fmt);
    while (fmt[i])
    {
        if (fmt[i] == '%')
            ft_formater(args, fmt[++i] + 1);
      else
      {
          len += write(1, fmt + i, 1);
          i++;
      }
    }
    va_end(args);
    return (len);
}
