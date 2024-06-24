/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_rw_testmode.o -> rw_tx_test_wifi_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00016a3c) */
/* WARNING: Removing unreachable block (ram,0x00016a06) */
/* WARNING: Unknown calling convention */

void rw_tx_test_wifi_tx(u32 txpwr,u32 hoppe,u32 freq,u32 edr,u32 type,u32 length,u32 et_mask)

{
  int unaff_s0;
  undefined8 *in_a0;
  int iVar1;
  int extraout_a1;
  int in_a2;
  int in_a3;
  undefined4 in_a4;
  int in_a5;
  int iVar2;
  undefined4 in_ft4;
  undefined8 unaff_fs0;
  undefined8 unaff_fs1;
  undefined8 in_fa1;
  undefined8 uVar3;
  undefined4 in_fa3;
  undefined8 in_fa4;
  u32 bchh;
  u32 bchl;
  
  while( true ) {
    *(undefined4 *)((int)txpwr + 0x80) = in_fa3;
    *in_a0 = unaff_fs0;
    *(undefined8 *)(in_a5 + 0x3c) = in_fa1;
    iVar2 = in_a5 + 3;
    *(undefined4 *)((int)txpwr + 0xb0) = in_ft4;
    if ((undefined1 *)txpwr != (undefined1 *)0xfffffc70) {
      *(undefined8 *)(in_a5 + 0xf3) = in_fa4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_a3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    txpwr = (BADSPACEBASE *)0xfffffc68;
    uVar3 = *(undefined8 *)(in_a2 + 0x20);
    if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined8 *)(in_a5 + 0x3f) = unaff_fs1;
    if (in_a0 != (undefined8 *)0x0) break;
    iVar1 = FUN_000166be(uVar3);
    if (iVar1 != 0) {
      if (iVar2 != 0) {
        FUN_00016a90();
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uRamfffffd18 = 0;
    if (extraout_a1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(unaff_s0 + 0x40) = in_a4;
    in_fa1 = *(undefined8 *)(in_a3 + 0xa8);
    unaff_s0 = -0x16c;
    in_a2 = -100;
    uRamfffffed4 = 0xffffff9c;
    in_a0 = (undefined8 *)0xfffffc90;
    uRamfffffe94 = 0xfffffe94;
    in_a3 = -0x334;
    in_a5 = iVar2;
    iRamfffffe98 = extraout_a1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

