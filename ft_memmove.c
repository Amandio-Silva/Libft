/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:05:24 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 15:10:02 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = dest;
	b = (unsigned char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		while (n--)
			a[n] = b[n];
	}
	return (dest);
}
// int	main(void)
// {
// 	char	dest[] = "o jardim  e muito bonito";
// 	char	src[] = "o jardim  e muito lindo";
// 	size_t n = 30;

// 	ft_memmove(dest, src, n);
// 	puts(dest);
// }