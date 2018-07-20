/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otimofie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:40:26 by otimofie          #+#    #+#             */
/*   Updated: 2017/11/08 18:40:28 by otimofie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int l;

	i = 0;
	l = ft_strlen(s1);
	while (s2[i] != '\0')
		s1[l++] = s2[i++];
	s1[l] = '\0';
	return (s1);
}
