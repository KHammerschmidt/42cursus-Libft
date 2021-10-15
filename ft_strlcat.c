/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katharinahammerschmidt <katharinahammer    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 08:53:35 by khammers          #+#    #+#             */
/*   Updated: 2021/10/15 14:32:12 by katharinaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_strlcat() appends string src to the end of dst. It will
** append at most (dstsize - ft_strlen(dst) - 1) characters. It will
** NUL-terminate, unless dstsize is 0 or the original dst string was longer
** than dstsize (in practice this should not happen). Room for the null
** termination should be included in dstsize. The function returns the total
** length of the string it tried to create. This means the initial length of
** dst plus the length of src. If the return value is >=dstsize, the output
** string has been truncated.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0 || (dst_len >= dstsize))
		return (dstsize + src_len);
	while (src[i] != '\0' && (i < (dstsize - dst_len - 1)))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
