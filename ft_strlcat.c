/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:26 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && s1[i])
		i++;
	while ((i + j + 1) < size && s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	if (i != size)
		s1[i + j] = '\0';
	return (i + ft_strlen(s2));
}
// int main(void)
// {
// 	char str1 [] = "Ola";
// 	char str2 [] = "Bom Dia ";
// 	size_t n = 20;
// 	printf("%zu\n", ft_strlcat(str1,str2,n));
// }
