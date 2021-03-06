/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2021 Samsung Electronics.
 *
 */

#ifndef __DIT_2_2_0_H__
#define __DIT_2_2_0_H__

#define DIT_REG_CLK_GT_OFF			0x0100 /* 20 bit */
#define DIT_REG_DMA_INIT_DATA			0x0104 /* 28 bit */

/* 0:16beat, 1:8beat, 2:4beat, 3:2beat, 4:1beat */
#define DIT_REG_TX_DESC_CTRL_SRC		0x0108 /* 3 bit */
#define DIT_REG_TX_DESC_CTRL_DST		0x010C /* 3 bit */
#define DIT_REG_TX_HEAD_CTRL			0x0110 /* 3 bit */
#define DIT_REG_TX_MOD_HD_CTRL			0x0114 /* 3 bit */
#define DIT_REG_TX_PKT_CTRL			0x0118 /* 3 bit */
#define DIT_REG_TX_CHKSUM_CTRL			0x011C /* 3 bit */

#define DIT_REG_RX_DESC_CTRL_SRC		0x0120 /* 3 bit */
#define DIT_REG_RX_DESC_CTRL_DST		0x0124 /* 3 bit */
#define DIT_REG_RX_HEAD_CTRL			0x0128 /* 3 bit */
#define DIT_REG_RX_MOD_HD_CTRL			0x012C /* 3 bit */
#define DIT_REG_RX_PKT_CTRL			0x0130 /* 3 bit */
#define DIT_REG_RX_CHKSUM_CTRL			0x0134 /* 3 bit */

#define DIT_REG_DMA_CHKSUM_OFF			0x0138 /* 2 bit */
#define DIT_REG_INT_ENABLE			0x0140
#define DIT_REG_INT_MASK			0x0144
#define DIT_REG_INT_PENDING			0x0148
#define DIT_REG_STATUS				0x014C

/* start address for Tx desc */
#define DIT_REG_TX_RING_START_ADDR_0_SRC_A	0x0200
#define DIT_REG_TX_RING_START_ADDR_1_SRC_A	0x0204
#define DIT_REG_TX_RING_START_ADDR_0_SRC	DIT_REG_TX_RING_START_ADDR_0_SRC_A
#define DIT_REG_TX_RING_START_ADDR_1_SRC	DIT_REG_TX_RING_START_ADDR_1_SRC_A
#define DIT_REG_TX_RING_START_ADDR_0_DST00	0x0218
#define DIT_REG_TX_RING_START_ADDR_1_DST00	0x021C
#define DIT_REG_TX_RING_START_ADDR_0_DST0	DIT_REG_TX_RING_START_ADDR_0_DST00
#define DIT_REG_TX_RING_START_ADDR_1_DST0	DIT_REG_TX_RING_START_ADDR_1_DST00
#define DIT_REG_TX_RING_START_ADDR_0_DST1	0x0220
#define DIT_REG_TX_RING_START_ADDR_1_DST1	0x0224
#define DIT_REG_TX_RING_START_ADDR_0_DST2	0x0228
#define DIT_REG_TX_RING_START_ADDR_1_DST2	0x022C
#define DIT_REG_TX_RING_START_ADDR_0_DST01	0x0230
#define DIT_REG_TX_RING_START_ADDR_1_DST01	0x0234
#define DIT_REG_TX_RING_START_ADDR_0_DST02	0x0238
#define DIT_REG_TX_RING_START_ADDR_1_DST02	0x023C
#define DIT_REG_TX_RING_START_ADDR_0_DST03	0x0240
#define DIT_REG_TX_RING_START_ADDR_1_DST03	0x0244

