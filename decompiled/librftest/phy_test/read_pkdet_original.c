/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: librftest -> phy_test.o -> read_pkdet_original
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_pkdet_original(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort local_820 [1024];
  ushort auStack_20 [6];
  
  puVar4 = local_820;
  puVar3 = local_820;
  do {
    uVar5 = (ushort)(_DAT_600a0c4c >> 0xb) & 0x7ff;
    if ((_DAT_600a0c4c >> 0xb & 0x400) != 0) {
      uVar5 = uVar5 - 0x800;
    }
    *puVar4 = uVar5;
    puVar4 = puVar4 + 1;
  } while (puVar4 != auStack_20);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    phy_printf("%d,%d\n",iVar1,(int)(short)*puVar3);
    puVar3 = (ushort *)((short *)puVar3 + 1);
    iVar1 = iVar2;
  } while (iVar2 != 0x400);
  return;
}

