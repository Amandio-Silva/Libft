/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:07 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	l;

	l = ft_strlen(s) + 1;
	d = malloc(l);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, l);
	return (d);
}
// int main()
// {
// 	char *str = "Ola Bom Dia";
// 	printf("%s\n", ft_strdup(str));
// }