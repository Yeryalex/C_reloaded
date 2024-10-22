/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:54:44 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/10/22 21:06:35 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{
		printf("Only positive numbers Allowed\n");
		return (-1);
	}
	int i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

int main()
{
	int x;

	x = ft_iterative_factorial(-1);
	printf("%i\n", x);
	return (0);
}
