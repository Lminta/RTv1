/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cl_krl_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 23:32:12 by olesgedz          #+#    #+#             */
/*   Updated: 2019/10/21 12:58:20 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"
#include "libcl.h"
#include "libft.h"

void
	cl_krl_init
	(t_cl_krl *krl
	, size_t nargs)
{
	if (!(krl->args = ft_memalloc(sizeof(*krl->args) * nargs)))
		exit(1);
	if (!(krl->sizes = ft_memalloc(sizeof(*krl->sizes) * nargs)))
		exit(1);
	krl->nargs = nargs;
}
