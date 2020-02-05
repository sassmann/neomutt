/**
 * @file
 * Convenience wrapper for the debug headers
 *
 * @authors
 * Copyright (C) 2019 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MUTT_DEBUG_LIB_H
#define MUTT_DEBUG_LIB_H

#include "config.h"
#include "mutt/mutt.h"
#include "core/lib.h"

// Graphviz
#ifdef USE_DEVEL_GRAPHVIZ
void dump_graphviz(const char *title);
#endif

// Parse Set
void test_parse_set(void);

#endif /* MUTT_DEBUG_LIB_H */
