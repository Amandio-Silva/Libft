/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:46 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/25 15:55:55 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n[j] == '\0')
		return ((char *)h);
	while (h[i] != '\0' && n[j] != '\0' && i < l)
	{
		j = 0;
		if (h[i] == n[0])
		{
			while (h[i + j] == n[j] && (i + j) < l)
			{
				if (n[j + 1] == '\0')
					return ((char *)h + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *s1 = "amanha";
// 	char *s2 = "man";
// 	size_t n = 20;
// 	printf("%s\n", ft_strnstr(s1,s2,n));
// }