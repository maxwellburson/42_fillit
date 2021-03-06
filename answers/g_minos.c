/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:06:37 by mgould            #+#    #+#             */
/*   Updated: 2016/12/15 16:44:58 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

const char		*g_minos[] = {
	"###.\n..#.\n....\n....\n\n",
	"....\n###.\n..#.\n....\n\n",
	"....\n....\n###.\n..#.\n\n",

	".###\n...#\n....\n....\n\n",
	"....\n.###\n...#\n....\n\n",
	"....\n....\n.###\n...#\n\n",

	".#..\n.#..\n##..\n....\n\n",
	"....\n.#..\n.#..\n##..\n\n",

	"..#.\n..#.\n.##.\n....\n\n",
	"....\n..#.\n..#.\n.##.\n\n",

	"...#\n...#\n..##\n....\n\n",
	"....\n...#\n...#\n..##\n\n",

	"#...\n###.\n....\n....\n\n",
	"....\n#...\n###.\n....\n\n",
	"....\n....\n#...\n###.\n\n",

	".#..\n.###\n....\n....\n\n",
	"....\n.#..\n.###\n....\n\n",
	"....\n....\n.#..\n.###\n\n",

	"##..\n#...\n#...\n....\n\n",
	"....\n##..\n#...\n#...\n\n",

	".##.\n.#..\n.#..\n....\n\n",
	"....\n.##.\n.#..\n.#..\n\n",

	"..##\n..#.\n..#.\n....\n\n",
	"....\n..##\n..#.\n..#.\n\n",

	"###.\n.#..\n....\n....\n\n",
	"....\n###.\n.#..\n....\n\n",
	"....\n....\n###.\n.#..\n\n",

	".###\n..#.\n....\n....\n\n",
	"....\n.###\n..#.\n....\n\n",
	"....\n....\n.###\n..#.\n\n",

	".#..\n##..\n.#..\n....\n\n",
	"..#.\n.##.\n..#.\n....\n\n",
	"...#\n..##\n...#\n....\n\n",

	"....\n.#..\n##..\n.#..\n\n",
	"....\n..#.\n.##.\n..#.\n\n",
	"....\n...#\n..##\n...#\n\n",

	".#..\n###.\n....\n....\n\n",
	"....\n.#..\n###.\n....\n\n",
	"....\n....\n.#..\n###.\n\n",

	"..#.\n.###\n....\n....\n\n",
	"....\n..#.\n.###\n....\n\n",
	"....\n....\n..#.\n.###\n\n",

	"#...\n##..\n#...\n....\n\n",
	".#..\n.##.\n.#..\n....\n\n",
	"..#.\n..##\n..#.\n....\n\n",

	"....\n#...\n##..\n#...\n\n",
	"....\n.#..\n.##.\n.#..\n\n",
	"....\n..#.\n..##\n..#.\n\n",

	"###.\n#...\n....\n....\n\n",
	"....\n###.\n#...\n....\n\n",
	"....\n....\n###.\n#...\n\n",

	".###\n.#..\n....\n....\n\n",
	"....\n.###\n.#..\n....\n\n",
	"....\n....\n.###\n.#..\n\n",

	"##..\n.#..\n.#..\n....\n\n",
	"....\n##..\n.#..\n.#..\n\n",

	".##.\n..#.\n..#.\n....\n\n",
	"....\n.##.\n..#.\n..#.\n\n",

	"..##\n...#\n...#\n....\n\n",
	"....\n..##\n...#\n...#\n\n",

	"..#.\n###.\n....\n....\n\n",
	"....\n..#.\n###.\n....\n\n",
	"....\n....\n..#.\n###.\n\n",

	"...#\n.###\n....\n....\n\n",
	"....\n...#\n.###\n....\n\n",
	"....\n....\n...#\n.###\n\n",

	"#...\n#...\n##..\n....\n\n",
	"....\n#...\n#...\n##..\n\n",

	".#..\n.#..\n.##.\n....\n\n",
	"....\n.#..\n.#..\n.##.\n\n",

	"..#.\n..#.\n..##\n....\n\n",
	"....\n..#.\n..#.\n..##\n\n",

	".##.\n##..\n....\n....\n\n",
	"....\n.##.\n##..\n....\n\n",
	"....\n....\n.##.\n##..\n\n",

	"..##\n.##.\n....\n....\n\n",
	"....\n..##\n.##.\n....\n\n",
	"....\n....\n..##\n.##.\n\n",

	"#...\n##..\n.#..\n....\n\n",
	"....\n#...\n##..\n.#..\n\n",

	".#..\n.##.\n..#.\n....\n\n",
	"....\n.#..\n.##.\n..#.\n\n",

	"..#.\n..##\n...#\n....\n\n",
	"....\n..#.\n..##\n...#\n\n",

	"####\n....\n....\n....\n\n",
	"....\n####\n....\n....\n\n",
	"....\n....\n####\n....\n\n",
	"....\n....\n....\n####\n\n",

	"#...\n#...\n#...\n#...\n\n",
	".#..\n.#..\n.#..\n.#..\n\n",
	"..#.\n..#.\n..#.\n..#.\n\n",
	"...#\n...#\n...#\n...#\n\n",

	"##..\n##..\n....\n....\n\n",
	"....\n##..\n##..\n....\n\n",
	"....\n....\n##..\n##..\n\n",

	".##.\n.##.\n....\n....\n\n",
	"....\n.##.\n.##.\n....\n\n",
	"....\n....\n.##.\n.##.\n\n",

	"..##\n..##\n....\n....\n\n",
	"....\n..##\n..##\n....\n\n",
	"....\n....\n..##\n..##\n\n",

	"##..\n.##.\n....\n....\n\n",
	"....\n##..\n.##.\n....\n\n",
	"....\n....\n##..\n.##.\n\n",

	".##.\n..##\n....\n....\n\n",
	"....\n.##.\n..##\n....\n\n",
	"....\n....\n.##.\n..##\n\n",

	".#..\n##..\n#...\n....\n\n",
	"....\n.#..\n##..\n#...\n\n",

	"..#.\n.##.\n.#..\n....\n\n",
	"....\n..#.\n.##.\n.#..\n\n",

	"...#\n..##\n..#.\n....\n\n",
	"....\n...#\n..##\n..#.\n\n"
};
