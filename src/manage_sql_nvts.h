/* GVM
 * $Id$
 * Description: Manager Manage library: SQL backend headers.
 *
 * Authors:
 * Matthew Mundell <matthew.mundell@greenbone.net>
 * Timo Pollmeier <timo.pollmeier@greenbone.net>
 *
 * Copyright:
 * Copyright (C) 2010-2017 Greenbone Networks GmbH
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

#ifndef _GVMD_MANAGE_SQL_NVTS_H
#define _GVMD_MANAGE_SQL_NVTS_H

/**
 * @brief Filter columns for NVT info iterator.
 */
#define NVT_INFO_ITERATOR_FILTER_COLUMNS                                    \
 { GET_ITERATOR_FILTER_COLUMNS, "version", "cve", "bid", "xref",            \
   "family", "cvss_base", "severity", "cvss", "script_tags", "qod",         \
   "qod_type", "solution_type", NULL }

/**
 * @brief NVT iterator columns.
 */
#define NVT_ITERATOR_COLUMNS                                                \
 {                                                                          \
   GET_ITERATOR_COLUMNS_PREFIX (""),                                        \
   { "''", "_owner", KEYWORD_TYPE_STRING },                                 \
   { "0", NULL, KEYWORD_TYPE_INTEGER },                                     \
   { "oid", NULL, KEYWORD_TYPE_STRING },                                    \
   { "version", NULL, KEYWORD_TYPE_STRING },                                \
   { "name", NULL, KEYWORD_TYPE_STRING },                                   \
   { "copyright", NULL, KEYWORD_TYPE_STRING },                              \
   { "cve", NULL, KEYWORD_TYPE_STRING },                                    \
   { "bid", NULL, KEYWORD_TYPE_STRING },                                    \
   { "xref", NULL, KEYWORD_TYPE_STRING },                                   \
   { "tag", NULL, KEYWORD_TYPE_STRING },                                    \
   { "category", NULL, KEYWORD_TYPE_STRING },                               \
   { "family", NULL, KEYWORD_TYPE_STRING },                                 \
   { "cvss_base", NULL, KEYWORD_TYPE_DOUBLE },                              \
   { "cvss_base", "severity", KEYWORD_TYPE_DOUBLE },                        \
   { "cvss_base", "cvss", KEYWORD_TYPE_DOUBLE },                            \
   { "qod", NULL, KEYWORD_TYPE_INTEGER },                                   \
   { "qod_type", NULL, KEYWORD_TYPE_STRING },                               \
   { "solution_type", NULL, KEYWORD_TYPE_STRING },                          \
   { "tag", "script_tags", KEYWORD_TYPE_STRING},                            \
   { NULL, NULL, KEYWORD_TYPE_UNKNOWN }                                     \
 }

/**
 * @brief NVT iterator columns.
 */
#define NVT_ITERATOR_COLUMNS_NVTS                                           \
 {                                                                          \
   GET_ITERATOR_COLUMNS_PREFIX ("nvts."),                                   \
   { "''", "_owner", KEYWORD_TYPE_STRING },                                 \
   { "0", NULL, KEYWORD_TYPE_STRING },                                      \
   { "oid", NULL, KEYWORD_TYPE_STRING },                                    \
   { "version", NULL, KEYWORD_TYPE_STRING },                                \
   { "nvts.name", NULL, KEYWORD_TYPE_STRING },                              \
   { "copyright", NULL, KEYWORD_TYPE_STRING },                              \
   { "cve", NULL, KEYWORD_TYPE_STRING },                                    \
   { "bid", NULL, KEYWORD_TYPE_STRING },                                    \
   { "xref", NULL, KEYWORD_TYPE_STRING },                                   \
   { "tag", NULL, KEYWORD_TYPE_STRING },                                    \
   { "category", NULL, KEYWORD_TYPE_STRING },                               \
   { "nvts.family", NULL, KEYWORD_TYPE_STRING },                            \
   { "cvss_base", NULL, KEYWORD_TYPE_DOUBLE },                              \
   { "cvss_base", "severity", KEYWORD_TYPE_DOUBLE },                        \
   { "cvss_base", "cvss", KEYWORD_TYPE_DOUBLE },                            \
   { "qod", NULL, KEYWORD_TYPE_INTEGER },                                   \
   { "qod_type", NULL, KEYWORD_TYPE_STRING },                               \
   { "solution_type", NULL, KEYWORD_TYPE_STRING },                          \
   { "tag", "script_tags", KEYWORD_TYPE_STRING },                           \
   { NULL, NULL, KEYWORD_TYPE_UNKNOWN }                                     \
 }

void
check_db_nvts ();

gchar *
nvt_iterator_columns ();

gchar *
nvt_iterator_columns_nvts ();

int
check_config_families ();

#endif /* not _GVMD_MANAGE_SQL_NVTS_H */