/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_rx_cal.o -> rxiq_cover_mg_mp_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rxiq_cover_mg_mp_new(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bStack_24;
  byte bStack_23;
  
  iVar5 = 2;
  iVar1 = 0;
  iVar4 = 0;
  while( true ) {
    iVar4 = rxiq_set_reg(iVar4,1);
    iVar1 = rxiq_set_reg(iVar1,0);
    rxiq_get_mis_new(param_1,&bStack_24,param_4);
    iVar4 = (int)(((uint)bStack_24 + iVar4) * 0x1000000) >> 0x18;
    iVar1 = (int)((iVar1 - (uint)bStack_23) * 0x1000000) >> 0x18;
    if (iVar5 == 1) break;
    iVar5 = 1;
  }
  cVar2 = get_data_sat(0x1f,0xffffffe1);
  cVar3 = get_data_sat(iVar1,0x3f,0xffffffc1);
  rxiq_set_reg((int)cVar2,1);
  rxiq_set_reg((int)cVar3,0);
  *param_2 = cVar2;
  *param_3 = cVar3;
  return;
}

