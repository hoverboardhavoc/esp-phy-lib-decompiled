/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> phy_freq_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_freq_correct(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    param_2 = param_2 << 1;
    uVar2 = CONCAT12(DAT_60012378,CONCAT11(DAT_60012377,DAT_60012376)) & 0xfffffc;
    DAT_60012375 = 0xfa;
    DAT_60012376 = (char)uVar2;
    DAT_60012377 = (char)(uVar2 >> 8);
    DAT_60012378 = (char)(uVar2 >> 0x10);
    iVar3 = 2;
    if ((param_2 < 0x1f9) && (iVar3 = 0x3d, -0x1f9 < param_2)) {
      iVar3 = 0x1f;
    }
    uVar2 = CONCAT12(DAT_60012398,CONCAT11(DAT_60012397,DAT_60012396)) & 0xffff81;
    uVar1 = (undefined1)(uVar2 >> 8);
    uVar2 = CONCAT12((char)(uVar2 >> 0x10),
                     CONCAT11(uVar1,(byte)uVar2 | (byte)((uint)(iVar3 << 9) >> 8))) & 0xfffffe;
    uVar4 = param_2 / 5 & 0x1ff;
    DAT_60012395 = (char)uVar4;
    DAT_60012396 = (byte)uVar2 | (byte)(uVar4 >> 8);
    DAT_60012397 = (char)(uVar2 >> 8);
    DAT_60012398 = (char)(uVar2 >> 0x10);
    uVar4 = param_2 / 5 & 0x3ff;
    uVar2 = CONCAT12(DAT_600123e0,CONCAT11(DAT_600123df,DAT_600123de)) & 0xfffffc;
    DAT_600123dd = (char)uVar4;
    DAT_600123de = (byte)uVar2 | (byte)(uVar4 >> 8);
    DAT_600123df = (char)(uVar2 >> 8);
    DAT_600123e0 = (char)(uVar2 >> 0x10);
    return uVar1;
  }
  uVar2 = CONCAT12(DAT_60012378,CONCAT11(DAT_60012377,DAT_60012376)) & 0xfffffc;
  DAT_60012375 = 0;
  DAT_60012376 = (char)uVar2;
  DAT_60012377 = (char)(uVar2 >> 8);
  DAT_60012378 = (char)(uVar2 >> 0x10);
  uVar2 = (CONCAT12(DAT_60012398,CONCAT11(DAT_60012397,DAT_60012396)) & 0xffff81 | 0x3e) & 0xfffffe;
  DAT_60012395 = 0;
  DAT_60012396 = (char)uVar2;
  DAT_60012397 = (char)(uVar2 >> 8);
  DAT_60012398 = (char)(uVar2 >> 0x10);
  uVar2 = CONCAT12(DAT_600123e0,CONCAT11(DAT_600123df,DAT_600123de)) & 0xfffffc;
  DAT_600123dd = 0;
  DAT_600123de = (char)uVar2;
  DAT_600123df = (char)(uVar2 >> 8);
  DAT_600123e0 = (char)(uVar2 >> 0x10);
  return 0;
}

