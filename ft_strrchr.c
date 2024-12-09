/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:51 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int i)
{
	char	*p;
	char	*a;

	a = (char *)str;
	p = NULL;
	if ((unsigned char)i == 0)
		return (a + ft_strlen(a));
	while (*str)
	{
		if (*str == (unsigned char)i)
			p = (char *)str;
		str++;
	}
	if (i == 0)
		return ((char *)str);
	return (p);
}
// int main(void)
// {
// 	char *str = "Ola";
// 	int i = 'l';
// 	printf("%s\n", ft_strrchr(str,i));
// }