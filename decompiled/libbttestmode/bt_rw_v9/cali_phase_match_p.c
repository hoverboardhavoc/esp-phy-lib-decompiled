/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_v9.o -> cali_phase_match_p
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cali_phase_match_p(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  _DAT_600310f8 = _DAT_600310f8 & 0xfffff00e | 1;
  ets_delay_us(1);
  iVar4 = 0;
  do {
    if ((_DAT_600310f8 & 0x1000) != 0) {
      return;
    }
    iVar1 = iVar5;
    iVar2 = iVar5;
    if (iVar5 == 0) {
      iVar3 = iVar4;
      if (iVar4 == 0) {
_L25:
        iVar5 = iVar3;
        iVar4 = 1;
      }
      else if (iVar4 == 1) {
_L26:
        iVar5 = iVar2;
        iVar4 = 2;
      }
      else if (iVar4 == 2) {
_L27:
        iVar5 = iVar1;
        iVar4 = 3;
      }
      else if (iVar4 == 3) {
        iVar4 = 0;
        iVar5 = 1;
      }
    }
    else {
      iVar3 = iVar5;
      if (iVar5 == 1) {
        if (iVar4 == 0) goto _L25;
        iVar2 = iVar4;
        if (iVar4 == 1) goto _L26;
        if (iVar4 == 2) goto _L27;
        if (iVar4 == 3) {
          iVar4 = 0;
          iVar5 = 2;
        }
      }
      else if (iVar5 == 2) {
        if (iVar4 == 0) goto _L25;
        if (iVar4 == 1) goto _L26;
        iVar1 = iVar4;
        if (iVar4 == 2) goto _L27;
        if (iVar4 == 3) {
          iVar5 = 3;
          iVar4 = 0;
        }
      }
      else if (iVar5 == 3) {
        if (iVar4 == 0) goto _L25;
        if (iVar4 == 1) goto _L26;
        if (iVar4 == 2) goto _L27;
        if (iVar4 == 3) {
          phy_printf("phase match cali failed!\n");
          return;
        }
      }
    }
    _DAT_600310f8 = _DAT_600310f8 & 0xfffff00e | iVar5 << 8 | iVar4 << 4 | 1;
    ets_delay_us(1);
  } while( true );
}

