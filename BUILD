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
        "BUILD_SHARED_LIBS": "OFF",
        "CMAKE_DISABLE_FIND_PACKAGE_ZLIB": "ON",
        "ZLIB_INCLUDE_DIRS": "$EXT_BUILD_DEPS/include",
        "ZLIB_LIBRARIES": "libzlib_source.a",
    },
    lib_source = ":all",
    out_static_libs = [
        "libzip.a",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "@net_zlib_zlib//:zlib",
    ],
)
