/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:58 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/30 10:28:37 by klaksi           ###   ########.fr       */
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

