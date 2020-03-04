/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrasooli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:56:11 by nrasooli          #+#    #+#             */
/*   Updated: 2019/07/11 17:01:42 by nrasooli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_Alowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != \'0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str [i] = str[i] + 32;
		i++;	
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int afg;

	i = 0;
	afg = 1;
	ft_Alowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (afg == 1)
				str[i] = str[i] - 32;
			afg = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			afg = 0;
		else
		afg = 1;
	i++;	
	}
	return (str);
}	
