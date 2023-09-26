/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> burnin_fill_beacon
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void burnin_fill_beacon(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                       undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint local_54 [4];
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  memset(local_54,0,0x24);
  uVar2 = _DAT_600a4060;
  uVar5 = _DAT_600a405c;
  iVar1 = _PSDU0_OFFSET;
  puVar3 = (uint *)Plcp0AddrGet(0);
  puVar4 = (uint *)ConfAddrGet(0);
  local_54[0] = 0x80;
  local_54[1] = 0xffffffff;
  local_54[2] = uVar5 << 0x10 | 0xffff;
  local_54[3] = uVar2 << 0x10 | uVar5 >> 0x10;
  uStack_3c = 0xa0431;
  uStack_44 = uVar5;
  uStack_40 = uVar2 & 0xffff | 0x5d800000;
  puVar8 = local_54;
  puVar10 = (uint *)(iVar1 + 8);
  do {
    uVar5 = *puVar8;
    puVar11 = puVar10 + 1;
    puVar8 = puVar8 + 1;
    *puVar10 = uVar5;
    puVar10 = puVar11;
  } while ((uint *)(iVar1 + 0x2c) != puVar11);
  *(undefined4 *)(iVar1 + 0x2c) = 0x53450700;
  *(undefined4 *)(iVar1 + 0x30) = 0x36323850;
  *(undefined4 *)(iVar1 + 0x34) = 0x82080136;
  *(undefined4 *)(iVar1 + 0x38) = 0xc968b84;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3241812;
  *(undefined4 *)(iVar1 + 0x40) = 0x4050b01;
  *(undefined4 *)(iVar1 + 0x44) = 0x200;
  *(undefined4 *)(iVar1 + 0x48) = 0x48300432;
  *(undefined4 *)(iVar1 + 0x4c) = 0x88dd6c60;
  *(undefined4 *)(iVar1 + 0x50) = 0xff34fe18;
  *(uint *)(iVar1 + 0x54) = CONCAT12(*param_3,CONCAT11(*param_2,*param_1)) | 0xff000000;
  *(undefined4 *)(iVar1 + 0x58) = *param_5;
  *(undefined4 *)(iVar1 + 0x5c) = param_5[1];
  *(undefined4 *)(iVar1 + 0x60) = param_5[2];
  *(uint *)(iVar1 + 100) = *(ushort *)(param_5 + 3) | 0x55550000;
  *(undefined4 *)(iVar1 + 0x68) = 0x55555555;
  iVar9 = 0;
  do {
    puVar6 = (undefined4 *)(param_4 + iVar9);
    puVar7 = (undefined4 *)(iVar1 + 0x6c + iVar9);
    iVar9 = iVar9 + 4;
    *puVar7 = *puVar6;
  } while (iVar9 != 0x6c);
  *puVar4 = *puVar4 & 0xf0ffffff | 0x1000000;
  *puVar3 = *puVar3 & 0xf8ffffff;
  return;
}

