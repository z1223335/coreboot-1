/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#ifndef KTQM77_THERMAL_H
#define KTQM77_THERMAL_H

/* Active Thermal and fans are controlled by the EC. */

	/* Temperature which OS will shutdown at */
	#define CRITICAL_TEMPERATURE	100

	/* Temperature which OS will throttle CPU */
	#define PASSIVE_TEMPERATURE	90

#endif
