/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> t1_toggle_refresh_rw_v9
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void t1_toggle_refresh_rw_v9(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 unaff_s0;
  int unaff_s1;
  undefined4 unaff_s8;
  undefined8 uVar1;
  undefined4 in_ft10;
  int in_stack_0000004c;
  
  *(undefined4 *)(in_stack_0000004c + 0xfc) = in_ft10;
  *(undefined8 *)(in_stack_0000004c + 8) = param_3;
  *(undefined4 *)unaff_s0 = unaff_s0;
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 == 0) {
    uVar1 = FUN_00011348(in_stack_0000004c + 0x140);
    *(undefined4 *)(in_stack_0000004c + 0xc0) = unaff_s8;
    *(int *)(param_1 + 0x24) = in_stack_0000004c + 8;
    *(undefined4 *)(in_stack_0000004c + 0xc0) = param_2;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