/* start address for Rx desc */
#define DIT_REG_RX_RING_START_ADDR_0_SRC_A	0x0248
#define DIT_REG_RX_RING_START_ADDR_1_SRC_A	0x024C
#define DIT_REG_RX_RING_START_ADDR_0_SRC	DIT_REG_RX_RING_START_ADDR_0_SRC_A
#define DIT_REG_RX_RING_START_ADDR_1_SRC	DIT_REG_RX_RING_START_ADDR_1_SRC_A
#define DIT_REG_RX_RING_START_ADDR_0_DST00	0x0260
#define DIT_REG_RX_RING_START_ADDR_1_DST00	0x0264
#define DIT_REG_RX_RING_START_ADDR_0_DST0	DIT_REG_RX_RING_START_ADDR_0_DST00
#define DIT_REG_RX_RING_START_ADDR_1_DST0	DIT_REG_RX_RING_START_ADDR_1_DST00
#define DIT_REG_RX_RING_START_ADDR_0_DST1	0x0268
#define DIT_REG_RX_RING_START_ADDR_1_DST1	0x026C
#define DIT_REG_RX_RING_START_ADDR_0_DST2	0x0270
#define DIT_REG_RX_RING_START_ADDR_1_DST2	0x0274
#define DIT_REG_RX_RING_START_ADDR_0_DST01	0x0278
#define DIT_REG_RX_RING_START_ADDR_1_DST01	0x027C
#define DIT_REG_RX_RING_START_ADDR_0_DST02	0x0280
#define DIT_REG_RX_RING_START_ADDR_1_DST02	0x0284
#define DIT_REG_RX_RING_START_ADDR_0_DST03	0x0288
#define DIT_REG_RX_RING_START_ADDR_1_DST03	0x028C

/* tail for 2.2.1 */
#define DIT_REG_TX_SRC_A_TAIL_ADDR_0_TEMP	0x0290
#define DIT_REG_TX_SRC_A_TAIL_ADDR_1_TEMP	0x0294
#define DIT_REG_RX_SRC_A_TAIL_ADDR_0_TEMP	0x0308
#define DIT_REG_RX_SRC_A_TAIL_ADDR_1_TEMP	0x030C
#define DIT_REG_TX_SRC_A_TAIL_VALID		0x0320
#define DIT_REG_RX_SRC_A_TAIL_VALID		0x032C
#define DIT_REG_DST_DESC_RESET			0x0338

/* address for Tx desc */
#define DIT_REG_NAT_TX_DESC_ADDR_0_SRC_A	0x4000	/* 32 bit */
#define DIT_REG_NAT_TX_DESC_ADDR_1_SRC_A	0x4004	/* 4 bit */
#define DIT_REG_NAT_TX_DESC_ADDR_EN_SRC_A	0x4008	/* 1 bit */
#define DIT_REG_NAT_TX_DESC_ADDR_0_SRC		DIT_REG_NAT_TX_DESC_ADDR_0_SRC_A
#define DIT_REG_NAT_TX_DESC_ADDR_1_SRC		DIT_REG_NAT_TX_DESC_ADDR_1_SRC_A
#define DIT_REG_NAT_TX_DESC_ADDR_EN_SRC		DIT_REG_NAT_TX_DESC_ADDR_EN_SRC_A
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST00	0x4024
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST00	0x4028
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST0		DIT_REG_NAT_TX_DESC_ADDR_0_DST00
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST0		DIT_REG_NAT_TX_DESC_ADDR_1_DST00
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST1		0x402C
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST1		0x4030
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST2		0x4034
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST2		0x4038
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST01	0x403C
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST01	0x4040
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST02	0x4044
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST02	0x4048
#define DIT_REG_NAT_TX_DESC_ADDR_0_DST03	0x404C
#define DIT_REG_NAT_TX_DESC_ADDR_1_DST03	0x4050

/* address for Rx desc */
#define DIT_REG_NAT_RX_DESC_ADDR_0_SRC_A	0x4054	/* 32 bit */
#define DIT_REG_NAT_RX_DESC_ADDR_1_SRC_A	0x4058	/* 4 bit */
#define DIT_REG_NAT_RX_DESC_ADDR_EN_SRC_A	0x405C	/* 1 bit */
#define DIT_REG_NAT_RX_DESC_ADDR_0_SRC		DIT_REG_NAT_RX_DESC_ADDR_0_SRC_A
#define DIT_REG_NAT_RX_DESC_ADDR_1_SRC		DIT_REG_NAT_RX_DESC_ADDR_1_SRC_A
#define DIT_REG_NAT_RX_DESC_ADDR_EN_SRC		DIT_REG_NAT_RX_DESC_ADDR_EN_SRC_A
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST00	0x4078
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST00	0x407C
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST0		DIT_REG_NAT_RX_DESC_ADDR_0_DST00
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST0		DIT_REG_NAT_RX_DESC_ADDR_1_DST00
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST1		0x4080
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST1		0x4084
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST2		0x4088
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST2		0x408C
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST01	0x4090
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST01	0x4094
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST02	0x4098
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST02	0x409C
#define DIT_REG_NAT_RX_DESC_ADDR_0_DST03	0x40A0
#define DIT_REG_NAT_RX_DESC_ADDR_1_DST03	0x40A4

