/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrikuno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:25:22 by akrikuno          #+#    #+#             */
/*   Updated: 2022/06/26 14:16:16 by akrikuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/**
** w == 1 - start of the line 
** W == width - end of the line
** h == 1 - top of the column 
** h == height - bottom of the column
*/

void	rush(int width, int height)
{
	int	w;
	int	h;

	h = 0;
	if (width > 0 && height > 0)
	{
		while (h++ < height)
		{
			w = 0;
			while (w++ < width)
			{
				if (h == 1 && w == 1)
					ft_putchar('/');
				else if (h == height && w == width && height != 1 && width != 1)
					ft_putchar('/');
				else if ((h == height && w == 1) || (h == 1 && w == width))
					ft_putchar('\\');
				else if ((w == 1 || w == width) || (h == 1 || h == height))
					ft_putchar('*');
				else
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
}
