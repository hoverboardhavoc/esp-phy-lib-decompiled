/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> init_param_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool init_param_read(void)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char local_90 [20];
  undefined2 uStack_7c;
  undefined1 auStack_7a [20];
  undefined1 uStack_66;
  undefined1 uStack_65;
  
  pcVar5 = local_90;
  spi_flash_attach(0,0);
  spi_flash_read(0x60000,local_90,0x80);
  iVar3 = 0;
  cVar4 = '\0';
  do {
    if (local_90[iVar3] == 'Z') {
      cVar4 = cVar4 + '\x01';
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  if (cVar4 == '\x10') {
    phy_printf("use flash init parameters\n");
    init_param_default[0x2c] = local_90[0x10];
    init_param_default[0x2d] = local_90[0x11];
    init_param_default[0x2e] = local_90[0x12];
    init_param_default[0x2f] = local_90[0x13];
    init_param_default._48_2_ = uStack_7c;
    puVar2 = init_param_default;
    do {
      puVar1 = (undefined2 *)((int)pcVar5 + 0x16);
      pcVar5 = (char *)((int)pcVar5 + 1);
      puVar2[0x3d] = *(undefined1 *)puVar1;
      puVar2 = puVar2 + 1;
    } while (pcVar5 != (char *)&uStack_7c);
    init_param_default[0x69] = uStack_66;
    init_param_default[0x6a] = uStack_65;
  }
  return cVar4 == '\x10';
}

