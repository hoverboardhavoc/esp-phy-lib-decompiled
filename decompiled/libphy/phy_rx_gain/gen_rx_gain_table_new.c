/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_gain.o -> gen_rx_gain_table_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint gen_rx_gain_table_new
               (int param_1,uint param_2,int param_3,int param_4,byte *param_5,int param_6,
               int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort auStack_50 [14];
  
  uVar2 = (uint)*param_5;
  memcpy(auStack_50,&_LANCHOR0,0xe);
  uVar3 = 0;
  uVar1 = 0;
  do {
    if ((uVar2 == (int)*(char *)(param_4 + uVar1) + (int)(char)param_5[uVar1]) &&
       ((int)uVar1 < param_6 + -1)) {
      do {
        uVar1 = uVar1 + 1 & 0xff;
        if (*(char *)(param_4 + uVar1) != '\0') break;
      } while ((int)uVar1 < param_6 + -1);
      uVar2 = (uint)param_5[uVar1];
    }
    *(uint *)(uVar3 * 4 + param_1) =
         (uint)*(ushort *)(uVar1 * 2 + param_3) * 0x1000 +
         (((uint)auStack_50[uVar2 / 6] << 0x14) >> 0x10) + uVar2 % 6;
    if (param_7 != 0) {
      phy_printf("index: %d value: 0x%x 0x%x 0x%x %d %d %d %d\n",uVar3,param_6,uVar1);
    }
    if (param_2 < uVar2) {
      if (param_7 == 0) {
        return uVar3 & 0xff;
      }
      phy_printf("max_gain: %d\n",(int)(char)uVar3);
      return uVar3 & 0xff;
    }
    uVar3 = uVar3 + 1;
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar3 == 0x55) {
      return 0x55;
    }
  } while( true );
}

