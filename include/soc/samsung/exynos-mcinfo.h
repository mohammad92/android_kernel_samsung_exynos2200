/* linux/include/soc/samsung/exynos-mcinfo.h
 *
 * Copyright (C) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Header file for external APIs
 * To get information about exynos memory controller
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __EXYNOS_MCINFO_H
#define __EXYNOS_MCINFO_H

#if IS_ENABLED(CONFIG_EXYNOS_MCINFO)
unsigned int get_mcinfo_base_count(void);
void get_refresh_rate(unsigned int *result);
void update_ambient_status(unsigned int status);
void exynos_mcinfo_set_ambient_status(bool status);
#else
static inline
unsigned int get_mcinfo_base_count(void)
{
	return 0;
}
static inline
void get_refresh_rate(unsigned int *result)
{
	return;
}
static inline
void update_ambient_status(unsigned int status)
{
	return;
}
static inline void exynos_mcinfo_set_ambient_status(bool status)
{
	return;
}
#endif

#endif /* __EXYNOS_MCINFO_H */
