/*
  This file was generated automatically by CMake
  from zip.h and zipint.h; make changes there.
*/

#include "zipint.h"

const char * const _zip_err_str[] = {
    "No error",
    "Multi-disk zip archives not supported",
    "Renaming temporary file failed",
    "Closing zip archive failed",
    "Seek error",
    "Read error",
    "Write error",
    "CRC error",
    "Containing zip archive was closed",
    "No such file",
    "File already exists",
    "Can't open file",
    "Failure to create temporary file",
    "Zlib error",
    "Malloc failure",
    "Entry has been changed",
    "Compression method not supported",
    "Premature end of file",
    "Invalid argument",
    "Not a zip archive",
    "Internal error",
    "Zip archive inconsistent",
    "Can't remove file",
    "Entry has been deleted",
    "Encryption method not supported",
    "Read-only archive",
    "No password provided",
    "Wrong password provided",
    "Operation not supported",
    "Resource still in use",
    "Tell error",
    "Compressed data invalid",
    "Operation cancelled",
};

const int _zip_nerr_str = sizeof(_zip_err_str)/sizeof(_zip_err_str[0]);

#define L ZIP_ET_LIBZIP
#define N ZIP_ET_NONE
#define S ZIP_ET_SYS
#define Z ZIP_ET_ZLIB

#define E true
#define G false

const int _zip_err_type[] = {
    N,
    N,
    S,
    S,
    S,
    S,
    S,
    N,
    N,
    N,
    N,
    S,
    S,
    Z,
    N,
    N,
    N,
    N,
    N,
    N,
    N,
    L,
    S,
    N,
    N,
    N,
    N,
    N,
    N,
    N,
    S,
    N,
    N,
};

const struct _zip_err_detail _zip_err_details[] = {
    { G, "no detail" },
    { G, "central directory overlaps EOCD, or there is space between them" },
    { G, "archive comment length incorrect" },
    { G, "central directory length invalid" },
    { E, "central header invalid" },
    { G, "central directory count of entries is incorrect" },
    { E, "local and central headers do not match" },
    { G, "wrong EOCD length" },
    { G, "EOCD64 overlaps EOCD, or there is space between them" },
    { G, "EOCD64 magic incorrect" },
    { G, "EOCD64 and EOCD do not match" },
    { G, "invalid value in central directory" },
};

const int _zip_err_details_count = sizeof(_zip_err_details)/sizeof(_zip_err_details[0]);
