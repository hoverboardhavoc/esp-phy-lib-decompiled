/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> wifi_rifs_mode_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_rifs_mode_en(byte param_1)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_6001243c,CONCAT12(DAT_6001243b,CONCAT11(DAT_6001243a,DAT_60012439))) &
          0xfffffffe;
  DAT_60012439 = param_1 & 1 | (byte)uVar1;
  DAT_6001243a = (char)(uVar1 >> 8);
  DAT_6001243b = (char)(uVar1 >> 0x10);
  DAT_6001243c = (char)(uVar1 >> 0x18);
  return;
}

