/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_cca_fifo_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_cca_fifo_print(void)

{
  _DAT_600110d4 = _DAT_600110d4 & 0xfe1fffff;
  if (_DAT_60011088 << 0xc < 0) {
    _DAT_60011090 = _DAT_60011090 | 0x80000;
    phy_printf("%d\t%d\t%d\n",_DAT_600110d8 >> 0x1e,(int)(char)(_DAT_600110d8 >> 0xf),
               _DAT_600110d8 >> 0x17 & 0x7f);
    return;
  }
  return;
}

