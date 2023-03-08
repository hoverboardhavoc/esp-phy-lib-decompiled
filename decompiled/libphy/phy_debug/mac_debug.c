/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_debug.o -> mac_debug
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mac_debug(void)

{
  uint uVar1;
  
  phy_printf("Tx Over 0x%x\n",_DAT_60033c68 & 0xff);
  phy_printf("txq_length=0x%x\n",_DAT_600342f8 & 0xfff);
  uVar1 = _DAT_60033d08;
  phy_printf("txq_link_addr=0x%x\n",_DAT_60033d08 & 0xfffff);
  phy_printf("txq_length_s=0x%x\n",*(undefined4 *)(uVar1 & 0xfffff | 0x3fc00000));
  phy_printf("TXHOLD_OFDM=0x%x\n",_DAT_60033d18 >> 8 & 0xff);
  phy_printf("TXHOLD_CCK=0x%x\n",_DAT_60033d18 & 0xff);
  phy_printf("BB_CTRL1_REG=0x%x\n",_DAT_6001d06c);
  phy_printf("WDEVAHBRG_LO_REG=0x%x\n",_DAT_60033c60);
  return;
}

