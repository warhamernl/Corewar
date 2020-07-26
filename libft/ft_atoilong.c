/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoilong.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: igvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 17:43:55 by igvan-de      #+#    #+#                 */
/*   Updated: 2020/04/30 17:44:36 by igvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoilong(const char *str)
{
	long neg;
	long sum;
	long i;

	sum = 0;
	neg = 1;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\f')
	|| (str[i] == '\t' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] && str[i] >= '0' && str[i] <= '9' && i <= 9) ||
	(str[i] && str[i] >= '0' && str[i] <= '9' && neg == -1 && i <= 10))
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sum * neg);
}
