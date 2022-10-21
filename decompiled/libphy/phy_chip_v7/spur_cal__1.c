/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7.o -> spur_cal__1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

int spur_cal(uint16 freq,int8 BW_h,uint16 spur_freq_cfg,uint8 spur_freq_cfg_div)

{
  int unaff_s0;
  int iVar1;
  undefined8 unaff_fs0;
  
  iVar1 = *(int *)(unaff_s0 + 0x20);
  *(undefined8 *)(iVar1 + 0x40) = unaff_fs0;
  *(int *)(iVar1 + 4) = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

