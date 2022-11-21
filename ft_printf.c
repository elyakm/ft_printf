/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamelialaksi <kamelialaksi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:40:15 by kamelialaks       #+#    #+#             */
/*   Updated: 2022/11/20 19:24:34 by kamelialaks      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


ft_formats(char fmt, va_list args)
{
    int len;
    
    len = 0;
    if (fmt == 'c')
        
}





int	ft_printf(const char *fmt, ...)
{
	
    int		i;
	va_list args;

	i = 0;
    va_start(args, fmt);
    while (fmt[i])
    {
      if (fmt[i] == '%')
      {
          len = ft_formats(fmt + 1, args);
          i++;
      }
      else
          len = write(1, fmt + i, 1);
        i++;
    }
    va_end(args);

}