#define DIT_REG_NAT_TTLDEC_EN			0x4150

/* total: DIT_REG_NAT_INTERFACE_NUM_MAX, interval: DIT_REG_NAT_INTERFACE_NUM_INTERVAL */
#define DIT_REG_NAT_INTERFACE_NUM		0x4200

#define DIT_REG_VERSION				0x9000

#define DIT_REG_NAT_INTERFACE_NUM_MAX		(8)
#define DIT_REG_NAT_INTERFACE_NUM_INTERVAL	(4)

enum dit_nat_ttldec_en_bits {
	TX_TTLDEC_EN_BIT,
	RX_TTLDEC_EN_BIT,
};

enum dit_dst_desc_reset_bits {
	TX_DST_DESC_RESET_BIT,
	RX_DST_DESC_RESET_BIT,
};

struct dit_src_desc {
	u64	src_addr:36,
		_reserved_0:12,
		/* the below 16 bits are "private info" on the document */
		ch_id:8,
		pre_csum:1,		/* checksum successful from pktproc */
		udp_csum_zero:1,	/* reset udp checksum 0 after NAT */
		_reserved_2:6;
	u64	length:16,
		interface:8,
		_reserved_1:24,
		control:8,
		status:8;
} __packed;

/* DIT_INT_PENDING */
enum dit_int_pending_bits {
	TX_DST00_INT_PENDING_BIT = 3,
	TX_DST0_INT_PENDING_BIT = TX_DST00_INT_PENDING_BIT,
	TX_DST1_INT_PENDING_BIT = 7,
	TX_DST2_INT_PENDING_BIT,
	RX_DST00_INT_PENDING_BIT = 19,
	RX_DST0_INT_PENDING_BIT = RX_DST00_INT_PENDING_BIT,
	RX_DST1_INT_PENDING_BIT = 23,
	RX_DST2_INT_PENDING_BIT,
	RSVD0_INT_PENDING_BIT = 30,
	ERR_INT_PENDING_BIT = RSVD0_INT_PENDING_BIT,	/* No ERR interrupt */
};

#define DIT_TX_INT_PENDING_MASK \
	(BIT(TX_DST00_INT_PENDING_BIT) | BIT(TX_DST1_INT_PENDING_BIT) | \
		BIT(TX_DST2_INT_PENDING_BIT))

#define DIT_RX_INT_PENDING_MASK \
	(BIT(RX_DST00_INT_PENDING_BIT) | BIT(RX_DST1_INT_PENDING_BIT) | \
		BIT(RX_DST2_INT_PENDING_BIT))

enum dit_int_enable_bits {
	TX_DST00_INT_ENABLE_BIT = 3,
	TX_DST1_INT_ENABLE_BIT = 7,
	TX_DST2_INT_ENABLE_BIT,
	RX_DST00_INT_ENABLE_BIT = 19,
	RX_DST1_INT_ENABLE_BIT = 23,
	RX_DST2_INT_ENABLE_BIT,
};

#define DIT_INT_ENABLE_MASK \
	(BIT(TX_DST00_INT_ENABLE_BIT) | BIT(TX_DST1_INT_ENABLE_BIT) | \
		BIT(TX_DST2_INT_ENABLE_BIT) | \
		BIT(RX_DST00_INT_ENABLE_BIT) | BIT(RX_DST1_INT_ENABLE_BIT) | \
		BIT(RX_DST2_INT_ENABLE_BIT))

#define DIT_INT_MASK_MASK	(0xFFFFFFFF)

#endif /* __DIT_2_2_0_H__ */
