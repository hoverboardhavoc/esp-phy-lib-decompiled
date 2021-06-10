/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> correct_rf_ana_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void correct_rf_ana_gain(byte *param_1,ushort *param_2,undefined2 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = txbbgain_to_index(*param_3);
  uVar2 = *param_2 >> 4 & 7;
  if ('\0' < (char)*param_1) {
    for (; uVar4 < 2; uVar4 = uVar4 + 1 & 0xff) {
      *param_1 = *param_1 - 8;
    }
    if ('\0' < (char)*param_1) {
      do {
        bVar1 = *param_1;
        if (uVar2 == 7) {
          uVar2 = 7;
          break;
        }
        iVar5 = get_rf_gain_qdb(uVar2);
        iVar5 = ((char)bVar1 - iVar5) * 0x1000000;
        *param_1 = (byte)((uint)iVar5 >> 0x18);
        uVar2 = uVar2 + 1 & 0xff;
      } while (0 < iVar5 >> 0x18);
    }
    iVar5 = (int)(char)*param_1;
    for (; (0 < iVar5 && (uVar4 < 4)); uVar4 = uVar4 + 1 & 0xff) {
      iVar6 = (*param_1 - 8) * 0x1000000;
      iVar5 = iVar6 >> 0x18;
      *param_1 = (byte)((uint)iVar6 >> 0x18);
    }
    goto _L532;
  }
  if (*param_1 == 0) goto _L532;
  do {
    if (uVar4 < 3) {
      if ((char)*param_1 < 0) goto _L537;
      break;
    }
    iVar5 = ((char)*param_1 + 8) * 0x1000000;
    *param_1 = (byte)((uint)iVar5 >> 0x18);
    uVar4 = uVar4 - 1 & 0xff;
  } while (iVar5 >> 0x18 < 0);
  goto _L535;
  while( true ) {
    uVar2 = uVar2 - 1 & 0xff;
    iVar5 = get_rf_gain_qdb(uVar2);
    iVar5 = (iVar5 + (char)bVar1) * 0x1000000;
    *param_1 = (byte)((uint)iVar5 >> 0x18);
    if (-1 < iVar5 >> 0x18) break;
_L537:
    bVar1 = *param_1;
    if (uVar2 < 2) break;
  }
_L535:
  if ((char)*param_1 < '\0') {
    for (; uVar4 != 0; uVar4 = uVar4 - 1 & 0xff) {
      *param_1 = *param_1 + 8;
    }
  }
_L532:
  *param_2 = (short)(uVar2 << 4) + 0xf;
  uVar3 = index_to_txbbgain(uVar4);
  *param_3 = uVar3;
  return;
}

