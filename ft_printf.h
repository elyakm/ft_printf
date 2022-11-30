/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:22:57 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/28 18:33:55 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>

# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_formater(va_list arg, const char fmt);
int		ft_putchar(int c);
int		ft_putstr(char *str);

#endif
