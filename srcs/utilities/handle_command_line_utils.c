/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_command_line_utils.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamashi <kkamashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:51:57 by kkamashi          #+#    #+#             */
/*   Updated: 2020/11/25 16:00:03 by kkamashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"
#include "struct_game.h"
#include "struct_error_msg.h"
#include "constants.h"
#include "cub3d.h"

int	is_cub_file_ext_valid(char *format)
{
	char	*last_dot_address;

	last_dot_address = ft_strrchr(format, '.');
	if (ft_strcmp(last_dot_address, ".cub"))
	{
		return (TRUE);
	}
	else
	{
		return (FALSE);
	}
}

int	should_write_bmp_image(char **argv)
{
	if (ft_strcmp(argv[2], "--save") == TRUE)
	{
		return (TRUE);
	}
	else
	{
		return (FALSE);
	}
}
