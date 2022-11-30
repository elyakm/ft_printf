/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:54:28 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/30 10:26:29 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if(!str)
	{
		ft_putstr("(null)");
		return(6);
	}
	while (str[i])
		ft_putchar(str[i++]);
	return(i);
}

void	ft_putnbr_base(long nbr, char *base, int *len)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0 && base_len <= 10)
	{
		*len += ft_print_char('-');
		nbr *= -1;
	}
	if ((size_t)nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base, len);
		ft_putnbr_base(nbr % base_len, base, len);
	}
	else
		*len += ft_print_char(base[nbr]);
}