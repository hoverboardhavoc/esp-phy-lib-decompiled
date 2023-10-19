/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> pbus_tx_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_tx_test(int param_1,undefined2 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  pbus_debugmode();
  pbus_force_test(0,1,0xc);
  pbus_force_test(1,1,0);
  pbus_force_test(1,2,0);
  do {
    pbus_force_test(0,1,0xc);
    pbus_force_test(3,1,param_3 << 3 | 5);
    pbus_force_test(3,2,0xf);
    if (param_1 == 1) {
      uVar1 = 0;
      do {
        uVar3 = uVar1 | 0xf;
        uVar1 = uVar1 + 0x10;
        pbus_force_test(3,2,uVar3);
        ets_delay_us(param_2);
      } while (uVar1 != 0x80);
    }
    else {
      pbus_force_test(3,2,0x7f);
    }
    ets_delay_us(1000);
    if (param_1 == 1) {
      uVar1 = 0x70;
      do {
        uVar3 = uVar1 | 0xf;
        uVar1 = uVar1 - 0x10;
        pbus_force_test(3,2,uVar3);
        ets_delay_us(param_2);
      } while (uVar1 != 0xfff0);
    }
    else {
      pbus_force_test(3,2,0xf);
    }
    pbus_force_test(3,2,0);
    pbus_force_test(3,1,0);
    pbus_force_test(0,1,0);
    pbus_force_test(3,1,0);
    ets_delay_us(200);
    iVar2 = GetStopCmd();
  } while (iVar2 != 0);
  return;
}

