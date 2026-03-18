/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_rx_print(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  ble_radio_init();
  ble_whitening_enable(0);
  iVar8 = 0;
  iVar7 = 0;
  iVar5 = 0;
  iVar6 = 0;
  iVar9 = 0;
  iVar4 = 0;
  iVar1 = 0;
  do {
    ble_rx_start(param_1,param_2);
    while (_DAT_600c1450 == 0) {
      iVar2 = GetStopCmd();
      if (iVar2 == 0) {
        _DAT_600c1410 = 1;
        _DAT_6004905c = 1;
        if (iVar1 == 0) {
          if ((_DAT_60093004 & 0x100) == 0) {
            _DAT_60093004 = _DAT_60093004 | 0x100;
          }
          else {
            _DAT_60093004 = _DAT_60093004 & 0xfffffeff;
          }
        }
        ets_printf("RX %d %d %d %d %d %d %d %d\n",iVar1,iVar4,iVar5,iVar6,iVar7,iVar8,iVar9);
        return;
      }
    }
    iVar2 = ble_rx_check_status();
    cVar3 = (char)_DAT_600c1548;
    if (iVar2 == 0) {
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + cVar3;
      iVar6 = iVar6 + (_DAT_600c20b0 >> 8 & 0xff);
      iVar7 = iVar7 + (char)_DAT_600c20b0;
      ets_printf(&_LC9,(int)cVar3);
    }
    else {
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + cVar3;
      iVar9 = iVar9 + (_DAT_600c20b0 >> 8 & 0xff);
    }
  } while( true );
}

