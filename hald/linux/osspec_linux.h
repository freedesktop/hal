/***************************************************************************
 * CVSID: $Id$
 *
 * osspec_linux.h : OS Specific interface
 *
 * Copyright (C) 2003 David Zeuthen, <david@fubar.dk>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 **************************************************************************/

#ifndef OSSPEC_LINUX_H
#define OSSPEC_LINUX_H

#include <glib.h>
#include "../device.h"

const gchar *get_hal_sysfs_path (void);

const gchar *get_hal_proc_path (void);

gboolean hal_util_get_driver_name (const char *sysfs_path, gchar *driver_name);

gboolean hal_util_set_driver (HalDevice *d, const char *property_name, const char *sysfs_path);

HalDevice *hal_util_find_closest_ancestor (const gchar *sysfs_path);


#endif /* OSSPEC_LINUX_H */