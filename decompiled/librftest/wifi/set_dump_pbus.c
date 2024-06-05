/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: librftest -> wifi.o -> set_dump_pbus
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_dump_pbus(int param_1)

{
  undefined2 uVar1;
  
  if (param_1 == 0) {
    pbus_force_test(1,dump_pbus1);
    pbus_force_test(1,1,DAT_00013b5e);
    pbus_force_test(1,2,DAT_00013b60);
    pbus_force_test(3,1,DAT_00013b62);
    uVar1 = DAT_00013b64;
  }
  else {
    pbus_force_test(0,1,0xc);
    pbus_force_test(1,1,0x86);
    pbus_force_test(1,2,0);
    pbus_force_test(3,1,0xf);
    uVar1 = 0xf;
  }
  pbus_force_test(3,2,uVar1);
  return;
}

