/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:40:48 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/11/09 18:35:42 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i]
		&& (unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	a[20] = "a24def";
// 	char	b[20] = "a2CDEF";

// 	printf("%d | %d", ft_strncmp(a, b, 4), strncmp(a, b, 4));
// }