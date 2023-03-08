/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_v9.o -> rf_rw_v9_bt_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rf_rw_v9_bt_init(void)

{
  mac_write(&DAT_60031070,0);
  _DAT_60031074 = _DAT_60031074 | 0x1020;
  mac_write(&DAT_60031478,0x4070100);
  mac_write(&DAT_60031490,0x202);
  _DAT_60031490 = _DAT_60031490 & 0xffff80ff | 0x500;
  mac_write(0x6003147c,0x39003900);
  _DAT_6003148c = _DAT_6003148c & 0xff00ff00 | 0x820082;
  _DAT_60031474 = _DAT_60031474 & 0xffbfffff;
  _DAT_60031428 = _DAT_60031428 & 0xffffffc0 | 0x1e;
  _DAT_60031400 = _DAT_60031400 | 0x11000;
  _DAT_600314e0 = _DAT_600314e0 & 0xfc00fe00 | 0x1be012c;
  return;
}

