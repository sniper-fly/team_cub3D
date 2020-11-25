/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_cub_elems.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:16:16 by kkamashi          #+#    #+#             */
/*   Updated: 2020/11/25 17:59:30 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_game.h"
#include "libft.h"
#include "utilities.h"
#include "parsing.h"
#include "constants.h"

static int		is_len_of_line_correct(char **data, int valid_len)
{
	int		len;

	len = 0;
	while (data[len] != NULL)
	{
		len++;
	}
	if (len == valid_len)
	{
		return (TRUE);
	}
	else
	{
		return (FALSE);
	}
}

static int		is_target_tex(char *id)
{
	if (ft_strcmp(id, "NO") || ft_strcmp(id, "SO") || ft_strcmp(id, "WE") ||
		ft_strcmp(id, "EA") || ft_strcmp(id, "S"))
	{
		return (TRUE);
	}
	else
	{
		return (FALSE);
	}
}

static int		is_target_color(char *id)
{
	return (ft_strcmp(id, "F") || ft_strcmp(id, "C"));
}

static int		is_target_rez(char *id)
{
	return (ft_strcmp(id, "R"));
}

int				parse_cub_elems(char **data, t_game *game)
{
	int		is_data_valid;
	char	*id;

	id = data[0];
	if (id == NULL)
		return (TRUE);
	else if (is_target_rez(id) && is_len_of_line_correct(data, 3))
	{
		is_data_valid = parse_resolution_data(data, game);
	}
	else if (is_target_tex(id) && is_len_of_line_correct(data, 2))
	{
		is_data_valid = parse_texture_data(data, game);
	}
	else if (is_target_color(id) && is_len_of_line_correct(data, 2))
	{
		is_data_valid = parse_color_data(data, game);
	}
	else
	{
		game->err_msg.which_msg = ELEMS_ERROR;
		return (ERROR);
	}
	return (is_data_valid);
}
