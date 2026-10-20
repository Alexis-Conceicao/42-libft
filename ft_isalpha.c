/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:42:52 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/20 16:50:04 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((65 <= a && a <= 90) || (97 <= a && a <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_isalpha((int)'a');
	printf("result: %d\n", i);
}

int	main(void)
{
	printf("result: %d\n", ft_isalpha((int)'a'));
}
*/