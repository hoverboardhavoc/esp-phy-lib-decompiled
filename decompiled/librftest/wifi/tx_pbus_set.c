/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> tx_pbus_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pbus_set(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_420 [264];
  
  local_420[1] = param_2 << 9 | 0x1401ff;
  local_420[2] = 0xf00000;
  local_420[3] = 0xf10000;
  local_420[4] = 0xf20000;
  local_420[5] = 0;
  local_420[6] = 0;
  local_420[7] = 0;
  local_420[0] = param_1 << 9 | 0x401ff;
  uVar4 = _DAT_600060e4 & 0xff;
  iVar2 = uVar4 + 7;
  iVar3 = 0;
  do {
    iVar1 = iVar3 + uVar4 * 4;
    puVar5 = (undefined4 *)((int)local_420 + iVar3);
    iVar3 = iVar3 + 4;
    *(undefined4 *)((int)local_420 + iVar1 + 0x20) = *puVar5;
  } while (iVar3 != 0x20);
  iVar3 = uVar4 - 1;
  iVar1 = 9;
  if (0xfffffff7 < uVar4) {
    iVar1 = 1;
  }
  for (; uVar4 != iVar3 + iVar1; uVar4 = uVar4 + 1) {
    _DAT_600060c8 = uVar4 * 0x100 + 0x20000 & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  }
  uVar4 = _DAT_600060e4 >> 0x10 & 0xff;
  _DAT_600060e4 = iVar2 * 0x100 & 0xffffU | _DAT_600060e4 & 0xff00ff | (uVar4 + 1) * 0x1000000;
  local_420[uVar4 + 8] = param_3 << 9 | 0x401ff;
  local_420[uVar4 + 9] = param_4 << 9 | 0x1401ff;
  uVar6 = uVar4 + 2;
  do {
    _DAT_600060cc = local_420[uVar4 + 8];
    iVar2 = uVar4 * 0x100;
    uVar4 = uVar4 + 1;
    _DAT_600060c8 = iVar2 + 0x20000U & 0xfffcffff | _DAT_600060c8 & 0xfffc00ff;
  } while (uVar6 != uVar4);
  return;
}

