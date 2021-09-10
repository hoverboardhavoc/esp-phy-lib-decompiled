/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7.o -> spur_reg_write_one_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void spur_reg_write_one_tone(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar5 = (uint *)((param_1 + 0x18007405) * 4);
  *puVar5 = *puVar5 & 0xffffe000 | param_2 & 0x1fff;
  *puVar5 = *puVar5 & 0xffffdfff | (uint)(param_2 != 0) << 0xd;
  puVar5 = (uint *)((param_1 + 0xc003982) * 8);
  bVar1 = (int)(param_2 << 0x13) < 0;
  uVar7 = param_2;
  if (bVar1) {
    uVar7 = -param_2;
  }
  uVar8 = (int)(uVar7 + 0x10) / 0x20;
  iVar6 = 0x40;
  if (((param_2 != 0) && ((int)uVar7 < 0x7b0)) && (iVar6 = (int)(uVar7 + uVar8 * -0x20) / 4, bVar1))
  {
    uVar8 = -uVar8;
    iVar6 = -iVar6;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  uVar7 = iVar6 + 4;
  if (uVar7 < 9) {
    iVar9 = (int)(char)(&DAT_00012fd0)[iVar6];
    iVar2 = (int)(char)(&DAT_00012fb8)[iVar6];
    iVar4 = (int)(char)(&DAT_00012fc4)[iVar6];
    uVar10 = (uint)(char)(&DAT_00012fdc)[iVar6];
    iVar3 = 3;
  }
  else {
    uVar10 = 0;
    iVar9 = 0;
    iVar4 = 0;
    iVar2 = 0;
    iVar3 = 0;
  }
  uVar10 = iVar3 << 4 | iVar4 << 2 | uVar10 | iVar2 << 6 | iVar9 << 8;
  *puVar5 = uVar10 | uVar10 << 0x14 | uVar10 << 10;
  if (uVar7 < 9) {
    iVar9 = (int)(char)(&DAT_00012fe8)[iVar6];
    uVar10 = (uint)(char)(&DAT_00012ff4)[iVar6];
  }
  else {
    uVar10 = 0;
    iVar9 = 0;
  }
  uVar10 = iVar3 << 2 | uVar10 | iVar9 << 4;
  puVar5[1] = uVar10 << 6 | puVar5[1] & 0xfffff000 | uVar10;
  if (uVar7 < 9) {
    iVar9 = (int)(char)(&DAT_0001300c)[iVar6];
    iVar4 = (int)(char)(&DAT_00013000)[iVar6];
    uVar10 = (uint)(char)(&DAT_00013018)[iVar6];
  }
  else {
    uVar10 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  puVar5[1] = (iVar4 << 2 | iVar9 << 4 | uVar10) << 0xc | puVar5[1] & 0xfffc0fff;
  if (uVar7 < 9) {
    iVar9 = (int)(char)(&DAT_00013030)[iVar6];
    iVar4 = (int)(char)CSWTCH_122[iVar6 + 4];
    uVar10 = (uint)(char)(&DAT_0001303c)[iVar6];
  }
  else {
    uVar10 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  puVar5[1] = (iVar4 << 2 | iVar9 << 4 | uVar10) << 0x12 | puVar5[1] & 0xff03ffff;
  if (uVar7 < 9) {
    iVar9 = (int)(char)(&DAT_00013048)[iVar6];
    iVar4 = (int)(char)CSWTCH_122[iVar6 + 4];
    uVar7 = (uint)(char)(&DAT_00013054)[iVar6];
  }
  else {
    uVar7 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  puVar5[1] = (iVar9 << 4 | iVar4 << 2 | uVar7) << 0x18 | puVar5[1] & 0xc0ffffff;
  _DAT_6001ccb0 =
       (uVar8 & 0x7f) << (param_1 * 7 & 0x1fU) | ~(0x7f << (param_1 * 7 & 0x1fU)) & _DAT_6001ccb0;
  return;
}

