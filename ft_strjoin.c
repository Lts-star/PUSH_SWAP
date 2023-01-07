/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:48:38 by sbadr             #+#    #+#             */
/*   Updated: 2023/01/07 18:14:06 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!dest)
		return (src);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	checkdb(int size, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
				break ;
			j++;
		}
		if (j == ft_strlen(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	error_print(void)
{
	write(2, "ERROR\n", 6);
	exit(1);
}

char	*join(char **strs, char *str, int size, char *sep)
{
	int	i;

	i = 1;
	str = ft_strdup(strs[0]);
	ft_strcat(str, sep);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		l;

	i = 0;
	l = 0;
	if (!checkdb(size, strs))
		error_print();
	while (i < size)
	{
		l += ft_strlen(strs[i]) + 1;
		i++;
	}
	str = malloc(sizeof(char) * l);
	if (!str)
		error_print();
	return (join(strs, str, size, sep));
}
