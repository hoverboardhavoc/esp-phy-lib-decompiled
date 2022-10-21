/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ram_cbw2040_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void ram_cbw2040_cfg(bool cbw20_sel)

{
  undefined3 unaff_00002009;
  undefined4 *puVar1;
  int unaff_s0;
  int unaff_s1;
  int in_a0;
  int in_a5;
  undefined4 in_ft5;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(CONCAT31(unaff_00002009,cbw20_sel) + 0x4c);
  uVar2 = *(undefined8 *)(unaff_s0 + 0x68);
  do {
    *(undefined4 *)((int)puVar1 + 0x24) = in_ft5;
    puVar1 = (undefined4 *)*puVar1;
  } while (in_a5 != 0);
  if (unaff_s1 == -0xb) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a0 + 0x58) = uVar2;
  *puVar1 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

