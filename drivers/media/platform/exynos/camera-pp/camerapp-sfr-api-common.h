/*
 * Samsung EXYNOS Camera PostProcessing driver
 *
 * Copyright (C) 2014 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef CAMERAPP_SFR_API_COMMON_H
#define CAMERAPP_SFR_API_COMMON_H

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/slab.h>

#define camerapp_dbg(fmt, args...)						\
	do {								\
		if (get_camerapp_log_level())				\
			pr_info("[%s:%d] "				\
			fmt, __func__, __LINE__, ##args);		\
	} while (0)

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

enum  regdata_type {
	/* read write */
	RW			= 0,
	/* read only */
	RO			= 1,
	/* write only */
	WO			= 2,
	/* write input */
	WI			= 2,
	/* clear after read */
	RAC			= 3,
	/* write 1 -> clear */
	W1C			= 4,
	/* write read input */
	WRI			= 5,
	/* write input */
	RWI			= 5,
	/* only scaler */
	R_W			= 6,
	/* Read/Write Corex(SRAM) buffered register */
	RWC			= 7,
	/* Read/Write shadowed/double buffered register */
	RWS			= 8,
	/* write only*/
	RIW			= 9,
	/* read only latched implementation register */
	ROL			= 10,
	/* Write-to-Clear - pulse generation on Write */
	WTC			= 11,
	/* Data Write-to-Clear - pulse generation on Write only if the Write data equals the default SFR value */
	XWTC			= 12,
};

struct camerapp_sfr_reg {
	unsigned int	 sfr_offset;
	char		 *reg_name;
};

struct camerapp_sfr_field {
	char			*field_name;
	unsigned int		bit_start;
	unsigned int		bit_width;
	enum regdata_type	type;
	int			reset;
};

int camerapp_sfr_get_log_level(void);
u32 camerapp_sfr_get_reg(void __iomem *base_addr, const struct camerapp_sfr_reg *reg);
void camerapp_sfr_set_reg(void __iomem *base_addr, const struct camerapp_sfr_reg *reg, u32 val);
u32 camerapp_sfr_get_field(void __iomem *base_addr, const struct camerapp_sfr_reg *reg, const struct camerapp_sfr_field *field);
void camerapp_sfr_set_field(void __iomem *base_addr, const struct camerapp_sfr_reg *reg, const struct camerapp_sfr_field *field, u32 val);
u32 camerapp_sfr_get_field_value(u32 reg_value, const struct camerapp_sfr_field *field);
u32 camerapp_sfr_set_field_value(u32 reg_value, const struct camerapp_sfr_field *field, u32 val);
void camerapp_sfr_dump_regs(void __iomem *base_addr, const struct camerapp_sfr_reg *regs, u32 total_cnt);
#endif
