/*
 * Samsung EXYNOS FIMC-IS (Imaging Subsystem) driver
 *
 * Copyright (C) 2014 Samsung Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_HW_VRA_H
#define IS_HW_VRA_H

#include "is-hw-api-vra.h"
#include "is-interface-vra.h"

#define VRA_SETFILE_VERSION	0x11030205

#define VRA_CH1_DETECT_MODE	0
#define VRA_CH1_IMAGE_MODE	1

struct is_hw_vra_setfile{
    u32 setfile_version;
    u32 tracking_mode;
    u32 enable_features;
    u32 init_frames_per_lock;
    u32 normal_frames_per_lock;
    u32 min_face_size;
    u32 max_face_count;
    u32 face_priority;
    u32 disable_profile_detection;
    u32 limit_rotation_angles;
    u32 boost_dr_vs_fpr;
    u32 tracking_smoothness;
    u32 lock_frame_number;
    u32 front_orientation;
    u32 use_sensor_orientation;    /* Not used */
};

struct is_hw_vra {
	struct is_lib_vra		lib_vra;
	struct is_hw_vra_setfile	setfile;
	u32				orientation;
	atomic_t			ch1_count;
};

#endif
