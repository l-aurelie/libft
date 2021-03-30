/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconte <aleconte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:41:47 by aleconte          #+#    #+#             */
/*   Updated: 2020/11/17 14:41:54 by aleconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* La fonction atoi() convertit le début de la chaîne pointée par str en entier de type int */

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) //skip espaces
		i++;
	if (str[i] == '+' || str[i] == '-') //un seul signe
	{
		if (str[i] == '-')
			sign = -1; //result * -1 = negatif
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - 48); // *10 pour ajouter une place, + chiffre convertit (- 48)
		i++;
	}
	return (nb * sign);
}
