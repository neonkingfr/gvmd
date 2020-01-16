/* Copyright (C) 2020 Greenbone Networks GmbH
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _GVMD_MANAGE_SQL_PORT_LISTS_H
#define _GVMD_MANAGE_SQL_PORT_LISTS_H

#include "manage.h"
#include "manage_sql.h"

column_t*
port_list_select_columns ();

const char**
port_list_filter_columns ();

int
create_port_list_unique (const char *, const char *, const char *,
                         port_list_t *);

int
port_list_is_predefined (port_list_t);

port_protocol_t
port_range_iterator_type_int (iterator_t *);

int
restore_port_list (const char *);

void
empty_trashcan_port_lists ();

void
inherit_port_lists (user_t, user_t);

void
check_db_port_lists ();

#endif /* not _GVMD_MANAGE_SQL_PORT_LISTS_H */
