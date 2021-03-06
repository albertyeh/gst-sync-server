/*
 * Copyright (C) 2016 Samsung Electronics
 *   Author: Arun Raghavan <arun@osg.samsung.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_SYNC_CONTROL_SERVER_H
#define __GST_SYNC_CONTROL_SERVER_H

#include <glib-object.h>

#include "sync-server.h"
#include "sync-server-info.h"

G_BEGIN_DECLS

#define GST_TYPE_SYNC_CONTROL_SERVER (gst_sync_control_server_get_type ())
G_DECLARE_INTERFACE (GstSyncControlServer, gst_sync_control_server, GST,
    SYNC_CONTROL_SERVER, GObject);

gchar * gst_sync_control_server_get_address (GstSyncControlServer * server);
void gst_sync_control_server_set_address (GstSyncControlServer * server,
    const gchar * address);

guint gst_sync_control_server_get_port (GstSyncControlServer * server);
void gst_sync_control_server_set_port (GstSyncControlServer * server,
    guint port);

void gst_sync_control_server_set_sync_info (GstSyncControlServer * server,
    const GstSyncServerInfo * info);

gboolean gst_sync_control_server_start (GstSyncControlServer * server,
    GError ** error);
void gst_sync_control_server_stop (GstSyncControlServer * server);

G_END_DECLS

#endif /* __GST_SYNC_CONTROL_SERVER_H */
