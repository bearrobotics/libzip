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
    env = {
        "CMAKE_BUILD_TYPE": "Release",
        "CMAKE_BUILD_PARALLEL_LEVEL": "16",
    },
    lib_source = ":all",
    out_shared_libs = [
        "libzip.so.5",
    ],
    visibility = ["//visibility:public"],
)
