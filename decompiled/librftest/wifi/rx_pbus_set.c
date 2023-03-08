/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rx_pbus_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_pbus_set(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_410 [260];
  
  local_410[1] = param_2 << 9 | 0x1401ff;
  local_410[2] = 0xf50000;
  local_410[3] = 0xf60000;
  local_410[0] = param_1 << 9 | 0x401ff;
  uVar4 = _DAT_600060e0 & 0xff;
  iVar2 = uVar4 + 3;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + uVar4 * 4;
    puVar5 = (undefined4 *)((int)local_410 + iVar3);
    iVar3 = iVar3 + 4;
    *(undefined4 *)((int)local_410 + iVar1 + 0x10) = *puVar5;
  } while (iVar3 != 0x10);
  iVar3 = uVar4 - 1;
  iVar1 = 5;
  if (0xfffffffb < uVar4) {
    iVar1 = 1;
  }
  for (; uVar4 != iVar3 + iVar1; uVar4 = uVar4 + 1) {
    _DAT_600060c8 = uVar4 * 0x100 + 0x20000 & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  }
  uVar4 = _DAT_600060e0 >> 0x10 & 0xff;
  _DAT_600060e0 = iVar2 * 0x100 & 0xffffU | _DAT_600060e0 & 0xff00ff | (uVar4 + 1) * 0x1000000;
  local_410[uVar4 + 4] = param_3 << 9 | 0x401ff;
  local_410[uVar4 + 5] = param_4 << 9 | 0x1401ff;
  uVar6 = uVar4 + 2;
  do {
    _DAT_600060cc = local_410[uVar4 + 4];
    iVar2 = uVar4 * 0x100;
    uVar4 = uVar4 + 1;
    _DAT_600060c8 = iVar2 + 0x20000U & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  } while (uVar6 != uVar4);
  return;
}

