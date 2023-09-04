#
# Copyright 2023 ETH Zurich and University of Bologna.
#
# Authors:
#   Emanuele Parisi <emanuele.parisi@protonmail.com>
#

carray-platform_override_modules-$(CONFIG_PLATFORM_PULP_PLATFORM_CHESHIRE) += pulp_platform_cheshire
platform-objs-$(CONFIG_PLATFORM_PULP_PLATFORM_CHESHIRE) += pulp-platform/cheshire.o
