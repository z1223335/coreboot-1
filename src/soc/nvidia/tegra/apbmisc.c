/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <device/mmio.h>
#include <soc/addressmap.h>

#include "apbmisc.h"

static struct apbmisc *misc = (struct apbmisc *)TEGRA_APB_MISC_BASE;

void enable_jtag(void)
{
	write32(&misc->pp_config_ctl, PP_CONFIG_CTL_JTAG);
}

void clamp_tristate_inputs(void)
{
	write32(&misc->pp_pinmux_global, PP_PINMUX_CLAMP_INPUTS);
}

void tegra_revision_info(struct tegra_revision *id)
{
	uintptr_t gp_hidrev= (uintptr_t)TEGRA_APB_MISC_BASE + MISC_GP_HIDREV;
	uint32_t reg;

	reg = read32((void *)(gp_hidrev));

	id->hid_fam = (reg >> 0) & 0x0f;
	id->chip_id = (reg >> 8) & 0xff;
	id->major = (reg >> 4) & 0x0f;
	id->minor = (reg >> 16) & 0x07;
}
