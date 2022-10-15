workspace(name = "random_failure")
 
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
 
git_repository(
    name = "com_google_absl",
    remote = "https://github.com/abseil/abseil-cpp.git",
    commit = "5fa65f28e46e86c44966a1ca8a727a329d9c1ff8",
    shallow_since = "1657140046 -0700",
)

http_archive(
    name = "rules_foreign_cc",
    # TODO: Get the latest sha256 value from a bazel debug message or the latest 
    #       release on the releases page: https://github.com/bazelbuild/rules_foreign_cc/releases
    #
    # sha256 = "...",
    strip_prefix = "rules_foreign_cc-e5c7d6df6132ed88bb3a67f05dad188f4754474c",
    url = "https://github.com/bazelbuild/rules_foreign_cc/archive/e5c7d6df6132ed88bb3a67f05dad188f4754474c.tar.gz",
)

load("@rules_foreign_cc//foreign_cc:repositories.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

