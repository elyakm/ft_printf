/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:40:15 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/30 19:30:05 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formater(va_list arg, const char fmt)
{
	int	len;

	len = 0;
	if (fmt == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (fmt == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (fmt == '%')
		len += ft_putchar('%');
	else if (fmt == 'p')
	{
		len += ft_putstr("0x");
		ft_putnbr_base(va_arg(arg, unsigned long), "0123456789abcdef", &len);
	}
	else if (fmt == 'd' || fmt == 'i')
		ft_putnbr_base(va_arg(arg, int), "0123456789", &len);
	else if (fmt == 'u')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789", &len);
	else if (fmt == 'x')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef", &len);
	else if (fmt == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF", &len);
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			len += ft_formater(args, fmt[i + 1]);
			i++;
		}
		else
		{
			len += write(1, fmt + i, 1);
		}
		i++;
	}
	va_end(args);
	return (len);
}
