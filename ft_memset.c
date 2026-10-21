/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:44:04 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/21 15:26:59 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t n)
{
	unsigned char	*i;

	i = a;
	while (n > 0)
	{
		*i = (unsigned char)c;
		i++;
		n--;
	}
	return (a);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "teste";

	// test
	printf("sent:%s\n", a);
	ft_memset(a, '#', 5);
	printf("got:%s\n", a);
	return (0);
}*/