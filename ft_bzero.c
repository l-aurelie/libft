/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconte <aleconte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:45:56 by aleconte          #+#    #+#             */
/*   Updated: 2020/11/17 15:11:22 by aleconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s; //pas possible d'avancer index sur un void
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
