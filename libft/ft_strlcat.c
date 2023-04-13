/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerrakeb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:17:58 by nerrakeb          #+#    #+#             */
/*   Updated: 2022/10/17 15:42:27 by nerrakeb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	if (!dstsize)
		return (slen);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	while (src[i] != '\0' && i < dstsize - dlen - 1)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}
