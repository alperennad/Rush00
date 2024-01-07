/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:37:39 by ademirca          #+#    #+#             */
/*   Updated: 2024/01/07 20:35:41 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int width, int height);

int	ft_atoi(char *c)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (c[i] == 32 || (c[i] >= 9 && c[i] <= 13))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (c[i] >= '0' && c[i] <= '9')
	{
		res = res * 10 + (c[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
		return (0);
	}
}
