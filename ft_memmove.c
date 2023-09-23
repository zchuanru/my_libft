/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:37:05 by czheng            #+#    #+#             */
/*   Updated: 2023/09/06 19:54:21 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;

	if (!dest && !src)
	{
		return (NULL);
	}
	temp = dest;
	if (src < dest)
	{
		src += n;
		dest += n;
		while (n--)
		{
			*(char *)--dest = *(char *)--src;
		}
	}
	else
	{
		while (n--)
		{
			*(char *)dest++ = *(char *)src++;
		}
	}
	return (temp);
}
