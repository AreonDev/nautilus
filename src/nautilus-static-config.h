/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*-

   nautilus-static-config.h: This file holds static configuration macros which
                             are not directly accessable via the build
                             environment.

   Copyright (C) 2015 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this program; if not, see <http://www.gnu.org/licenses/>.

   Author: Fin Christensen <christensen.fin@gmail.com>
*/

#ifndef NAUTILUS_STATIC_CONFIG_H
#define NAUTILUS_STATIC_CONFIG_H

/* This flag controls whether the "move folder up" button should be viewed in
 * the toolbar
 */
//#define NAUTILUS_SHOW_UP_BUTTON

/* This flag controls whether the "Delete Permanently" menu entry in an items
 * context menu should be viewed permanently
 */
//#define NAUTILUS_DELETE_PERMANENTLY_FLAG

/* This flag controls whether backup files should be viewed even if hidden files
 * are not visible.
 */
//#define NAUTILUS_ALWAYS_SHOW_BACKUP_FILES

/* This flag controls whether the file extension of a file should be visible */
//#define NAUTILUS_HIDE_FILE_EXTENSION

/* This flag controls whether keybindings should be configurable via the gnome
 * settings manager.
 */
//#define NAUTILUS_USE_KEYBINDING

// This flag controls whether "Open With Other Application" menu entry is hidden or not 
//#define NAUTILUS_DISABLE_OPEN_WITH_OTHER_APPLICATION

#endif /* NAUTILUS_STATIC_CONFIG_H */

