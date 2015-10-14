/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Copyright (C) 2005 Novell, Inc.
 *
 * Nautilus is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * Nautilus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; see the file COPYING.  If not,
 * see <http://www.gnu.org/licenses/>.
 *
 * Author: Anders Carlsson <andersca@imendio.com>
 *
 */

#ifndef NAUTILUS_QUERY_H
#define NAUTILUS_QUERY_H

#include <glib-object.h>

#define NAUTILUS_TYPE_QUERY		(nautilus_query_get_type ())

G_DECLARE_FINAL_TYPE (NautilusQuery, nautilus_query, NAUTILUS, QUERY, GObject)

NautilusQuery* nautilus_query_new      (void);

char *         nautilus_query_get_text           (NautilusQuery *query);
void           nautilus_query_set_text           (NautilusQuery *query, const char *text);

gboolean       nautilus_query_get_show_hidden_files (NautilusQuery *query);
void           nautilus_query_set_show_hidden_files (NautilusQuery *query, gboolean show_hidden);

char *         nautilus_query_get_location       (NautilusQuery *query);
void           nautilus_query_set_location       (NautilusQuery *query, const char *uri);

GList *        nautilus_query_get_mime_types     (NautilusQuery *query);
void           nautilus_query_set_mime_types     (NautilusQuery *query, GList *mime_types);
void           nautilus_query_add_mime_type      (NautilusQuery *query, const char *mime_type);

gdouble        nautilus_query_matches_string     (NautilusQuery *query, const gchar *string);

char *         nautilus_query_to_readable_string (NautilusQuery *query);

#endif /* NAUTILUS_QUERY_H */
