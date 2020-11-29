/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_debug_info.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnakai <rnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:26:13 by rnakai            #+#    #+#             */
/*   Updated: 2020/11/29 11:04:19 by rnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "debug_game.h"

//should remove below after completing this project
#include <stdio.h>
#include "mlx.h"
#include <math.h>
#define SKY_BLUE 0x8888ee
#define BROWN 0x442222
//

void		print_debug_info_in_game(t_game *game)
{
	draw_player_rect(game,
		init_rect_info(g_debug.left_edge_px, g_info.height / 2, 30, 30),
		SKY_BLUE);
	draw_player_rect(game,
		init_rect_info(g_debug.right_edge_px, g_info.height / 2, 30, 30),
		BROWN);
	mlx_put_image_to_window(game->mlx, game->win, game->image.img, 0, 0);

	printf("left_pos:%f\n", g_debug.left_pos - TILE_SIZE / 2);
	printf("left_edge_px:%d\n", g_debug.left_edge_px);
	printf("\n");
	printf("right_pos:%f\n", g_debug.right_pos + TILE_SIZE / 2);
	printf("right_edge_px:%d\n", g_debug.right_edge_px);
	printf("----------------------\n");
}
