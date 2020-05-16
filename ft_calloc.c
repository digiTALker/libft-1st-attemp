/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmyrtle <cmyrtle@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 12:47:44 by cmyrtle           #+#    #+#             */
/*   Updated: 2020/05/14 12:52:18 by cmyrtle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;
	p = (unsigned char*)malloc(num * size);
	if (p == NULL)
		return (NULL);	
	ft_bzero((unsigned char*)p, num * size);
	return (p);
}
