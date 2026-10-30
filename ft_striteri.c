/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:12:27 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/30 12:34:36 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

static void	ft_add_one(unsigned int i, char *c)
{
	(void)i;
	(*c)++;
}

int	main(void)
{
	char str[] = "abc";

	ft_striteri(str, &ft_add_one);
	printf("%s\n", str);
	return (0);
}*/