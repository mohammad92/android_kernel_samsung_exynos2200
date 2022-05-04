/*******************************************************************************
* Copyright (c) 2021, STMicroelectronics - All Rights Reserved
*
* This file is part of VL53L5 Kernel Driver and is dual licensed,
* either 'STMicroelectronics Proprietary license'
* or 'BSD 3-clause "New" or "Revised" License' , at your option.
*
********************************************************************************
*
* 'STMicroelectronics Proprietary license'
*
********************************************************************************
*
* License terms: STMicroelectronics Proprietary in accordance with licensing
* terms at www.st.com/sla0081
*
* STMicroelectronics confidential
* Reproduction and Communication of this document is strictly prohibited unless
* specifically authorized in writing by STMicroelectronics.
*
*
********************************************************************************
*
* Alternatively, VL53L5 Kernel Driver may be distributed under the terms of
* 'BSD 3-clause "New" or "Revised" License', in which case the following
* provisions apply instead of the ones mentioned above :
*
********************************************************************************
*
* License terms: BSD 3-clause "New" or "Revised" License.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software
* without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*
*******************************************************************************/

#ifndef __DCI_PATCH_UNION_STRUCTS_H__
#define __DCI_PATCH_UNION_STRUCTS_H__

#include "dci_defs.h"
#include "dci_patch_defs.h"
#include "dci_patch_luts.h"
#include "vl53l5_types.h"

#ifdef __cplusplus
extern "C" {
#endif

union dci_union__depth16_value_u {
	uint16_t bytes;
	struct {

		uint16_t range_mm : 13;

		uint16_t confidence : 3;
	};
};

union dci_union__d16__buf__packet_header_u {
	uint32_t bytes;
	struct {

		uint32_t version : 4;

		uint32_t max_targets_per_zone : 2;

		uint32_t reserved_0 : 6;

		uint32_t array_width : 6;

		uint32_t array_height : 6;

		uint32_t last_packet : 1;

		uint32_t reserved_1 : 7;
	};
};

union dci_union__d16__buf__glass_detect_u {
	uint32_t bytes;
	struct {

		uint32_t reserved_0 : 3;

		uint32_t gd__mirror_detected : 1;

		uint32_t gd__tgt_behind_glass_detected : 1;

		uint32_t gd__glass_detected : 1;

		uint32_t gd__ratio_detected : 1;

		uint32_t gd__plane_detected : 1;

		uint32_t gd__confidence : 8;

		uint32_t gd__rate_ratio : 16;
	};
};

#ifdef __cplusplus
}
#endif

#endif
