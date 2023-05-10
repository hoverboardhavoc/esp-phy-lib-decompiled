/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: libphy -> phy_tx_gain.o -> ram_get_rate_fcc_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_get_rate_fcc_index(uint param_1,byte *param_2,int param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  param_3 = param_3 + param_1;
  bVar1 = *(byte *)(param_3 + -1);
  bVar2 = *(byte *)(param_3 + 0xd);
  bVar3 = *(byte *)(param_3 + 0x1b);
  if ((param_1 - 3 & 0xff) < 9) {
    bVar4 = param_4[param_1 - 3];
  }
  else if (param_1 < 3) {
    bVar4 = *param_4;
  }
  else {
    bVar4 = param_4[8];
  }
  if (0x52 < bVar1) {
    bVar1 = 0x52;
  }
  *param_2 = bVar1;
  if (0x52 < bVar2) {
    bVar2 = 0x52;
  }
  param_2[1] = bVar2;
  if (0x52 < bVar3) {
    bVar3 = 0x52;
  }
  param_2[2] = bVar3;
  if (0x52 < bVar4) {
    bVar4 = 0x52;
  }
  param_2[3] = bVar4;
  return;
}

