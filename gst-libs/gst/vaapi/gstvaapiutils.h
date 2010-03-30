/*
 *  gstvaapiutils.h - VA-API utilities
 *
 *  gstreamer-vaapi (C) 2010 Splitted-Desktop Systems
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef GST_VAAPI_UTILS_H
#define GST_VAAPI_UTILS_H

#include "config.h"
#include <glib/gtypes.h>

#ifdef GST_VAAPI_USE_OLD_VAAPI_0_29
# include <va.h>
#else
# include <va/va.h>
#endif

/** Debug output */
void vaapi_dprintf(const char *format, ...)
    attribute_hidden;

/** Check VA status for success or print out an error */
int vaapi_check_status(VAStatus status, const char *msg)
    attribute_hidden;

/** Return a string representation of a FOURCC */
const char *string_of_FOURCC(guint32 fourcc)
    attribute_hidden;

/** Return a string representation of a VAProfile */
const char *string_of_VAProfile(VAProfile profile)
    attribute_hidden;

/** Return a string representation of a VAEntrypoint */
const char *string_of_VAEntrypoint(VAEntrypoint entrypoint)
    attribute_hidden;

guint get_PutSurface_flags_from_GstVaapiSurfaceRenderFlags(guint flags)
    attribute_hidden;

guint to_GstVaapiSurfaceStatus(guint va_flags)
    attribute_hidden;

#endif /* GST_VAAPI_UTILS_H */
