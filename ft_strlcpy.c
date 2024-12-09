/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:31 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;

	if (n == '\0')
		return (ft_strlen(s));
	i = 0;
	while (s[i] && (i < n - 1))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (ft_strlen(s));
}

// int main(void)
// {
// 	char dest[] = "Bom dia";
// 	char src [] = "ola";
// 	size_t n = 20;
// 	printf("%zu\n", ft_strlcpy(dest,src,n));
// }