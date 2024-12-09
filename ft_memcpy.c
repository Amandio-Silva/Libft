/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:05:18 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/25 13:15:30 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!d && !s)
		return (d);
	a = (unsigned char *)d;
	b = (unsigned char *)s;
	while (n > 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (d);
}
// int	main(void)
// {
// 	char	dest[] = "o jardim  e muito lindo";
// 	char	src[] = "o jardim  e muito bonito";
// 	size_t n = 30;

// 	ft_memcpy(dest, src, n);
// 	puts(dest);
// }