/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconte <aleconte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:25:51 by aleconte          #+#    #+#             */
/*   Updated: 2020/11/17 15:29:40 by aleconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*size_str(long int nb, int *i)
{
	char	*str;

	while (nb / 10 > 0)
	{
		nb = nb / 10;
		*i = *i + 1;
	}
	str = malloc(sizeof(char) * (*i + 1));
	if (str == NULL)
		return (NULL);
	str[*i] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	char		*result;
	int			i;
	int			neg_sign;
	long int	nb;

	nb = (long int)n;
	neg_sign = 0;
	i = 1;
	if (n < 0)
	{
		nb = -nb;
		neg_sign = 1;
		i++;
	}
	result = size_str(nb, &i);
	if (result ==NULL)
        return(NULL);
    if (nb == 0)
		result[--i] = (nb % 10) + '0';
	while (nb != 0)
	{
		result[--i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (neg_sign)
		result[--i] = '-';
	return (result);
}
