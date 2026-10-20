/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:54:51 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/20 16:55:35 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int a)
{
	if (32 <= a && a <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("result: %d\n", ft_isascii(128));
}*/