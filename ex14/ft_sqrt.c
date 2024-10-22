/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:23:42 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/10/22 21:32:25 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;
	int squared;

	i = 1;
	squared = 1;
	if (nb == 0 || nb < 0)
		return (0);
	while (i * i < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	return (0);
}

int main()
{
	int x = ft_sqrt(144);
	printf("%i\n", x);
	return (0);
}
