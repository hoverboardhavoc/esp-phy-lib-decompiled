/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_debug.o -> phy_reg_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_reg_check(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)&DAT_60008800;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18002200;
    puVar1 = puVar1 + 1;
    phy_printf("saradc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60008918);
  puVar1 = (undefined4 *)&DAT_60008000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18002000;
    puVar1 = puVar1 + 1;
    phy_printf("rtc 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x60008158);
  puVar1 = (undefined4 *)&DAT_6000e000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18003800;
    puVar1 = puVar1 + 1;
    phy_printf("i2c_mst 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x6000e178);
  puVar1 = (undefined4 *)&DAT_60006000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18001800;
    puVar1 = puVar1 + 1;
    phy_printf("fe 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x600061e8);
  puVar1 = (undefined4 *)&DAT_60040000;
  do {
    uVar3 = *puVar1;
    puVar2 = puVar1 + -0x18010000;
    puVar1 = puVar1 + 1;
    phy_printf("apbsar 0x%x: 0x%x\n",puVar2,uVar3);
  } while (puVar1 != (undefined4 *)0x6004007c);
  return;
}

