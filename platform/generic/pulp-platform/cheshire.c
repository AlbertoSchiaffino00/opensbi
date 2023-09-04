/*
 * Copyright 2023 ETH Zurich and University of Bologna.
 *
 * Authors:
 *   Emanuele Parisi <emanuele.parisi@protonmail.com>
 */

#include <sbi_utils/fdt/fdt_helper.h>
#include <platform_override.h>


static const struct fdt_match pulp_platform_cheshire_match[] = {
	{ .compatible = "eth,cheshire-dev" },
	{ },
};


const struct platform_override pulp_platform_cheshire = {
	.match_table = pulp_platform_cheshire_match
};
