/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> beacon_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void beacon_print(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  set_mac_filter(0x7060504,0x908);
  iVar2 = _DAT_60035000;
  uVar1 = _DAT_6001c018;
  _DAT_60033800 = 0;
  _DAT_60035004 = 0;
  uVar5 = 0;
  _DAT_60033c40 = _DAT_60033c40 | 0xc;
  iVar3 = get_rxctrl_addr();
  iVar6 = 0;
  do {
    if ((_DAT_60033c3c & 4) == 0) {
      if ((_DAT_60033c3c & 8) != 0) {
        uVar5 = _DAT_6001c06c & 0xff;
        _DAT_60033c40 = _DAT_60033c40 | 8;
      }
    }
    else {
      if ((_DAT_600330a8 & 0xff) == 0) {
        if (((((_DAT_600330ac >> 0x16 & 3) == 0 && (_DAT_600330ac >> 0x10 & 0x1f) == 0) &&
             (*(int *)(iVar3 + 0x30) == 0x80)) && (*(int *)(iVar3 + 0x34) == -1)) &&
           ((*(uint *)(iVar3 + 0x38) & 0xffff) == 0xffff)) {
          uVar4 = _DAT_600330ac >> 0x18;
          if ((int)_DAT_600330ac < 0) {
            uVar4 = uVar4 - 0x100;
          }
          phy_printf("i= %d, time=%d, mac=0x%x-%x, rssi=%d, gain=%d, rate=%d\n",iVar6,_DAT_60035000,
                     *(uint *)(iVar3 + 0x38) >> 0x10,*(undefined4 *)(iVar3 + 0x3c),
                     uVar4 + (int)((uVar1 >> 5 | 0xfffffc00) * 10) / 0x28,uVar5,0);
          iVar6 = iVar6 + 1;
        }
      }
      _DAT_60033c40 = _DAT_60033c40 | 0xc;
    }
  } while ((uint)(_DAT_60035000 - iVar2) <= param_1);
  _DAT_60033c40 = _DAT_60033c40 | 0xc;
  return;
}

