
/* 
 * 2010 (C) Marcus Clyne 
 *
 * DO NOT EDIT THIS FILE MANUALLY
 * ------------------------------
 * This file has been generated automatically from scripts in the $base/auto dir and
 * data in the $base/auto/data dir. If you wish to edit the output of this file, then
 * you should edit these files instead.
 *
*/


// optional includes

#if (NDK_BUF)
#include  <ndk_buf.c>
#endif
#if (NDK_COMPLEX_PATH)
#include  <ndk_complex_path.c>
#endif
#if (NDK_COMPLEX_VALUE)
#include  <ndk_complex_value.c>
#endif
#if (NDK_CONF_FILE)
#include  <ndk_conf_file.c>
#endif
#if (NDK_ENCODING)
#include  <ndk_encoding.c>
#endif
#if (NDK_HASH)
#include  <ndk_hash.c>
#endif
#if (NDK_HTTP)
#include  <ndk_http.c>
#endif
#if (NDK_PATH)
#include  <ndk_path.c>
#endif
#if (NDK_REGEX)
#include  <ndk_regex.c>
#endif
#if (NDK_REWRITE)
#include  <ndk_rewrite.c>
#endif
#if (NDK_SET_VAR)
#include  <ndk_set_var.c>
#endif
#if (NDK_STRING)
#include  <ndk_string.c>
#endif
#if (NDK_UPSTREAM_LIST)
#include  <ndk_upstream_list.c>
#endif
#if (NDK_URI)
#include  <ndk_uri.c>
#endif


// module commands

static ngx_command_t  ngx_http_devel_kit_commands[] = {
#if (NDK_UPSTREAM_LIST)
#define NDK_UPSTREAM_LIST_CMDS 1
#include  <ndk_upstream_list.h>
#undef  NDK_UPSTREAM_LIST_CMDS
#endif
    ngx_null_command
};
