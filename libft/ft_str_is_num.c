/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:05:43 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/10/21 16:58:59 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_num(char *str)
{
	size_t	counter;

	counter = 0;
	if (!str)
		return (0);
	if (str[0] == '-' || str[0] == '+')
		counter++;
	while (ft_isdigit(str[counter]))
		counter++;
	if (str[counter])
		return (0);
	return (1);
}
