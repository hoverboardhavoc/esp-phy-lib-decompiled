/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> check_tx_pkt_stat_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void check_tx_pkt_stat_new(uint param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = "Packet TX finished successfully! \n";
  }
  else {
    if ((param_1 & 2) != 0) {
      phy_printf("TX failED with max length ERR! \n");
    }
    if ((param_1 & 4) != 0) {
      phy_printf("TX failED with spec. length ERR! \n");
    }
    if ((param_1 & 0x80) != 0) {
      phy_printf("TX failED with spec. packet type ERR! \n");
    }
    if ((param_1 & 0x100) != 0) {
      phy_printf("TX failED with cfg packet type ERR! \n");
    }
    if ((param_1 & 0x200) != 0) {
      phy_printf("TX failED with BB FIFO overflow! \n");
    }
    if ((param_1 & 0x400) == 0) {
      return;
    }
    pcVar1 = "TX failED with CCA! \n";
  }
  phy_printf(pcVar1);
  return;
}

