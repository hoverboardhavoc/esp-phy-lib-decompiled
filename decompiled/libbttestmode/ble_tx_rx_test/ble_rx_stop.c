/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_rx_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_rx_stop(void *param_1,uint *param_2)

{
  undefined *puVar1;
  uint __n;
  int iVar2;
  
  if ((_DAT_600c1450 != 1) || (rx_en_flag == '\0')) {
    _DAT_600c1410 = 1;
    phy_printf("ble rx failed\n");
    rx_en_flag = 0;
    return 0;
  }
  __n = (uint)DAT_000111a0;
  if (param_2 != (uint *)0x0) {
    if ((*param_2 != 0) && ((int)*param_2 < (int)__n)) {
      phy_printf("Buffer size is so small!expect %d,actually is %d\n",__n);
      return 1;
    }
    *param_2 = __n;
  }
  _DAT_600c1450 = 0;
  _DAT_600c1410 = 1;
  memcpy(param_1,&DAT_000111a1,__n);
  puVar1 = &_LANCHOR3;
  for (iVar2 = 3; iVar2 <= (int)(__n + 1); iVar2 = iVar2 + 8) {
    phy_printf("%x %x %x %x %x %x %x %x",puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],puVar1[8]
               ,puVar1[9]);
    puVar1 = puVar1 + 8;
  }
  phy_printf("ble rx success");
  memset(&_LANCHOR3,0x55,0x140);
  rx_en_flag = 0;
  return 1;
}

