/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:04:00 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/31 13:31:27 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	sum;
	int		s;

	i = 0;
	s = 1;
	sum = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		sum = ((sum * 10) + (str[i] - 48));
		i++;
	}
	return (sum * s);
}
/*
int	main(void)
{
	const	char str[] = "    \n   2147483649";

	printf("Minha: %d\n", ft_atoi(str));
	printf("Ori: %d\n", atoi(str));
}*/
