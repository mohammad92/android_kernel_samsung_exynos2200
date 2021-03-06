#ifndef IS_VENDOR_CONFIG_MMV_V33X_H
#define IS_VENDOR_CONFIG_MMV_V33X_H

//#define USE_AP_PDAF						/* Support sensor PDAF SW Solution */

/***** HW DEFENDANT DEFINE *****/
#ifdef ENABLE_DVFS
#undef ENABLE_DVFS						/* Temp. for Full Remosaic */
#endif

#define CONFIG_LEDS_SM5714

#define VENDER_PATH

#define CONFIG_SEC_CAL_ENABLE
#define IS_REAR_MAX_CAL_SIZE (0x4970)
#define IS_FRONT_MAX_CAL_SIZE (0x1C86)
#define IS_REAR3_MAX_CAL_SIZE (0x1AE0)
#define IS_REAR4_MAX_CAL_SIZE (0x1A50)

#define CAMERA_REAR2
#define CAMERA_REAR3
#define CAMERA_REAR4

#define CAMERA_REAR_DUAL_CAL

#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR3_MODULEID
#define CAMERA_REAR4_MODULEID

#define CAMERA_STANDARD_CAL_ISP_VERSION 'E'
#endif /* IS_VENDOR_CONFIG_MMV_V33X_H */