/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_txcap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_txcap(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar8 = 0;
  start_tx_tone_step(1,param_1,param_2,0,0,0);
  do {
    bVar1 = (&_LANCHOR1)[uVar8];
    uVar9 = uVar8 & 0xff;
    *param_4 = 0;
    iVar10 = 0;
    bVar2 = 0;
    do {
      if (uVar9 == 1) {
        uVar6 = 0;
        uVar5 = 3;
_L286:
        uVar4 = 2;
      }
      else {
        if (uVar9 == 2) {
          uVar6 = 4;
          uVar5 = 7;
          goto _L286;
        }
        uVar6 = 0;
        uVar5 = 3;
        uVar4 = 1;
      }
      (**(code **)(_g_phyFuns + 0x1bc))
                (0x6b,0,uVar4,uVar5,uVar6,bVar2,*(code **)(_g_phyFuns + 0x1bc));
      sVar3 = get_tone_sar_dout(4);
      iVar7 = (int)sVar3;
      if (param_3 != 0) {
        phy_printf("%d, %d; ",bVar2,iVar7);
      }
      if (iVar10 < iVar7) {
        *param_4 = bVar2;
        iVar10 = iVar7;
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 <= bVar1);
    if (param_3 != 0) {
      phy_printf("reg_i=%d, indata=%d\n",uVar8,*param_4);
    }
    if (uVar9 == 1) {
      uVar6 = 0;
      uVar5 = 3;
_L288:
      uVar4 = 2;
    }
    else {
      if (uVar9 == 2) {
        uVar6 = 4;
        uVar5 = 7;
        goto _L288;
      }
      uVar6 = 0;
      uVar5 = 3;
      uVar4 = 1;
    }
    (**(code **)(_g_phyFuns + 0x1bc))
              (0x6b,0,uVar4,uVar5,uVar6,*param_4,*(code **)(_g_phyFuns + 0x1bc));
    uVar8 = uVar8 + 1;
    param_4 = param_4 + 1;
    if (uVar8 == 3) {
      stop_tx_tone(1);
      return;
    }
  } while( true );
}

