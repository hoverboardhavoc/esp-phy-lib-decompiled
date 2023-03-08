/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> accumiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void accumiq(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  for (uVar1 = 0; param_2 >> 2 != uVar1; uVar1 = uVar1 + 1) {
    uVar3 = *(uint *)(uVar1 * 4 + param_1);
    sampledeal(uVar3 & 0x3ff);
    iVar2 = sampledeal(uVar3 >> 10 & 0x3ff);
    iVar4 = iVar4 + iVar2;
  }
  phy_printf("%d %d %d\n",iVar4);
  return;
}

