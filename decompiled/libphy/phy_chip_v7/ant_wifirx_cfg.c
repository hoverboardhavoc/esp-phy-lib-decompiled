/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> ant_wifirx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00015a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void ant_wifirx_cfg(bool auto_en,uint8 ant0,uint8 ant1)

{
  uint unaff_retaddr;
  undefined3 unaff_00002009;
  undefined1 *puVar1;
  int *unaff_s0;
  int unaff_s1;
  int in_a0;
  undefined8 *in_a2;
  uint in_a4;
  int in_a5;
  undefined8 in_fa3;
  undefined8 uVar2;
  undefined8 in_fa4;
  
  puVar1 = *(undefined1 **)(CONCAT31(unaff_00002009,auto_en) + 0x4c);
  *(undefined8 *)(in_a5 + 0x7c) = in_fa3;
  uVar2 = *(undefined8 *)(unaff_s0 + 0x11);
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar1 == (undefined1 *)0xfffffe9c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_a0 + 0x10) = *(undefined8 *)(unaff_s1 + 0x80);
  if (in_a4 <= unaff_retaddr) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar1 == (undefined1 *)0xfffffe9c) {
    in_a2[10] = *in_a2;
    *unaff_s0 = (int)in_a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
  } while (puVar1 != (undefined1 *)0xfffffe9c);
  *(undefined8 *)(in_a0 + 0xd8) = uVar2;
  uRam0000007c = in_fa4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

