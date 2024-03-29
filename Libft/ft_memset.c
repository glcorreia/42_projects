/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuno-pa <gnuno-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:50:50 by gnuno-pa          #+#    #+#             */
/*   Updated: 2021/10/21 17:57:02 by gnuno-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_str;

	new_str = (unsigned char *)b;
	while (len--)
		*new_str++ = c;
	return (b);
}

// int	main(void)
// {
// 	char	str[50] = "Quinta feira, 21 Outubro 2021";

// 	printf("%s", ft_memset(str, '+', 6));
// }