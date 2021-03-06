/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */
#include <baseboard/variants.h>
#include <console/console.h>
#include <nhlt.h>
#include <soc/nhlt.h>

void variant_nhlt_oem_overrides(const char **oem_id,
					const char **oem_table_id,
					uint32_t *oem_revision)
{
	*oem_id = "GOOGLE";
	*oem_table_id = "ENDEAVOUR";
	*oem_revision = 0;
}
