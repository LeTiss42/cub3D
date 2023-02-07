/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:13:21 by mravera           #+#    #+#             */
/*   Updated: 2023/02/07 15:59:27 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isprint(int c)
{
	return (c >= '\40' && c <= '\176');
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%i ==> %i\n", argv[1][0], ft_isprint(argv[1][0]));
	printf("%i ==> %i", argv[1][0], isprint(argv[1][0]));
	return (0);
}
*/
