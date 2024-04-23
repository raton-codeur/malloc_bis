/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhauuy <qhauuy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:17:06 by qhauuy            #+#    #+#             */
/*   Updated: 2024/04/23 14:20:22 by qhauuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef N
# define N 1000
#endif

void	*malloc_bis(size_t n)
{
	static int	count = -1;

	count++;
	if (count == N)
		return (NULL);
	else
		return (malloc(n));
}
