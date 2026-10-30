/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alconcei <alconcei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:03:37 by alconcei          #+#    #+#             */
/*   Updated: 2026/10/29 12:38:24 by alconcei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	while (j > i && ft_isset(s1[j], set))
		j--;
	res = malloc(sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + i, j - i + 1);
	res[j + 1] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	const char *s1 = "!!!Ta correto!!!";
	const char *set = "!";
	char *trim;

	trim = ft_strtrim(s1, set);
	if (!trim)
		printf("Allocation failed.\n");
	else
	{
		printf("Original str: %s\n", s1);
		printf("Trimmed str: %s\n", trim);
		free(trim);
	}
	return (0);
}*/