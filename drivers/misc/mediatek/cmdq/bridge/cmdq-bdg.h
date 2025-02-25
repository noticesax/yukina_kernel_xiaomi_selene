/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 * Copyright (C) 2021 XiaoMi, Inc.
 */

#ifndef __CMDQ_BDG_H__
#define __CMDQ_BDG_H__

struct cmdq_client;
struct cmdqRecStruct;

u32 spi_read_reg(const u32 addr);
s32 spi_write_reg(const u32 addr, const u32 val);

s32 cmdq_bdg_irq_handler(void);

/* shutdown loop */
void cmdq_bdg_client_shutdown(struct cmdq_client *cl);
void cmdq_bdg_client_get_irq(struct cmdq_client *cl, u32 *irq);
void cmdq_bdg_dump_handle(struct cmdqRecStruct *rec, const char *tag);

#endif
