/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> get_tone_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_tone_sar_dout(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_20 [2];
  ushort uStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != param_1; uVar1 = uVar1 + 1 & 0xff) {
    pwdet_tone_start();
    read_sar_dout(auStack_20);
    uVar2 = uVar2 + ((int)((uint)uStack_1e + (uint)uStack_1c + (uint)uStack_1a + (uint)uStack_18) >>
                    2);
  }
  return uVar2 / uVar1 & 0xffff;
}

