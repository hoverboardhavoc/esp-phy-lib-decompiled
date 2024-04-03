/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> bt_testmode_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void bt_testmode_init(int param_1,int param_2,uint param_3,int param_4,undefined8 param_5)

{
  int unaff_s1;
  uint unaff_s11;
  
  *(undefined8 *)(param_4 + 0x7c) = param_5;
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_s1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 <= unaff_s11) {
    do {
    } while (param_2 == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_3 != 0) {
    if (unaff_s1 == -0x17) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

