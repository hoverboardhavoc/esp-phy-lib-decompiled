/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> gen_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint gen_rx_gain_table(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar2 = 0;
  uVar7 = 0;
  do {
    if ((uVar7 == (int)*(char *)(param_4 + uVar2)) && ((int)uVar2 < param_5 + -1)) {
      do {
        uVar2 = uVar2 + 1 & 0xff;
        if (*(char *)(param_4 + uVar2) != '\0') break;
      } while ((int)uVar2 < param_5 + -1);
      uVar7 = 0;
_L23:
      uVar1 = (1 << (uVar7 / 6 & 0x1f)) - 1U & 0xffff;
      uVar5 = uVar7 % 6;
    }
    else {
      if (uVar7 < 0x24) goto _L23;
      uVar5 = (int)((uVar7 - 0x1e) * 0x1000000) >> 0x18;
      uVar1 = 0x3f;
    }
    if ((int)uVar5 < 5) {
      uVar5 = uVar5 & 0xffff;
      iVar6 = 0;
    }
    else {
      iVar6 = (int)((uVar5 - 5) * 0x1000000) >> 0x18;
      uVar5 = 5;
    }
    puVar3 = (ushort *)(uVar2 * 2 + param_3);
    uVar5 = uVar1 * 8 + (uint)*puVar3 + uVar5;
    uVar1 = uVar5 & 0xffff;
    puVar4 = (uint *)(((int)(char)uVar8 >> 1) * 4 + param_1);
    if ((uVar8 & 1) == 0) {
      *puVar4 = uVar1;
    }
    else {
      *puVar4 = uVar1 * 0x10000 + *puVar4;
    }
    if (param_6 != 0) {
      ets_printf("index: %d value: 0x%x 0x%x 0x%x %d %d %d %d\n",uVar8,uVar1,*puVar3,iVar6,param_5,
                 uVar2);
    }
    if ((uVar5 & 0xff) == param_2) {
      if (param_6 == 0) {
        return uVar8 & 0xff;
      }
      ets_printf("max_gain: %d\n",uVar8);
      return uVar8 & 0xff;
    }
    uVar8 = uVar8 + 1;
    uVar7 = uVar7 + 1 & 0xff;
    if (uVar8 == 0x7f) {
      return 0x55;
    }
  } while( true );
}

