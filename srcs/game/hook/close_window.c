/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnakai <rnakai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:44:19 by rnakai            #+#    #+#             */
/*   Updated: 2020/11/23 11:34:25 by rnakai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_game.h"
#include "game.h"
#include <stdlib.h>
#include "mlx.h"

int		close_window(t_game *game)
{
	int i = 0;

	free(g_rays);
	mlx_destroy_image(game->mlx, game->image.img);
	while (i < TEXTURE_NUM)
	{
		mlx_destroy_image(game->mlx, g_textures[i].img_ptr);
		i++;
	}
	// mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	exit(0);
	return (0);
}
