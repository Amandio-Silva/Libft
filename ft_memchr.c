/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:05:06 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/31 13:36:12 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s == chr)
			return (s);
		s++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "o jardim  e muito lindo";
// 	int	c = 'o';
// 	size_t n = 12;
// 	unsigned char	*test;

// 	test = ft_memchr(str, c, n);
// 	printf("%s\n", test);
// }
