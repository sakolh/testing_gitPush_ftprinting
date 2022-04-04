/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirapra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 02:08:01 by shirapra          #+#    #+#             */
/*   Updated: 2022/04/01 14:31:35 by shirapra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_formats(va_list args. const char format);
int	ft_print_char(int c);
int	ft_pritn_str(char *str);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_percent(void);

void	ft_put_str(char *str);
void	ft_put_ptr(uintptr_t num);
int	ft_ptr_len(unitptr_t num);
char	*ft_unitoa(unsigned int n);
int	ft_num_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int	ft_hex_len(unsigned int unm)

#endif
