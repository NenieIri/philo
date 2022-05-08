/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 21:09:08 by vismaily          #+#    #+#             */
/*   Updated: 2022/05/08 15:57:46 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	struct s_state	state;

	if (init_args(argc, argv, &state) == 0)
	{
		if (init_philo(&state) == 1)
			return (0);
		threads(&state);
	}
	return (0);
}
