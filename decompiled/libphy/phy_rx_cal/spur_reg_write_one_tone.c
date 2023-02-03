/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> spur_reg_write_one_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void spur_reg_write_one_tone(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar8 = param_1 * 8;
  iVar5 = param_1 * 4;
  puVar9 = (uint *)(&DAT_60012359 + iVar8);
  puVar7 = (uint *)(&DAT_60012359 + iVar5);
  uVar10 = *puVar7 & 0xffffe000;
  *(char *)puVar7 = (char)(param_2 & 0x1fff);
  (&DAT_6001235a)[iVar5] = (byte)(uVar10 >> 8) | (byte)((param_2 & 0x1fff) >> 8);
  (&DAT_6001235b)[iVar5] = (char)(uVar10 >> 0x10);
  (&DAT_6001235c)[iVar5] = (char)(uVar10 >> 0x18);
  uVar10 = *puVar7 & 0xffffdfff;
  *(char *)puVar7 = (char)uVar10;
  (&DAT_6001235a)[iVar5] = (byte)(uVar10 >> 8) | (byte)(((uint)(param_2 != 0) << 0xd) >> 8);
  (&DAT_6001235b)[iVar5] = (char)(uVar10 >> 0x10);
  (&DAT_6001235c)[iVar5] = (char)(uVar10 >> 0x18);
  bVar1 = (int)(param_2 << 0x13) < 0;
  uVar10 = param_2;
  if (bVar1) {
    uVar10 = -param_2;
  }
  uVar11 = (int)(uVar10 + 0x10) / 0x20;
  iVar5 = 0x40;
  if (((param_2 != 0) && ((int)uVar10 < 0x7b0)) &&
     (iVar5 = (int)(uVar10 + uVar11 * -0x20) / 4, bVar1)) {
    uVar11 = -uVar11;
    iVar5 = -iVar5;
  }
  *(undefined1 *)(iVar8 + 0x60012355) = 0;
  *(undefined1 *)(iVar8 + 0x60012356) = 0;
  *(undefined1 *)(iVar8 + 0x60012357) = 0;
  *(undefined1 *)(iVar8 + 0x60012358) = 0;
  *(undefined1 *)puVar9 = 0;
  (&DAT_6001235a)[iVar8] = 0;
  (&DAT_6001235b)[iVar8] = 0;
  uVar10 = iVar5 + 4;
  (&DAT_6001235c)[iVar8] = 0;
  if (uVar10 < 9) {
    iVar3 = (int)(char)(&DAT_000112b0)[iVar5];
    iVar13 = (int)(char)(&DAT_00011298)[iVar5];
    iVar4 = (int)(char)(&DAT_000112a4)[iVar5];
    uVar14 = (uint)(char)(&DAT_000112bc)[iVar5];
    iVar12 = 3;
  }
  else {
    uVar14 = 0;
    iVar3 = 0;
    iVar4 = 0;
    iVar13 = 0;
    iVar12 = 0;
  }
  uVar14 = iVar12 << 4 | iVar4 << 2 | uVar14 | iVar13 << 6;
  uVar6 = uVar14 | iVar3 << 8;
  uVar6 = uVar6 | uVar6 << 0x14 | uVar6 << 10;
  *(undefined1 *)(iVar8 + 0x60012355) = (char)uVar14;
  *(char *)(iVar8 + 0x60012356) = (char)(uVar6 >> 8);
  *(char *)(iVar8 + 0x60012357) = (char)(uVar6 >> 0x10);
  *(char *)(iVar8 + 0x60012358) = (char)(uVar6 >> 0x18);
  if (uVar10 < 9) {
    iVar3 = (int)(char)(&DAT_000112c8)[iVar5];
    uVar14 = (uint)(char)(&DAT_000112d4)[iVar5];
  }
  else {
    uVar14 = 0;
    iVar3 = 0;
  }
  uVar14 = iVar12 << 2 | uVar14 | iVar3 << 4;
  uVar14 = *puVar9 & 0xfffff000 | uVar14 | uVar14 << 6;
  *(char *)puVar9 = (char)uVar14;
  (&DAT_6001235a)[iVar8] = (char)(uVar14 >> 8);
  (&DAT_6001235b)[iVar8] = (char)(uVar14 >> 0x10);
  (&DAT_6001235c)[iVar8] = (char)(uVar14 >> 0x18);
  if (uVar10 < 9) {
    iVar4 = (int)(char)(&DAT_000112e0)[iVar5];
    iVar3 = (int)(char)(&DAT_000112ec)[iVar5];
    uVar14 = (uint)(char)(&DAT_000112f8)[iVar5];
  }
  else {
    uVar14 = 0;
    iVar3 = 0;
    iVar4 = 0;
  }
  uVar14 = (iVar3 << 4 | iVar4 << 2 | uVar14) << 0xc | *puVar9 & 0xfffc0fff;
  *(char *)puVar9 = (char)(*puVar9 & 0xfffc0fff);
  (&DAT_6001235a)[iVar8] = (char)(uVar14 >> 8);
  (&DAT_6001235b)[iVar8] = (char)(uVar14 >> 0x10);
  (&DAT_6001235c)[iVar8] = (char)(uVar14 >> 0x18);
  if (uVar10 < 9) {
    iVar4 = (int)(char)CSWTCH_77[iVar5 + 4];
    iVar3 = (int)(char)(&DAT_00011310)[iVar5];
    uVar14 = (uint)(char)(&DAT_0001131c)[iVar5];
  }
  else {
    uVar14 = 0;
    iVar3 = 0;
    iVar4 = 0;
  }
  uVar6 = *puVar9 & 0xff03ffff;
  uVar14 = (iVar3 << 4 | iVar4 << 2 | uVar14) << 0x12 | uVar6;
  *(char *)puVar9 = (char)uVar6;
  (&DAT_6001235a)[iVar8] = (char)(uVar6 >> 8);
  (&DAT_6001235b)[iVar8] = (char)(uVar14 >> 0x10);
  (&DAT_6001235c)[iVar8] = (char)(uVar14 >> 0x18);
  if (uVar10 < 9) {
    iVar3 = (int)(char)(&DAT_00011328)[iVar5];
    iVar4 = (int)(char)CSWTCH_77[iVar5 + 4];
    bVar2 = (&DAT_00011334)[iVar5];
  }
  else {
    bVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
  }
  uVar10 = *puVar9 & 0xc0ffffff;
  *(char *)puVar9 = (char)uVar10;
  (&DAT_6001235a)[iVar8] = (char)(uVar10 >> 8);
  (&DAT_6001235b)[iVar8] = (char)(uVar10 >> 0x10);
  (&DAT_6001235c)[iVar8] = (byte)(iVar3 << 4) | (byte)(iVar4 << 2) | bVar2 | (byte)(uVar10 >> 0x18);
  uVar10 = (uVar11 & 0x7f) << (param_1 * 7 & 0x1fU) |
           ~(0x7f << (param_1 * 7 & 0x1fU)) &
           CONCAT13(DAT_60012378,CONCAT12(DAT_60012377,CONCAT11(DAT_60012376,DAT_60012375)));
  DAT_60012375 = (char)uVar10;
  DAT_60012376 = (char)(uVar10 >> 8);
  DAT_60012377 = (char)(uVar10 >> 0x10);
  DAT_60012378 = (char)(uVar10 >> 0x18);
  return;
}

