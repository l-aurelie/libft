/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconte <aleconte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:14:50 by aleconte          #+#    #+#             */
/*   Updated: 2020/11/17 16:16:27 by aleconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = malloc(sizeof(char) * size);
	if (joined == NULL)
		return (NULL);
	ft_strlcpy(joined, s1, size);
	ft_strlcat(joined, s2, size);
	return (joined);
}
