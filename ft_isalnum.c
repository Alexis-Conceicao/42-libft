/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:46:01 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/20 16:50:17 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	//if ((65 <= a && a <= 90) || (97 <= a && a <= 122) || (48 <= a && a <= 57))
	if ((a >= 'a' && a <= 'z') ||(a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("result: %d\n", ft_isalnum((int)'0'));
}*/