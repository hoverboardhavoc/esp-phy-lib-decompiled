/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> adctrig
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adctrig(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,uint param_7,
            uint param_8)

{
  uint uVar1;
  undefined2 in_stack_00000000;
  
  _DAT_60033d5c =
       (param_5 & 1) * 0x20000 + param_2 * 0x10000000 + (uint)((param_4 & 1) == 0) * 0x10000 +
       param_3 * 0x100000 + param_1 + 1;
  _DAT_600c1020 = _DAT_600c1020 & 0xfffffff8 | 10;
  uVar1 = param_8 << 0x18;
  if (param_6 == 4) {
    _DAT_6001c02c = _DAT_6001c02c & 0xffffff | uVar1 | 0x800000;
_L132:
    ets_delay_us(1);
  }
  else if (param_6 == 5) {
    (**(code **)(_g_phyFuns + 0x1cc))(0,1,param_8 & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
    goto _L132;
  }
  _DAT_60033d5c = _DAT_60033d5c | 0x80000000;
  if (param_6 == 1) {
    _DAT_6001c02c = _DAT_6001c02c & 0xffffff | param_7 << 0x18 | 0x800000;
    if (param_2 != 0) goto _L112;
_L116:
    _DAT_60033d5c = _DAT_60033d5c & 0xfff7ffff;
_L118:
    if (1 < param_6 - 2U) goto _L112;
  }
  else {
    if (param_6 != 3) {
      if (param_2 == 0) {
        if (param_6 == 10) {
          tx_a_frame_trig();
          ets_delay_us(in_stack_00000000);
        }
        goto _L116;
      }
      goto _L118;
    }
    _DAT_6001c02c = _DAT_6001c02c & 0xffffff | uVar1 | 0x800000;
    ets_delay_us(in_stack_00000000);
    if (param_2 == 0) goto _L116;
  }
  _DAT_6001c02c = _DAT_6001c02c & 0xffffff | param_7 << 0x18 | 0x800000;
_L112:
  do {
    do {
      if ((int)(_DAT_60033d5c << 0xd) < 0) {
        _DAT_600c1020 = _DAT_600c1020 & 0xfffffff8;
        ets_delay_us(1000);
        if ((param_1 + 1U != ((_DAT_60033d60 >> 0xe & 1) << 0xe | _DAT_60033d60 & 0x3fff)) &&
           (param_5 == 0)) {
          phy_printf("fail: 0x%x,0x%x,0x%x,0x%x,0x%x\n",param_1,param_2,param_3,param_4,0);
          return;
        }
        _DAT_60033d5c = _DAT_60033d5c & 0x7fffffff;
        phy_printf("0x%x,0x%x,0x%x,0x%x\n",_DAT_60033d60 & 0x3fff,0x3fcb0000,0x10000);
        phy_printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n",param_1,param_2,param_3,param_4,param_5,param_6,
                   param_7);
        return;
      }
      if (param_6 == 4) {
        _DAT_6001c02c = _DAT_6001c02c & 0xffffff | param_7 << 0x18;
        ets_delay_us(in_stack_00000000);
        _DAT_6001c02c = _DAT_6001c02c & 0xffffff | uVar1;
_L133:
        ets_delay_us(in_stack_00000000);
      }
      else if (param_6 == 5) {
        (**(code **)(_g_phyFuns + 0x1cc))(0,1,param_7 & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
        ets_delay_us(in_stack_00000000);
        (**(code **)(_g_phyFuns + 0x1cc))(0,1,param_8 & 0xffff,*(code **)(_g_phyFuns + 0x1cc));
        goto _L133;
      }
    } while (1 < param_2 - 5U);
    (**(code **)(_g_phyFuns + 0x10))(*(code **)(_g_phyFuns + 0x10));
    ets_delay_us(1000);
    tx_a_frame(10);
    (**(code **)(_g_phyFuns + 0x14))(*(code **)(_g_phyFuns + 0x14));
  } while( true );
}

