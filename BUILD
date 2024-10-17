load("@rules_foreign_cc//foreign_cc:defs.bzl", "cmake")

filegroup(
    name = "all",
    srcs = glob(["**"]),
    visibility = ["//visibility:public"],
)

cmake(
    name = "zip",
    build_args = [
        "-j16",
    ],
    cache_entries = {
        "CMAKE_DISABLE_FIND_PACKAGE_ZLIB_LIBRARY": "ON",
        "ZLIB_LIBRARY_FOUND": "ON",
        "ZLIB_LIBRARY_INCLUDE_DIRS": "$EXT_BUILD_DEPS/libzlib/include",
    },
    env = {
        "CMAKE_BUILD_PARALLEL_LEVEL": "16",
        "CMAKE_BUILD_TYPE": "Release",
    },
    lib_source = ":all",
    out_shared_libs = [
        "libzip.so.5",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@net_zlib_zlib//:zlib",
    ],
)
