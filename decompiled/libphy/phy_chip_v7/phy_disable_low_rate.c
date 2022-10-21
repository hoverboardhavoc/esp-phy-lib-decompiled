/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> phy_disable_low_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016118) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void phy_disable_low_rate(void)

{
  int in_a0;
  int in_a5;
  undefined8 in_fa2;
  undefined8 in_fa4;
  int in_stack_0000004c;
  
  *(undefined8 *)(in_a5 + 0x7c) = in_fa4;
  if (in_a0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_stack_0000004c == -8) {
    uRam00000054 = 0;
    uRam00000000 = in_fa2;
    FUN_000161f6(0x280,in_stack_0000004c + 0x200,*(undefined8 *)(in_a5 + 0x4c));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)(in_stack_0000004c + 0x48) = in_fa2;
  gp = gp + 0xb;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

