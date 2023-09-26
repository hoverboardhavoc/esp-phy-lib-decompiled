/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_conmst_evt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void rw_le_pq_conmst_evt(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_ft0;
  
  iVar1 = (int)&stack0x00000000 * 0x2000;
  *(undefined8 *)(iVar1 + 0x80) = in_ft0;
  *(undefined4 *)(iVar1 + 0xfc) = param_1;
  iVar2 = iVar1 + 0x218;
  tp = (uint)*(ushort *)(iVar1 + 0x356);
  FUN_00011400();
  FUN_0001137e();
  do {
  } while (iVar2 != 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

