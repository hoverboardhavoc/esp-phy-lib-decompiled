/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_debug.o -> pbus_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_print(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = pbus_rd(0,1);
  phy_printf("rfrx:0x%x;",uVar1);
  uVar1 = pbus_rd(3,1);
  uVar2 = pbus_rd(3,2);
  phy_printf("rftx:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = pbus_rd(1,1);
  uVar2 = pbus_rd(1,2);
  phy_printf("bb1:0x%x,0x%x;",uVar1,uVar2);
  uVar1 = pbus_rd(2,1);
  uVar2 = pbus_rd(2,2);
  phy_printf("bb2:%d,%d\n",uVar1,uVar2);
  return;
}

