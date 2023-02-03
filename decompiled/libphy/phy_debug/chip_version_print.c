/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_debug.o -> chip_version_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void chip_version_print(void)

{
  char *pcVar1;
  
  if (phy_param == '\x01') {
    pcVar1 = "CHIP is ESP32-H2\n";
  }
  else if (phy_param == '\0') {
    pcVar1 = "CHIP is ESP32-H3\n";
  }
  else {
    pcVar1 = "CHIP is ESP32-H4\n";
  }
  phy_printf(pcVar1);
  return;
}

