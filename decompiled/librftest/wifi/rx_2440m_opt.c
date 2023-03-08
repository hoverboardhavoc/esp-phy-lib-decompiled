/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rx_2440m_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_2440m_opt(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
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
    iVar4 = 0;
    uVar11 = 0;
    uVar9 = 0;
    while( true ) {
      puVar10 = local_a8;
      cVar2 = '\0';
      puVar12 = puVar10;
      do {
        uVar5 = 4;
        if (iVar4 != 0) {
          uVar5 = 6;
        }
        (**(code **)(_g_phyFuns + 0x1bc))
                  (0x6d,0,uVar5,4,0,cVar2 + '\x15',*(code **)(_g_phyFuns + 0x1bc));
        ets_delay_us(10);
        *puVar12 = 0;
        puVar12[1] = 0;
        iVar13 = 2;
        while( true ) {
          freq_offset_get_pwr(6,0xffffff99,10,&uStack_78,local_ac + 2,0,0);
          iVar3 = iStack_74;
          uVar7 = uStack_78;
          uVar1 = *puVar12;
          uVar14 = puVar12[1];
          freq_offset_get_pwr(6,0xffffff9a,10,&uStack_78,local_ac + 2,0,0);
          uVar6 = uStack_78 + uVar7;
          uVar1 = uVar6 + uVar1;
          uVar7 = (uint)(uVar1 < uVar6) + uVar14 + (uint)(uVar6 < uVar7) + iVar3 + iStack_74;
          *puVar12 = uVar1;
          puVar12[1] = uVar7;
          if (iVar13 == 1) break;
          iVar13 = 1;
        }
        uVar14 = uVar1 >> 0x13 | uVar7 * 0x2000;
        uVar7 = uVar7 >> 0x13;
        *puVar12 = uVar14;
        uVar1 = local_a8[0];
        puVar12[1] = uVar7;
        uVar6 = local_a8[1];
        if (cVar2 == '\0') {
          *pcVar8 = '\x15';
          uVar9 = uVar6;
          uVar11 = uVar1;
        }
        else if ((uVar7 < uVar9) || ((uVar9 == uVar7 && (uVar14 < uVar11)))) {
          *pcVar8 = cVar2 + '\x15';
          uVar9 = uVar7;
          uVar11 = uVar14;
        }
        cVar2 = cVar2 + '\x01';
        puVar12 = puVar12 + 2;
      } while (cVar2 != '\x06');
      if (iVar4 == 0) {
        uVar5 = 4;
        cVar2 = local_ac[0];
      }
      else {
        uVar5 = 6;
        cVar2 = local_ac[1];
      }
      (**(code **)(_g_phyFuns + 0x1bc))(0x6d,0,uVar5,4,0,cVar2,*(code **)(_g_phyFuns + 0x1bc));
      if (rx_2440_print_en != '\0') {
        iVar13 = 0x15;
        do {
          iVar3 = iVar13 + 1;
          phy_printf("%d, dreg=%d, sig_pwr=%lld\n",iVar4,iVar13,*puVar10,puVar10[1]);
          puVar10 = puVar10 + 2;
          iVar13 = iVar3;
        } while (iVar3 != 0x1b);
        phy_printf("%d, dreg=%d, sig_pwr=%lld\n",iVar4,*pcVar8,uVar11,uVar9);
      }
      pcVar8 = pcVar8 + 1;
      if (iVar4 == 1) break;
      iVar4 = 1;
    }
    _DAT_6001c02c = _DAT_6001c02c & 0x7fffff | 0x32000000;
  }
  phy_printf("rtc_dreg=%d, dig_dreg=%d\n",local_ac[0],local_ac[1]);
  return;
}

