/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_loop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnakai <rnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:41:09 by rnakai            #+#    #+#             */
/*   Updated: 2020/11/27 15:25:41 by rnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		main_loop(t_game *game)
{
	if (g_info.key_flag == TRUE)
	{
		//	描画する
		update();
		render(game);
	}
	g_info.key_flag = FALSE;
	return (0);
}

void	update(void)
{
	move_player();
	cast_rays();
	//init_sprite_data();
}
