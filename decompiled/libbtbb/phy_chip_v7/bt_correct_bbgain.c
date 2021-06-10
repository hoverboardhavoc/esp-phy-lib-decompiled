/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bt_correct_bbgain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_correct_bbgain(ushort *param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  char local_18 [16];
  
  iVar6 = 0;
  do {
    local_18[iVar6] = param_2[iVar6];
    iVar6 = iVar6 + 1;
  } while (iVar6 != 8);
  uVar1 = bt_bb_to_index(*param_1);
  iVar6 = (int)local_18[0];
  uVar1 = uVar1 & 0xff;
  if (iVar6 < 0x31) {
    cVar4 = '\0';
    if ((iVar6 < 0xc) && (cVar4 = '\0', uVar1 < 3)) {
      iVar6 = (iVar6 + 0x18) * 0x1000000 >> 0x18;
      uVar1 = uVar1 + 1 & 0xff;
      cVar4 = '\x18';
    }
_L148:
    if (iVar6 < 0xc) {
      uVar5 = 0x20;
      if (2 < uVar1) goto _L152;
      cVar4 = cVar4 + '\x18';
      uVar1 = uVar1 + 1;
_L166:
      uVar1 = uVar1 & 0xff;
    }
    uVar5 = 0x20;
    if (2 < uVar1) goto _L152;
  }
  else {
    if (uVar1 != 0) {
      iVar6 = (iVar6 + -0x18) * 0x1000000 >> 0x18;
      uVar1 = uVar1 - 1 & 0xff;
      if (iVar6 < 0x31) {
        cVar4 = -0x18;
        goto _L148;
      }
      cVar4 = -0x18;
      if (uVar1 == 0) goto _L150;
      cVar4 = -0x30;
      uVar1 = uVar1 - 1;
      goto _L166;
    }
    cVar4 = '\0';
  }
_L150:
  uVar5 = (ushort)(byte)(&CSWTCH_233)[uVar1];
_L152:
  *param_1 = uVar5;
  pcVar2 = param_2;
  do {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = *pcVar2 + cVar4;
    pcVar2 = pcVar3;
  } while (param_2 + 8 != pcVar3);
  return;
}

