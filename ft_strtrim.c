/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:06:54 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/23 14:07:53 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	size_t	s;
	size_t	e;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	e = ft_strlen(s1) - 1;
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		++s;
	while (s1[e] && ft_strchr(set, s1[e]))
		--e;
	t = ft_substr(s1, s, e - s + 1);
	return (t);
}

// int main(void)
// {
// 	char *str1 = "Oli";
// 	char *set = "Ola";
// 	printf("%s\n",ft_strtrim(str1, set));
// }