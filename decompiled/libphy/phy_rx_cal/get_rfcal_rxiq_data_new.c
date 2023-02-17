/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_rx_cal.o -> get_rfcal_rxiq_data_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_rfcal_rxiq_data_new(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cStack_34;
  char cStack_33;
  
  iVar9 = 0;
  iVar10 = 0;
  iVar8 = 0;
  iVar2 = 0;
  iVar3 = 0;
  while( true ) {
    rfcal_rxiq_new(0xe,param_1,param_2,&cStack_34,param_3);
    if (param_3 != 0) {
      phy_printf("%d_%d_%d\n",iVar8,(int)cStack_34,(int)cStack_33);
    }
    if (((iVar8 != 0) && (iVar7 = abs_temp(iVar10 - cStack_34), iVar7 < 2)) &&
       (iVar7 = abs_temp(iVar9 - cStack_33), iVar7 < 2)) break;
    iVar10 = (int)cStack_34;
    iVar9 = (int)cStack_33;
    iVar8 = iVar8 + 1;
    iVar3 = (iVar3 + iVar10) * 0x10000 >> 0x10;
    iVar2 = (iVar2 + iVar9) * 0x10000 >> 0x10;
    if (iVar8 == 4) {
      cVar4 = (char)(iVar3 + 2 >> 2);
      cVar1 = (char)(iVar2 + 2 >> 2);
_L29:
      uVar5 = get_data_sat((int)cVar4,0x1f,0xffffffe1);
      uVar6 = get_data_sat((int)cVar1,0x3f,0xffffffc1);
      return uVar6 & 0xff | (uVar5 & 0xff) << 8;
    }
  }
  cVar4 = (char)(cStack_34 + iVar10 + 1 >> 1);
  cVar1 = (char)(cStack_33 + iVar9 + 1 >> 1);
  goto _L29;
}

