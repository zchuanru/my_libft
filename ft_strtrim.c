/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:34:58 by czheng            #+#    #+#             */
/*   Updated: 2023/09/13 16:35:01 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return ((char *)s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	dest = ft_substr(s1, start, end - start);
	return (dest);
}
