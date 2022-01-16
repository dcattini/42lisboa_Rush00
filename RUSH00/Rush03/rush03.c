/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:13:08 by dcattini          #+#    #+#             */
/*   Updated: 2022/01/16 16:20:18 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_primeira(int x)
{
	int	i;

	if (x > 1)
	{
		i = 0;
		while (i < (x - 1))
		{
			if (i == 0 || x == 1)
			{
				ft_putchar('A');
			}
			if (i == (x - 2))
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	rush_ultima(int x)
{
	int	i;

	if (x > 1)
	{
		i = 0;
		while (i < (x - 1))
		{
			if (i == 0 || x == 1)
			{
				ft_putchar('A');
			}
			if (i == (x - 2))
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	rush_centro(int x)
{
	int	i;

	if (x > 1)
	{
		i = 0;
		while (i < (x - 1))
		{
			if (i == 0 || x == 1)
			{
				ft_putchar('B');
			}
			if (i == (x - 2))
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			i++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	a;

	a = 1;
	rush_primeira(x);
	while (a < y - 1)
	{
		rush_centro(x);
		a++;
	}
	if (y > 1)
	{
		rush_ultima(x);
	}
}
