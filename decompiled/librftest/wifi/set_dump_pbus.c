/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
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
    pbus_force_test(1,1,DAT_00013b2e);
    pbus_force_test(1,2,DAT_00013b30);
    pbus_force_test(3,1,DAT_00013b32);
    uVar1 = DAT_00013b34;
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

