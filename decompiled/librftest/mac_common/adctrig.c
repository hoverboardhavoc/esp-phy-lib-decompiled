/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> adctrig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adctrig(int param_1,int param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 in_stack_00000000;
  
  _DAT_600a9004 = param_1 + 1U & 0x7fff | _DAT_600a9004 & 0xfffd8000;
  if (param_2 == 8) {
    _DAT_600a9014 = _DAT_600a9014 & 0xfe000000 | 0x4503ce;
  }
  else {
    _DAT_600a9014 = _DAT_600a9014 & 0xfe000000 | 0xc2040;
  }
  _DAT_60095004 = _DAT_60095004 & 0xfffff0ff | 0x400;
  uVar3 = param_5 << 0x18;
  uVar4 = param_6 << 0x18;
  if (param_4 == 1) {
    _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar3 | 0x800000;
  }
  else {
    if (param_4 == 3) {
      _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar4 | 0x800000;
      ets_delay_us(in_stack_00000000);
_L132:
      if (param_4 != 6) goto _L130;
      set_dump_pbus(0);
    }
    else if (param_4 == 4) {
      _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar4 | 0x800000;
    }
    else {
      if (param_4 != 5) goto _L132;
      (**(code **)(_g_phyFuns + 0x74))(0,1,param_6 & 0xffff,*(code **)(_g_phyFuns + 0x74));
    }
    ets_delay_us(1);
  }
_L130:
  if (param_2 == 0) {
    _DAT_600a9004 = _DAT_600a9004 & 0xfffdffff;
  }
  else {
    _DAT_600a9004 = _DAT_600a9004 | 0x20000;
  }
  uVar2 = _DAT_600a9004 | 0x80000000;
  switch(param_2) {
  case 0:
    _DAT_600a20b4 = _DAT_600a20b4 & 0xfffffffe;
    _DAT_600a9008 = _DAT_600a9008 | 0x78000;
    goto _L136;
  case 1:
  case 3:
    uVar1 = 0x8000;
    break;
  case 2:
    _DAT_600a9008 = _DAT_600a9008 & 0xfff87fff;
    goto _L163;
  case 4:
    uVar1 = 0x10000;
    break;
  case 5:
    uVar1 = 0x18000;
    break;
  case 6:
    uVar1 = 0x20000;
    break;
  case 7:
    _DAT_600a4e30 = _DAT_600a4e30 & 0xffffff00 | 0x100 | param_3 & 0xff;
    uVar1 = 0x28000;
    break;
  case 8:
    _DAT_600a20b4 = _DAT_600a20b4 | 1;
    _DAT_600a210c = _DAT_600a210c & 0xfff307f | 0x40000000;
    _DAT_600a9008 = _DAT_600a9008 & 0xfff87fff;
    _DAT_600a9004 = _DAT_600a9004 & 0xfffdffff | 0x80000000;
    ble_rx_start(0,0);
    ets_delay_us(200);
    _DAT_600a210c = _DAT_600a210c | 0x80;
    uVar2 = _DAT_600a9004;
  default:
    goto _L136;
  }
  _DAT_600a9008 = _DAT_600a9008 & 0xfff87fff | uVar1;
_L163:
  _DAT_600a20b4 = _DAT_600a20b4 & 0xfffffffe;
_L136:
  _DAT_600a9004 = uVar2;
  if (param_4 - 2U < 2) {
    _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar3 | 0x800000;
  }
  else if (param_4 == 0x14) {
    trig_tx_frame();
  }
  if (param_2 == 0) {
    _DAT_600a9004 = _DAT_600a9004 & 0xfff7ffff;
  }
  do {
    uVar2 = _DAT_600a9004 & 0x40000;
    if (param_4 == 4) {
      _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar3;
      ets_delay_us(in_stack_00000000);
      _DAT_600a702c = _DAT_600a702c & 0xffffff | uVar4;
_L164:
      ets_delay_us(in_stack_00000000);
    }
    else {
      if (param_4 == 10) {
        _DAT_600a2840 = _DAT_600a2840 & 0x7fffff | uVar3 | 0x800000;
        ets_delay_us(in_stack_00000000);
        _DAT_600a2840 = _DAT_600a2840 & 0x7fffff | uVar4 | 0x800000;
        goto _L164;
      }
      if (param_4 == 5) {
        (**(code **)(_g_phyFuns + 0x74))(0,1,param_5 & 0xff,*(code **)(_g_phyFuns + 0x74));
        if (0 < (int)param_5 >> 8) {
          (**(code **)(_g_phyFuns + 0x74))
                    (0,2,(int)param_5 >> 8 & 0xffff,*(code **)(_g_phyFuns + 0x74));
        }
        ets_delay_us(in_stack_00000000);
        (**(code **)(_g_phyFuns + 0x74))(0,1,param_6 & 0xff,*(code **)(_g_phyFuns + 0x74));
        if (0 < (int)param_6 >> 8) {
          (**(code **)(_g_phyFuns + 0x74))
                    (0,2,(int)param_6 >> 8 & 0xffff,*(code **)(_g_phyFuns + 0x74));
        }
        goto _L164;
      }
      if (param_4 == 6) {
        set_dump_pbus(1);
        ets_delay_us(5);
        set_dump_pbus(0);
        goto _L164;
      }
    }
    if (param_2 - 5U < 2) {
      phy_disable_cca();
      ets_delay_us(1000);
      tx_a_frame(10);
      phy_enable_cca();
    }
    if (uVar2 != 0) {
      _DAT_600a9004 = _DAT_600a9004 & 0x7fffffff;
      _DAT_60095004 = _DAT_60095004 & 0xfffff0ff;
      phy_printf("0x%x,0x%x,0x%x,0x%x\n",_DAT_600a9008 & 0x3fff,1,0x40840000,0x10000);
      return;
    }
  } while( true );
}

