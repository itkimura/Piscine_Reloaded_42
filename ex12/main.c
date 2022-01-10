/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itkimura <itkimura@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:49:57 by itkimura          #+#    #+#             */
/*   Updated: 2021/10/28 13:00:22 by itkimura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("0's factorial is %d\n", ft_iterative_factorial(0));
	printf("1's factorial is %d\n", ft_iterative_factorial(1));
	printf("2's factorial is %d\n", ft_iterative_factorial(2));
	printf("3's factorial is %d\n", ft_iterative_factorial(3));
	printf("4's factorial is %d\n", ft_iterative_factorial(4));
	printf("5's factorial is %d\n", ft_iterative_factorial(5));
}