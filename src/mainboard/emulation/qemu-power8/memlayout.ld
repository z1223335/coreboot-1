/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <memlayout.h>

#include <arch/header.ld>

// TODO: fill in these blanks for Power8.
SECTIONS
{
	DRAM_START(0x0)
	BOOTBLOCK(0x100, 64K)
	ROMSTAGE(0x20000, 128K)
	STACK(0x40000, 0x3ff00)
	PRERAM_CBMEM_CONSOLE(0x80000, 8K)
	FMAP_CACHE(0x82000, 2K)
	RAMSTAGE(0x100000, 16M)
}
