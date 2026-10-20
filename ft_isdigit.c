/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:37:13 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/20 16:04:24 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (48 <= a && a <= 57)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("result: %d\n", ft_isdigit((int)'0'));
}*/