/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelialaksi <kamelialaksi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:08:58 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/26 12:52:01 by kamelialaks      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int	ft_formater(va_list arg, const char fmt)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (format == '%')
		len += ft_putchar('%');
}
