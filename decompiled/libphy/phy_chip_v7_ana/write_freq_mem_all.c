/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> write_freq_mem_all
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_freq_mem_all(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_4c [6];
  
  if ((_chip7_sleep_params & 0x18) == 0x10) {
    uVar3 = 0xe;
    if (phy_freq_wifi_only == '\0') {
      uVar3 = 0x55;
    }
    uVar4 = 0;
    do {
      if (phy_freq_wifi_only == '\0') {
        uVar2 = uVar4 + 0x960;
_L212:
        uVar2 = uVar2 & 0xffff;
      }
      else {
        uVar2 = 0x9b4;
        if (uVar4 < 0xd) {
          uVar2 = uVar4 * 5 + 0x96c;
          goto _L212;
        }
      }
      uVar2 = uVar2 - 0x60 & 0xff;
      iVar5 = 0;
      do {
        uVar1 = phy_byte_to_word(uVar2 * 0xc + param_1 + iVar5);
        *(undefined4 *)((int)local_4c + iVar5) = uVar1;
        iVar5 = iVar5 + 4;
      } while (iVar5 != 0xc);
      wr_rf_freq_mem(uVar2,local_4c);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < uVar3);
    _chip7_sleep_params = _chip7_sleep_params | 8;
  }
  return;
}

