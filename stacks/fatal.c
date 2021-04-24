/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlachheb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:38:52 by mlachheb          #+#    #+#             */
/*   Updated: 2021/04/24 14:52:47 by mlachheb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stacks.h"

void	fatal()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ok_ko(int retv)
{
	if (retv)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit(0);
}
