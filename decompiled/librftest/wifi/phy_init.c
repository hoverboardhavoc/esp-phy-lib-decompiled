/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> phy_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_init(void)

{
  undefined4 uVar1;
  undefined1 auStack_778 [1904];
  
  _flash_test_enable = 0;
  DAT_00018131 = 0;
  uVar1 = 0;
  if (_DAT_60004038 == 0xc) {
    uVar1 = init_param_read();
  }
  register_chipv7_phy(init_param_default,auStack_778,2);
  flash_init_param_print(uVar1);
  return;
}

