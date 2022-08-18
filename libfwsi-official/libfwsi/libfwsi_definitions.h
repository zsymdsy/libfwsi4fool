/*
 * The internal definitions
 *
 * Copyright (C) 2010-2022, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( LIBFWSI_INTERNAL_DEFINITIONS_H )
#define LIBFWSI_INTERNAL_DEFINITIONS_H

#include <common.h>
#include <types.h>

/* Define HAVE_LOCAL_LIBFWSI for local use of libfwsi
 */
#if !defined( HAVE_LOCAL_LIBFWSI )
#include <libfwsi/definitions.h>

/* The definitions in <libfwsi/definitions.h> are copied here
 * for local use of libfwsi
 */
#else
#include <byte_stream.h>

#define LIBFWSI_VERSION					20220711

/* The version string
 */
#define LIBFWSI_VERSION_STRING				"20220711"

/* The byte order definitions
 */
#define LIBFWSI_ENDIAN_BIG				_BYTE_STREAM_ENDIAN_BIG
#define LIBFWSI_ENDIAN_LITTLE				_BYTE_STREAM_ENDIAN_LITTLE

/* The item type definitions
 */
enum LIBFWSI_ITEM_TYPES
{
	LIBFWSI_ITEM_TYPE_UNKNOWN,
	LIBFWSI_ITEM_TYPE_CDBURN,
	LIBFWSI_ITEM_TYPE_COMPRESSED_FOLDER,
	LIBFWSI_ITEM_TYPE_CONTROL_PANEL,
	LIBFWSI_ITEM_TYPE_CONTROL_PANEL_CATEGORY,
	LIBFWSI_ITEM_TYPE_CONTROL_PANEL_CPL_FILE,
	LIBFWSI_ITEM_TYPE_DELEGATE,
	LIBFWSI_ITEM_TYPE_FILE_ENTRY,
	LIBFWSI_ITEM_TYPE_GAME_FOLDER,
	LIBFWSI_ITEM_TYPE_MTP_FILE_ENTRY,
	LIBFWSI_ITEM_TYPE_MTP_VOLUME,
	LIBFWSI_ITEM_TYPE_NETWORK_LOCATION,
	LIBFWSI_ITEM_TYPE_ROOT_FOLDER,
	LIBFWSI_ITEM_TYPE_URI,
	LIBFWSI_ITEM_TYPE_URI_SUB_VALUES,
	LIBFWSI_ITEM_TYPE_USERS_PROPERTY_VIEW,
	LIBFWSI_ITEM_TYPE_VOLUME,

	LIBFWSI_ITEM_TYPE_UNKNOWN_0x74
};

/* The class type definitions
 */
enum LIBFWSI_CLASS_TYPES
{
	LIBFWSI_CLASS_TYPE_ROOT_FOLDER			= 0x1f,

	LIBFWSI_CLASS_TYPE_VOLUME			= 0x20,
	LIBFWSI_CLASS_TYPE_FILE_ENTRY			= 0x30,
	LIBFWSI_CLASS_TYPE_NETWORK_LOCATION		= 0x40,

	LIBFWSI_CLASS_TYPE_URI				= 0x61
};

/* The file attribute flags
 */
enum LIBFWSI_FILE_ATTRIBUTE_FLAGS
{
	LIBFWSI_FILE_ATTRIBUTE_FLAG_READ_ONLY		= 0x00000001UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_HIDDEN		= 0x00000002UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_SYSTEM		= 0x00000004UL,

	LIBFWSI_FILE_ATTRIBUTE_FLAG_DIRECTORY		= 0x00000010UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_ARCHIVE		= 0x00000020UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_DEVICE		= 0x00000040UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_NORMAL		= 0x00000080UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_TEMPORARY		= 0x00000100UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_SPARSE_FILE		= 0x00000200UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_REPARSE_POINT	= 0x00000400UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_COMPRESSED		= 0x00000800UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_OFFLINE		= 0x00001000UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_NOT_CONTENT_INDEXED	= 0x00002000UL,
	LIBFWSI_FILE_ATTRIBUTE_FLAG_ENCRYPTED		= 0x00004000UL,

	LIBFWSI_FILE_ATTRIBUTE_FLAG_VIRTUAL		= 0x00010000UL
};

#endif

/* The file entry (shell item) flags
 */
enum LIBFWSI_FILE_ENTRY_FLAGS
{
	LIBFWSI_FILE_ENTRY_FLAG_IS_UNICODE		= 0x04
};

#endif

