// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#include <linux/kernel.h>

#include "gps_drv_init.h"

#ifdef CONFIG_MTK_GPS_SUPPORT
int __attribute__((weak)) mtk_wcn_gpsdl_drv_init()
{
	pr_debug("No impl. %s\n", __func__);
	return 0;
}
#endif

int do_gps_drv_init(int chip_id)
{
	int i_ret = -1;
#ifdef CONFIG_MTK_GPS_SUPPORT
	pr_debug("Start to do gps driver init\n");
	i_ret = mtk_wcn_gpsdl_drv_init();
	pr_debug("finish gps driver init, i_ret:%d\n", i_ret);
#else
	pr_debug("CONFIG_MTK_GPS_SUPPORT is not defined\n");
#endif
	return i_ret;

}
