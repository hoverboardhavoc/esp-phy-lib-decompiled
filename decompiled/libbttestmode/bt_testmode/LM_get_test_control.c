/*
 * Last changed at upstream commit 06e7625de197bc12797dd701d6762229bca01826
 * https://github.com/espressif/esp-phy-lib/commit/06e7625de197bc12797dd701d6762229bca01826
 * Upstream date: 2024-06-24 19:58:59 +0800
 * Upstream subject: check phy cal value in NVS after deep sleep
 * Source: libbttestmode -> bt_testmode.o -> LM_get_test_control
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

void LM_get_test_control(u32 *test_scenario,u32 *hopping_mode,u32 *TX_frequency,u32 *RX_frequency,
                        u32 *power_control_mode,u32 *poll_period,u32 *packet_type,
                        u32 *length_of_test_data)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

