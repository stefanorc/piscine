/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-luca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:10:12 by ede-luca          #+#    #+#             */
/*   Updated: 2020/11/29 12:05:55 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int x, int y, int i, int p)
{
	if (p == 0 || p == y - 1)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	return ;
}

void	rush(int x, int y)
{
	int i;
	int p;

	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	p = 0;
	while (p < y)
	{
		i = 0;
		while (i < x)
		{
			check(x, y, i, p);
			i++;
		}
		ft_putchar('\n');
		p++;
	}
	return ;
}
