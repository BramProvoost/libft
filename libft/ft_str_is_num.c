/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_num.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 16:05:43 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/10/21 16:13:52 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_num(char *str)
{
	size_t	counter;

	counter = 0;
	while (str[counter])
	{
		if (!ft_isdigit(str[counter]))
			return (0);
		counter++;
	}
	return (1);
}
