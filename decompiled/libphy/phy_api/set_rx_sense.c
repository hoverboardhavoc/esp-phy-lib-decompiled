/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> set_rx_sense
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 set_rx_sense(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = read_hw_noisefloor();
  uVar3 = param_1 * 2 - (iVar2 + 1) / 2;
  sVar4 = (short)uVar3;
  uVar6 = (uint)((param_1 + 0x100) * 0x40000) >> 0x10;
  if ((sVar4 < 0x21) || (param_1 == 0)) {
    DAT_60012363 = 0x20;
    if ((0xc < sVar4) && (param_1 != 0)) goto _L36;
    uVar5 = CONCAT12(DAT_60012357,CONCAT11(DAT_60012356,DAT_60012355)) & 0x7fffff;
    DAT_60012355 = (undefined1)uVar5;
    DAT_60012356 = (undefined1)(uVar5 >> 8);
    DAT_60012357 = (byte)(uVar5 >> 0x10);
    DAT_60012358 = 6;
    if ((2 < sVar4) && (param_1 != 0)) goto _L39;
    uVar5 = CONCAT12(DAT_6001235b,CONCAT11(DAT_6001235a,DAT_60012359)) & 0x7fffff;
    DAT_60012359 = (undefined1)uVar5;
    DAT_6001235a = (undefined1)(uVar5 >> 8);
    DAT_6001235b = (byte)(uVar5 >> 0x10);
    DAT_6001235c = 1;
    if ((uVar6 < 0x2a9) || (param_1 == 0)) goto _L43;
_L44:
    DAT_60012412 = (byte)((uVar6 & 0x3fc) >> 8);
    DAT_60012411 = (undefined1)(uVar6 & 0x3fc);
_L42:
    if (param_1 == 0) goto _L41;
    iVar2 = (uVar6 & 0x3fc) << 10;
    DAT_60012412 = (byte)((uint)iVar2 >> 8) | DAT_60012412;
    DAT_60012413 = (undefined1)((uint)iVar2 >> 0x10);
    uVar1 = DAT_60012413;
    if (0x2a8 < uVar6) goto _L50;
_L45:
    uVar6 = CONCAT13(DAT_60012414,CONCAT12(DAT_60012413,CONCAT11(DAT_60012412,DAT_60012411))) &
            0xc00fffff;
    DAT_60012411 = (undefined1)uVar6;
    DAT_60012412 = (byte)(uVar6 >> 8);
    DAT_60012413 = (undefined1)((uVar6 | 0x2a800000) >> 0x10);
    DAT_60012414 = (undefined1)((uVar6 | 0x2a800000) >> 0x18);
    if ((-2 < sVar4) && (param_1 != 0)) {
_L53:
      DAT_60012389 = (undefined1)(uVar3 * 0x10000 >> 0x10);
      if (sVar4 < 0x21) {
        DAT_6001246b = 0x20;
        return DAT_60012469;
      }
      goto _L55;
    }
  }
  else {
    DAT_60012363 = 1;
_L36:
    uVar5 = CONCAT12(DAT_60012357,CONCAT11(DAT_60012356,DAT_60012355)) & 0x7fffff;
    iVar2 = (uVar3 & 0xffff) << 0x17;
    DAT_60012357 = (byte)(uVar5 >> 0x10) | (byte)((uint)iVar2 >> 0x10);
    DAT_60012355 = (undefined1)uVar5;
    DAT_60012356 = (undefined1)(uVar5 >> 8);
    DAT_60012358 = (undefined1)((uint)iVar2 >> 0x18);
_L39:
    uVar5 = CONCAT12(DAT_6001235b,CONCAT11(DAT_6001235a,DAT_60012359)) & 0x7fffff;
    iVar2 = (uVar3 & 0xffff) << 0x17;
    DAT_6001235b = (byte)(uVar5 >> 0x10) | (byte)((uint)iVar2 >> 0x10);
    DAT_60012359 = (undefined1)uVar5;
    DAT_6001235a = (undefined1)(uVar5 >> 8);
    DAT_6001235c = (undefined1)((uint)iVar2 >> 0x18);
    if (0x2a8 < uVar6) goto _L44;
_L43:
    DAT_60012411 = 0xa8;
    DAT_60012412 = 2;
    if (0x28e < uVar6) goto _L42;
_L41:
    DAT_60012412 = DAT_60012412 | 0x38;
    DAT_60012413 = 10;
    if ((uVar6 < 0x2a9) || (uVar1 = 10, param_1 == 0)) goto _L45;
_L50:
    DAT_60012413 = uVar1;
    uVar5 = CONCAT13(DAT_60012414,CONCAT12(DAT_60012413,CONCAT11(DAT_60012412,DAT_60012411))) &
            0xc00fffff;
    uVar6 = (uVar6 & 0x3ff) << 0x14 | uVar5;
    DAT_60012411 = (undefined1)uVar5;
    DAT_60012412 = (byte)(uVar5 >> 8);
    DAT_60012413 = (undefined1)(uVar6 >> 0x10);
    DAT_60012414 = (undefined1)(uVar6 >> 0x18);
    if (-2 < sVar4) goto _L53;
  }
  DAT_60012389 = 0xfe;
  if ((sVar4 < 0x21) || (param_1 == 0)) {
    DAT_60012389 = 0xfe;
    DAT_6001246b = 0x20;
    return DAT_60012469;
  }
_L55:
  DAT_6001246b = (char)uVar3;
  return DAT_60012469;
}

