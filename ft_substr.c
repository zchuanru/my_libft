/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:24:48 by czheng            #+#    #+#             */
/*   Updated: 2023/09/13 16:24:51 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		sub = malloc(1 * sizeof(char));
	else if (start + len <= s_len)
		sub = malloc((len + 1) * sizeof(char));
	else
		sub = malloc((s_len - start + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && (start + i) < s_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
