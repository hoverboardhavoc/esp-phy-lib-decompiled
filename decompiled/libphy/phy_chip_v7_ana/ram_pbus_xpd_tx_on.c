/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_chip_v7_ana.o -> ram_pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void ram_pbus_xpd_tx_on(U16 pa_gain,U16 bbgain)

{
  int iVar1;
  undefined2 unaff_0000200a;
  undefined2 bbgain_2;
  int iVar2;
  int *in_a0;
  int in_a3;
  undefined4 in_ft5;
  undefined8 unaff_fs0;
  undefined4 unaff_fs10;
  undefined4 in_ft11;
  sint16 dc_comp [4];
  
  iVar2 = *in_a0;
  *(undefined4 *)(CONCAT22(unaff_0000200a,pa_gain) + 0xfc) = in_ft11;
  _bbgain = _bbgain + 0xb;
  *(undefined8 *)(iVar2 + 0x68) = unaff_fs0;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = *(int *)(CONCAT22(unaff_0000200a,pa_gain) + 0x4c);
  *(undefined4 *)(iVar1 + 0x24) = in_ft5;
  *(undefined4 *)(*(int *)iVar1 + 0xfc) = unaff_fs10;
  if (in_a3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

