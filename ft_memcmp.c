/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:04:10 by czheng            #+#    #+#             */
/*   Updated: 2023/09/11 10:04:15 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (((unsigned char *)s1)[a] != ((unsigned char *)s2)[a])
			return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
		a++;
	}
	return (0);
}
