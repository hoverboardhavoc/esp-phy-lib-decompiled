/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bb_init_rx_headbuf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 * bb_init_rx_headbuf(uint param_1)

{
  rx_head_buf._4_4_ = rx_head_buf._4_4_ & 0xffffc000 | param_1 & 0x3fff;
  rx_head_buf._12_4_ = rx_head_buf._12_4_ | 0xffffff;
  return rx_head_buf;
}

