/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:53:32 by czheng            #+#    #+#             */
/*   Updated: 2023/09/16 15:53:34 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nb;
	int		len;

	len = ft_numlen(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	nb = (long)n;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		ptr[len--] = '0';
	while (nb)
	{
		ptr[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		ptr[len] = '-';
	return (ptr);
}
