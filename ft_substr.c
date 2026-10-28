/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 12:02:46 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/28 14:40:35 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	int		j;
	size_t	size;

	i = ft_strlen(s);
	if (start > i)
		return (NULL);
	if (start + len > i)
		size = i - (size_t)start;
	else
		(size = len);
	ptr = malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	j = 0;
	while (size)
	{
		ptr[j] = s[start];
		j++;
		start++;
		size--;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char *str;
	char *sub;

	str = "Teste, 42 testar";
	sub = ft_substr(str, 0, 9);
	printf("Teste 1: \'%s\'\n", sub);
	free(sub);
	sub = ft_substr(str, 20, 5);
	printf("Teste 2: \'%s\'\n", sub);
	free(sub);
	sub = ft_substr(str, 10, 100);
	printf("Teste 3: \'%s\'\n", sub);
	free(sub);
}*/