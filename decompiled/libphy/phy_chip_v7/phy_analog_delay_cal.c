/*
 * Last changed at upstream commit fe7dc9599bd318518eccc165d9e751114e28e7d2
 * https://github.com/espressif/esp-phy-lib/commit/fe7dc9599bd318518eccc165d9e751114e28e7d2
 * Upstream date: 2021-11-08 20:19:30 +0800
 * Upstream subject: fix the issue of phy register context loss caused by power off the wifi power domain
 * Source: libphy -> phy_chip_v7.o -> phy_analog_delay_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_analog_delay_cal(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte local_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_60 [20];
  byte abStack_4c [36];
  
  uStack_68 = 0x1000100;
  uStack_64 = 0x1000100;
  memcpy(local_60,&DAT_00014598,0x15);
  memcpy(abStack_4c + 4,&DAT_000145b0,0x15);
  if ((int)(DAT_00014808 << 6) < 0) {
    return;
  }
  iVar7 = 0;
  (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  (**(code **)(g_phyFuns + 0x1cc))(0,1,0x104,*(code **)(g_phyFuns + 0x1cc));
  (**(code **)(g_phyFuns + 0x1cc))(1,2,0x20,*(code **)(g_phyFuns + 0x1cc));
  (**(code **)(g_phyFuns + 0x1cc))(1,1,0x1c9,*(code **)(g_phyFuns + 0x1cc));
  (**(code **)(g_phyFuns + 0x50))(1,*(code **)(g_phyFuns + 0x50));
  (**(code **)(g_phyFuns + 0x54))(1,*(code **)(g_phyFuns + 0x54));
  _DAT_6000607c = _DAT_6000607c & 0xf7fff7ff;
  _DAT_60006078 = _DAT_60006078 & 0xfdffffff;
  do {
    (**(code **)(g_phyFuns + 0x1cc))(4,2,iVar7 << 5,*(code **)(g_phyFuns + 0x1cc));
    pbus_rx_dco_cal(4000,&uStack_68,10,0,0);
    start_tx_tone_step(1,0x40,0x18,0,0,0);
    ets_delay_us(1);
    (**(code **)(g_phyFuns + 0x104))(1,0xfff,*(code **)(g_phyFuns + 0x104));
    iVar8 = _DAT_60006148 + _DAT_60006154;
    iVar6 = _DAT_60006150 - _DAT_6000614c;
    (**(code **)(g_phyFuns + 0x108))(*(code **)(g_phyFuns + 0x108));
    stop_tx_tone(1);
    iVar6 = iVar6 / (iVar8 >> 6);
    if (iVar7 == 0) {
      pbVar4 = local_60;
      cVar2 = -100;
      bVar1 = local_60[0];
    }
    else {
      pbVar4 = abStack_4c + 4;
      cVar2 = -0x7a;
      bVar1 = abStack_4c[4];
    }
    cVar3 = '\0';
    if (((int)(uint)bVar1 <= iVar6) && (cVar3 = '\x14', iVar6 <= (int)(uint)pbVar4[0x14])) {
      cVar3 = '\0';
      do {
        if (((int)(uint)*pbVar4 <= iVar6) && (iVar6 < (int)(uint)pbVar4[1])) break;
        cVar3 = cVar3 + '\x01';
        pbVar4 = pbVar4 + 1;
      } while (cVar3 != '\x14');
    }
    local_6c[iVar7] = cVar2 + -0x58 + cVar3;
    if ((cVar3 == '\0') || (cVar3 == '\x14')) {
      phy_printf("phy_filt_delay fail!!!, k=%d\n");
    }
    if (iVar7 != 0) {
      iVar7 = (int)(((uint)local_6c[0] - (uint)local_6c[1]) * 0x1000000) >> 0x18;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      uVar5 = (uint)local_6c[1] - iVar7 & 0xff;
      iVar7 = (int)((uVar5 - 0x1c) * 0x1000000) >> 0x18;
      cVar2 = '\x04';
      if (iVar7 < 5) {
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        cVar2 = (char)iVar7;
        cVar3 = '\0';
      }
      else {
        cVar3 = (char)((uVar5 - 0x20) * 0x1000000 >> 0x18);
      }
      DAT_000148f8 = ((local_6c[0] * '\x02' + -0x1c) - cVar2) - cVar3;
      DAT_000148f9 = ((local_6c[1] * '\x02' + -0x1c) - cVar2) - cVar3;
      _DAT_6000607c = _DAT_6000607c | 0x8000800;
      _DAT_60006078 = _DAT_60006078 | 0x2000000;
      (**(code **)(g_phyFuns + 0x50))(0,*(code **)(g_phyFuns + 0x50));
      (**(code **)(g_phyFuns + 0x54))(0,*(code **)(g_phyFuns + 0x54));
      (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
      (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
      DAT_00014808 = DAT_00014808 | 0x2000000;
      return;
    }
    iVar7 = 1;
  } while( true );
}

