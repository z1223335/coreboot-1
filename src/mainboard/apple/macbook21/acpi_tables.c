/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <southbridge/intel/i82801gx/nvs.h>

void acpi_create_gnvs(global_nvs_t *gnvs)
{
	/* Enable both COM ports */
	gnvs->cmap = 0x01;
	gnvs->cmbp = 0x01;

}
