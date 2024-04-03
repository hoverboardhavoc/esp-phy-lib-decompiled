/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> print_dump_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

short print_dump_data(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_2b0 [100];
  uint auStack_120 [62];
  
  puVar8 = local_2b0;
  puVar7 = local_2b0;
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar6 = *(uint *)(uVar2 * 4 + 0x40840000);
    uVar5 = (uint)(short)uVar6;
    uVar4 = uVar5 & 0x3ff;
    if ((uVar5 & 0x200) != 0) {
      uVar4 = uVar4 - 0x400;
    }
    uVar6 = (uint)(short)(uVar6 >> 10);
    uVar5 = uVar6 & 0x3ff;
    if ((uVar6 & 0x200) != 0) {
      uVar5 = uVar5 - 0x400;
    }
    uVar4 = uVar4 * uVar4 + uVar5 * uVar5;
    *puVar8 = uVar4;
    if ((uVar2 < 100) && (uVar3 < uVar4)) {
      uVar3 = uVar4;
    }
    if (param_1 != 0) {
      phy_printf("%d,%d\n",uVar2);
    }
    uVar2 = uVar2 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar2 != 0xa0);
  if (uVar3 == 0) {
    uVar3 = 5;
  }
  sVar1 = 100;
  do {
    if (2 < *(uint *)((int)puVar7 + 400) / uVar3) break;
    sVar1 = sVar1 + 1;
    puVar7 = (uint *)((int)puVar7 + 4);
  } while (sVar1 != 0xa0);
  if (param_1 != 0) {
    phy_printf(&_LC13,sVar1);
  }
  return sVar1;
}

