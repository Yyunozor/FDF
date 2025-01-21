/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpayot <anpayot@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 22:01:33 by anpayot           #+#    #+#             */
/*   Updated: 2025/01/20 23:57:37 by anpayot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_data 
{
	void	*img;
	char	*addr;
	int		bpp;
	int		lenline; // Added missing semicolon
	int		endian;
	void	*mlx;
	void	*win;
	
}	t_data;

int	print_key(int keycode, t_data *data)
{
	(void)data; // Suppress unused parameter warning
	char str[32];
	mlx_clear_window(data->mlx, data->win);
	sprintf(str, "Key pressed: %d", keycode); // need to be recode
	mlx_string_put(data->mlx, data->win, 10, 20, 0xFFFFFF, str);
	printf("Key pressed: %d\n", keycode);
	return (0);
}

int	print_mouse(int button, int x, int y, t_data *data)
{
	(void)data; // Suppress unused parameter warning
	char str[32];
	mlx_clear_window(data->mlx, data->win);
	sprintf(str, "Mouse button %d at (%d, %d)", button, x, y);
	mlx_string_put(data->mlx, data->win, 10, 40, 0xFFFFFF, str);
	printf("Mouse button %d pressed at (%d, %d)\n", button, x, y);
	return (0);
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "FDF et oui et oui");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.lenline, &img.endian);
	img.mlx = mlx;
	img.win = mlx_win;
	
	mlx_hook(mlx_win, 2, 1L<<0, print_key, &img);
	mlx_hook(mlx_win, 4, 1L<<2, print_mouse, &img);
	mlx_hook(mlx_win, 17, 0, mlx_destroy_window, &img);
	mlx_loop(mlx);
}
