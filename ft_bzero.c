/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:04:08 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/29 15:46:06 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = s;
	i = 0;
	while (i++ < n)
		*d++ = 0;
}
// int main(void)
// {
// 	char str[] = "Ola Bom Dia";
// 	ft_bzero(str, 11);
// 	printf("%s\n", str);
// }