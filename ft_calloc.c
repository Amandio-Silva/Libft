/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsilva <amsilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:04:17 by amsilva           #+#    #+#             */
/*   Updated: 2024/10/29 15:47:25 by amsilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t c, size_t s)
{
	void	*p;

	p = malloc(c * s);
	if (!p)
		return (NULL);
	ft_bzero (p, c * s);
	return (p);
}
// int main(void)
// {
// 	int a = 5;

// 	int *arr_calloc = (int *)ft_calloc(a , sizeof(int));
// 	int i = 0;
// 	while(i < a)
// 	{
// 		printf("%d", arr_calloc[i]);
// 		i++;
// 	}
// 	free(arr_calloc);
// }