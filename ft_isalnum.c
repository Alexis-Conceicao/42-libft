/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:46:01 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/22 16:18:45 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0'
			&& a <= '9'))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include "ctype.h"

int	main(void)
{
	printf("result: %d\n", ft_isalnum('a'));
	printf("result: %d\n", isalnum('a'));
}*/