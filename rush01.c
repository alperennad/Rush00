/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:03:37 by ademirca          #+#    #+#             */
/*   Updated: 2024/01/07 20:35:20 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	x_times(int a, char b)
{
	while (a > 0)
	{
		ft_putchar(b);
		a--;
	}
}

void	first(int length)
{
	while (length > 0)
	{
		ft_putchar('/');
		break ;
	}
	if (length == 2)
		ft_putchar(92);
	else if (length >= 3)
	{
		x_times(length - 2, '*');
		ft_putchar(92);
	}
	ft_putchar('\n');
}

void	middle(int length)
{
	ft_putchar('*');
	if (length == 2)
		ft_putchar('*');
	else if (length >= 3)
	{
		x_times(length - 2, ' ');
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	last(int length)
{
	ft_putchar(92);
	if (length == 2)
		ft_putchar('/');
	else if (length >= 3)
	{
		x_times(length - 2, '*');
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int	k;

	if ((width <= 0 || height < 0) || (width < 0 || height <= 0))
		write(1, "ERROR!\n", 7);
	else
	{
		first(width);
		k = 2;
		while (k < height)
		{
			middle(width);
			k++;
		}
		if (height > 1)
		{
			last(width);
		}
	}
}
