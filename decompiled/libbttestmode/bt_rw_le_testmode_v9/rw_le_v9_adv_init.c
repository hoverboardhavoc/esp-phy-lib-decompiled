/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void rw_le_v9_adv_init(undefined8 *param_1,int param_2,int param_3,undefined8 param_4)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_fs10;
  undefined8 in_ft10;
  
  iVar2 = param_2;
  iVar1 = FUN_00011b0a();
  *(undefined4 *)(param_2 + 0xfc) = unaff_fs10;
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x40) = unaff_s0;
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = *param_1;
  uVar4 = *param_1;
  uVar3 = *param_1;
  *(undefined8 *)(iVar1 + 8) = param_4;
  FUN_0001226e(param_3 + -8,uVar3,uVar4,uVar5);
  *(undefined8 *)(param_2 + 0x88) = in_ft10;
  FUN_0001245e();
  return;
}

