/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sincesu <sincesu@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:29:32 by sincesu           #+#    #+#             */
/*   Updated: 2023/03/27 18:17:04 by sincesu          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	x;

	x = 97;
	while (x <= 122)
	{
		write(1, &x, 1);
		x++;
	}
}