/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> rxiq_cover_mg_mp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_cover_mg_mp(uint param_1,char *param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  byte bStack_34;
  byte bStack_33;
  
  iVar1 = _DAT_600a0450;
  iVar7 = 2;
  iVar2 = 0;
  iVar3 = 0;
  while( true ) {
    iVar3 = rxiq_set_reg(iVar3,1);
    iVar2 = rxiq_set_reg(iVar2,0);
    iq_est_enable(1,1 << (param_1 & 0x1f) & 0xffff);
    rxiq_get_mis(param_1,&bStack_34,param_4);
    if (iVar1 < 0) {
      bStack_34 = (char)bStack_34 >> 1;
    }
    uVar6 = (uint)bStack_33;
    iVar3 = (int)(((uint)bStack_34 + iVar3) * 0x1000000) >> 0x18;
    iq_est_disable();
    iVar2 = (int)((iVar2 - uVar6) * 0x1000000) >> 0x18;
    if (iVar7 == 1) break;
    iVar7 = 1;
  }
  if (iVar3 < -0x1f) {
    iVar3 = -0x1f;
  }
  cVar4 = (char)iVar3;
  if ('\x1f' < cVar4) {
    cVar4 = '\x1f';
  }
  if (iVar2 < -0x1f) {
    iVar2 = -0x1f;
  }
  cVar5 = (char)iVar2;
  if ('\x1f' < cVar5) {
    cVar5 = '\x1f';
  }
  rxiq_set_reg((int)cVar4,1);
  rxiq_set_reg((int)cVar5,0);
  *param_2 = cVar4;
  *param_3 = cVar5;
  return;
}

