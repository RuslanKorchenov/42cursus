/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnasium <mavrin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:59:56 by vnasium           #+#    #+#             */
/*   Updated: 2020/05/06 17:17:46 by vnasium          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	long long int	res;

	res = 0;
	negative = 1;
	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
	|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negative);
}
