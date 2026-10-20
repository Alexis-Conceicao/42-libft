/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:56:20 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/20 16:53:03 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int a)
{
	if (0 <= a && a <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("result: %d\n", ft_isascii(128));
}*/