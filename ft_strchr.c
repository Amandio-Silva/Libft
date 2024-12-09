/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:05:57 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*i;
	int		a;

	i = (char *)s;
	a = 0;
	if (*i == (unsigned char)c)
		a = 1;
	else
	{
		while (*i != (unsigned char)c && *i != '\0')
		{
			i++;
			if (*i == (unsigned char)c)
				a = 1;
		}
	}
	if (a == 1)
		return (i);
	else
		return (0);
}

// int main(void)
// {
// 	char *str = "Ola Bom Dia";
// 	int c = 'l';
// 	printf("%s\n", ft_strchr(str, c));
// }
