/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:54:28 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/27 16:26:14 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)
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
