/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: librftest -> wifi.o -> rx_2440m_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_2440m_opt(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  char local_ac [4];
  uint local_a8 [12];
  uint uStack_78;
  int iStack_74;
  
  local_ac[0] = '\x17';
  local_ac[1] = '\x17';
  if (rx_2440_opt_en != '\0') {
    rx_2440_opt_time = _DAT_60035000;
    phy_set_freq(0x98c,0);
    pcVar8 = local_ac;
    _DAT_6001c02c = _DAT_6001c02c & 0xffffff | 0x4b800000;
    iVar3 = 0;
    uVar11 = 0;
    uVar9 = 0;
    while( true ) {
      puVar10 = local_a8;
      cVar1 = '\0';
      puVar12 = puVar10;
      do {
        uVar4 = 4;
        if (iVar3 != 0) {
          uVar4 = 6;
        }
        (**(code **)(_g_phyFuns + 0x1bc))
                  (0x6d,0,uVar4,4,0,cVar1 + '\x15',*(code **)(_g_phyFuns + 0x1bc));
        ets_delay_us(10);
        *puVar12 = 0;
        puVar12[1] = 0;
        iVar13 = 2;
        while( true ) {
          start_tx_tone_step(1,0xffffff99,0,0,0,0);
          freq_offset_get_pwr(6,10,&uStack_78,local_ac + 2,0,0);
          iVar2 = iStack_74;
          uVar6 = uStack_78;
          uVar7 = *puVar12;
          uVar14 = puVar12[1];
          start_tx_tone_step(1,0xffffff9a,0,0,0,0);
          freq_offset_get_pwr(6,10,&uStack_78,local_ac + 2,0,0);
          uVar5 = uStack_78 + uVar6;
          uVar7 = uVar5 + uVar7;
          uVar6 = (uint)(uVar7 < uVar5) + (uint)(uVar5 < uVar6) + iVar2 + iStack_74 + uVar14;
          *puVar12 = uVar7;
          puVar12[1] = uVar6;
          if (iVar13 == 1) break;
          iVar13 = 1;
        }
        uVar14 = uVar7 >> 0x13 | uVar6 * 0x2000;
        uVar6 = uVar6 >> 0x13;
        *puVar12 = uVar14;
        uVar7 = local_a8[0];
        puVar12[1] = uVar6;
        uVar5 = local_a8[1];
        if (cVar1 == '\0') {
          *pcVar8 = '\x15';
          uVar9 = uVar5;
          uVar11 = uVar7;
        }
        else if ((uVar6 < uVar9) || ((uVar9 == uVar6 && (uVar14 < uVar11)))) {
          *pcVar8 = cVar1 + '\x15';
          uVar9 = uVar6;
          uVar11 = uVar14;
        }
        cVar1 = cVar1 + '\x01';
        puVar12 = puVar12 + 2;
      } while (cVar1 != '\x06');
      if (iVar3 == 0) {
        uVar4 = 4;
        cVar1 = local_ac[0];
      }
      else {
        uVar4 = 6;
        cVar1 = local_ac[1];
      }
      (**(code **)(_g_phyFuns + 0x1bc))(0x6d,0,uVar4,4,0,cVar1,*(code **)(_g_phyFuns + 0x1bc));
      if (rx_2440_print_en != '\0') {
        iVar13 = 0x15;
        do {
          iVar2 = iVar13 + 1;
          phy_printf("%d, dreg=%d, sig_pwr=%lld\n",iVar3,iVar13,*puVar10,puVar10[1]);
          puVar10 = puVar10 + 2;
          iVar13 = iVar2;
        } while (iVar2 != 0x1b);
        phy_printf("%d, dreg=%d, sig_pwr=%lld\n",iVar3,*pcVar8,uVar11,uVar9);
      }
      pcVar8 = pcVar8 + 1;
      if (iVar3 != 0) break;
      iVar3 = 1;
    }
    _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | 0x32000000;
  }
  phy_printf("rtc_dreg=%d, dig_dreg=%d\n",local_ac[0],local_ac[1]);
  return;
}

