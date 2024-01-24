/*
 * Last changed at upstream commit 2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * https://github.com/espressif/esp-phy-lib/commit/2d319a382336cf0522ea4bb5a3fbd6701a8633c6
 * Upstream date: 2024-01-24 19:07:44 +0800
 * Upstream subject: keep regs before sleep and after wakeup are same
 * Source: librftest -> rf_test.o -> module_test_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void module_test_print(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *pcVar7;
  char cStack_24;
  char cStack_23;
  
  phy_version_print();
  uVar5 = phy_get_vdd33();
  phy_printf("vdd33=%d;\n",uVar5);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_24,_DAT_000120dc);
  pcVar6 = (code *)&phy_param;
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  get_iq_value(&cStack_24,_DAT_000120de);
  pcVar7 = (code *)&phy_param;
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC32);
  phy_printf("TXDC, ");
  do {
    pcVar1 = pcVar7 + 0xae;
    pcVar2 = pcVar7 + 0xac;
    pcVar3 = pcVar7 + 0xaa;
    pcVar4 = pcVar7 + 0xa8;
    pcVar7 = pcVar7 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar7 != __mulsf3);
  phy_printf(&_LC32);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_24,_DAT_0001210e);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC32);
  phy_printf("BT_TXDC, ");
  phy_printf("%d, %d, %d, %d; ",_DAT_00012110,_DAT_00012112,_DAT_00012114,_DAT_00012116);
  phy_printf(&_LC32);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_24,_DAT_000120e0);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  get_iq_value(&cStack_24,_DAT_000120e2);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC32);
  phy_printf("RXDC_RFRX_BT, ");
  pcVar7 = pcVar6;
  do {
    pcVar1 = pcVar7 + 0x134;
    pcVar2 = pcVar7 + 0x132;
    pcVar7 = pcVar7 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar2,(int)*(short *)pcVar1);
  } while (pcVar7 != __floatsisf);
  phy_printf(&_LC32);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    pcVar7 = pcVar6 + 0x150;
    pcVar1 = pcVar6 + 0x14e;
    pcVar6 = pcVar6 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar1,(int)*(short *)pcVar7);
  } while (pcVar6 != __fixunssfsi);
  phy_printf(&_LC32);
  return;
}

