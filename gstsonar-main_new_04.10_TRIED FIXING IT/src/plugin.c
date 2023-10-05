// ***************************************************************************
// Part of Gstsonar - Gstreamer sonar processing plugins
//
// Copyright (c) 2023 Eelume AS <opensource@eelume.com>
// All rights reserved
//
// Licensed under the LGPL v2.1 License.
// See LICENSE file in the project root for full license information.
// ***************************************************************************
#include "eelnmeadec/eelnmeadec.h"
#include "nmeaparse/nmeaparse.h"
#include "sonarparse/sonarparse.h"
#include "sonarsink/sonarsink.h"
#include "sonarmux/sonarmux.h"
#include "sonarpublish/sonarpublish.h"

static gboolean plugin_init(GstPlugin* plugin)
{
    if (   !gst_element_register(plugin, "eelnmeadec", GST_RANK_NONE, gst_eelnmeadec_get_type()) 
        || !gst_element_register(plugin, "nmeaparse", GST_RANK_NONE, gst_nmeaparse_get_type()) 
        || !gst_element_register(plugin, "sonarparse", GST_RANK_NONE, gst_sonarparse_get_type()) 
        || !gst_element_register(plugin, "sonarsink", GST_RANK_NONE, gst_sonarsink_get_type())
        || !gst_element_register(plugin, "sonarmux", GST_RANK_NONE, gst_sonarmux_get_type())
        || !gst_element_register(plugin, "sonarpublish", GST_RANK_NONE, gst_sonarpublish_get_type()))
    {
        return FALSE;
    }
    return TRUE;
}

#define VERSION             "1.0"
#define PACKAGE             "gstsonar"
#define GST_PACKAGE_NAME    PACKAGE
#define GST_PACKAGE_VERSION VERSION
#define GST_PACKAGE_ORIGIN  "https://eelume.com"


GST_PLUGIN_DEFINE(GST_VERSION_MAJOR, GST_VERSION_MINOR, sonar, "Sonar processing plugins", plugin_init, GST_PACKAGE_VERSION, "LGPL", GST_PACKAGE_NAME, GST_PACKAGE_ORIGIN);
