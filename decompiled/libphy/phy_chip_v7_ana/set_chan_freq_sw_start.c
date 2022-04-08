/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_ana.o -> set_chan_freq_sw_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 set_chan_freq_sw_start(uint param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
  correct_rfpll_offset(param_2,param_3,&phy_param);
  _DAT_6000e150 = _DAT_6000e150 & 0xf00fffff | param_1 << 0x14;
  _DAT_6000e0c4 = (param_1 & 0x7f) << 1 | _DAT_6000e0c4 & 0xffffff00;
  cVar1 = '\x03';
  do {
    do {
    } while (_DAT_6000e168 < 0);
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffeff;
    ets_delay_us(1);
    do {
    } while (_DAT_6000e168 < 0);
  } while ((param_1 != (_DAT_6000e170 >> 0x11 & 0x7f)) && (cVar1 = cVar1 + -1, cVar1 != '\0'));
  uVar4 = ets_delay_us(5);
  cVar1 = DAT_0001209f;
  if (DAT_000120a0 == '\0') {
    return uVar4;
  }
  uVar3 = (**(code **)(_g_phyFuns + 0x1ac))(0x62,1,0xc,*(code **)(_g_phyFuns + 0x1ac));
  uVar3 = uVar3 >> 2 & 3;
  if (uVar3 == 1) {
    uVar4 = 4;
  }
  else {
    uVar4 = 0xfffffffc;
    if (uVar3 != 2) {
      uVar4 = 0;
      iVar6 = 0;
      iVar5 = 0;
      goto _L13;
    }
  }
  sVar2 = read_pll_cap();
  iVar5 = (int)sVar2;
  iVar6 = (int)(short)(sVar2 + (short)uVar4);
  ram_write_pll_cap();
  pll_cap_mem_update(uVar4);
_L13:
  if (cVar1 != '\0') {
    phy_printf("%d,%d,%d\n",uVar4,iVar5,iVar6);
  }
  return uVar4;
}

