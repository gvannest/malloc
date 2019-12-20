/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 17:15:20 by gvannest          #+#    #+#             */
/*   Updated: 2019/12/20 18:20:37 by gvannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <sys/mman.h>
# include <stdlib.h>

# define TINY_MAX_SIZE		1024
# define SMALL_MAX_SIZE		8192
# define TINY_PAGES			32
# define SMALL_PAGES		244

typedef struct		s_mallocptr
{
	void	*tinychk;
	void	*smallchk;
}					t_mallocptr;

extern t_mallocptr	g_mallocptr;

#endif
