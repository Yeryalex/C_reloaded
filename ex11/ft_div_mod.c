/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:46:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/10/22 20:53:44 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int x = 20;
	int	y = 10;
	int div;
	int mod;

	ft_div_mod(x, y, &div, &mod);
	printf("div = %i with mod = %i\n", div, mod);
	return (0);
}
