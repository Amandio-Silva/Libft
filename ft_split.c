/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:05:53 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/26 16:42:11 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	a;

	if (!*s)
		return (0);
	a = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			a++;
		while (*s != c && *s)
			s++;
	}
	return (a);
}

static void	ft_free(char **tab)
{
	size_t	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
}

static int	ft_allocate(char **tab, char const *s, char sep)
{
	int			i;
	char const	*temp;

	i = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		temp = s;
		while (*temp && *temp != sep)
			temp++;
		if (temp > s)
		{
			tab[i++] = ft_substr(s, 0, temp - s);
			if (!tab[i - 1])
			{
				ft_free(tab);
				return (0);
			}
		}
		s = temp;
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	t;

	if (!s)
		return (NULL);
	t = countwords(s, c);
	new = (char **)malloc((t + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	if (!ft_allocate(new, s, c))
	{
		free(new);
		return (NULL);
	}
	return (new);
}
// int main(void)
// {
// 	char *str = "Ola Bom Dia";
// 	char sep = ' ';
// 	char **result = ft_split(str,sep);
// 	int i;

// 	i = 0;
// 	while(result[i])
// 	{
// 		puts(result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// }