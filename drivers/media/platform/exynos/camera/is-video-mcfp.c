// SPDX-License-Identifier: GPL-2.0
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
#include <linux/delay.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/interrupt.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/slab.h>
#include <linux/firmware.h>
#include <linux/dma-mapping.h>
#include <linux/scatterlist.h>
#include <linux/videodev2.h>
#include <linux/videodev2_exynos_camera.h>
#include <linux/v4l2-mediabus.h>
#include <linux/bug.h>

#include "is-core.h"
#include "is-cmd.h"
#include "is-err.h"
#include "is-video.h"
#include "is-dvfs.h"

int is_mcfp_video_probe(void *data)
{
	struct is_core *core = (struct is_core *)data;
	struct is_video *video;
	int ret;

	video = &core->video_mcfp;
	video->resourcemgr = &core->resourcemgr;

	video->group_id = GROUP_ID_MCFP;
	video->group_ofs = offsetof(struct is_device_ischain, group_mcfp);
	video->subdev_id = ENTRY_MCFP;
	video->subdev_ofs = offsetof(struct is_group, leader);
	video->buf_rdycount = 0;

	ret = is_video_probe(video,
		IS_VIDEO_MCFP_NAME,
		IS_VIDEO_MCFP,
		VFL_DIR_M2M,
		&core->resourcemgr.mem,
		&core->v4l2_dev,
		NULL, NULL, NULL);
	if (ret)
		dev_err(&core->pdev->dev, "%s is fail(%d)\n", __func__, ret);

	return ret;
}
