/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
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
    pbus_force_test(1,1,DAT_00013efa);
    pbus_force_test(1,2,DAT_00013efc);
    pbus_force_test(3,1,DAT_00013efe);
    uVar1 = DAT_00013f00;
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

