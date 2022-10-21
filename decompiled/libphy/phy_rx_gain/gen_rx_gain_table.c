/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rx_gain.o -> gen_rx_gain_table
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint gen_rx_gain_table(int param_1,uint param_2,int param_3,int param_4,byte *param_5,int param_6,
                      int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  ushort auStack_4c [12];
  
  auStack_4c[0] = 0;
  auStack_4c[1] = 1;
  uVar2 = (uint)*param_5;
  auStack_4c[2] = 5;
  auStack_4c[3] = 0xd;
  auStack_4c[4] = 0x1d;
  uVar5 = 0;
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
    puVar4 = (uint *)(((int)(char)uVar5 >> 1) * 4 + param_1);
    uVar3 = (uint)*(byte *)(param_3 + uVar1) * 0x100 +
            (((uint)auStack_4c[uVar2 / 6] << 0x13) >> 0x10) + uVar2 % 6 & 0xffff;
    if ((uVar5 & 1) == 0) {
      *puVar4 = uVar3;
    }
    else {
      *puVar4 = uVar3 * 0x10000 + *puVar4;
    }
    if (param_7 != 0) {
      phy_printf("index: %d value: 0x%x 0x%x 0x%x %d %d %d %d\n",uVar5,*(byte *)(param_3 + uVar1),
                 param_6,uVar1);
    }
    if (param_2 < uVar2) {
      if (param_7 == 0) {
        return uVar5 & 0xff;
      }
      phy_printf("max_gain: %d\n",uVar5);
      return uVar5 & 0xff;
    }
    uVar5 = uVar5 + 1;
    uVar2 = uVar2 + 1 & 0xff;
    if (uVar5 == 0x7f) {
      return 0x55;
    }
  } while( true );
}

