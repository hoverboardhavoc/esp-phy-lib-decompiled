/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> phy_dig_reg_backup
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 phy_dig_reg_backup(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *param_2;
    DAT_60012451 = (undefined1)uVar1;
    DAT_60012452 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012453 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012454 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[1];
    DAT_60012351 = (undefined1)uVar1;
    DAT_60012352 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012353 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012354 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[2];
    DAT_60012449 = (undefined1)uVar1;
    DAT_6001244a = (undefined1)((uint)uVar1 >> 8);
    DAT_6001244b = (undefined1)((uint)uVar1 >> 0x10);
    DAT_6001244c = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[3];
    DAT_600123b9 = (undefined1)uVar1;
    DAT_600123ba = (undefined1)((uint)uVar1 >> 8);
    DAT_600123bb = (undefined1)((uint)uVar1 >> 0x10);
    DAT_600123bc = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[4];
    DAT_60012461 = (undefined1)uVar1;
    DAT_60012462 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012463 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012464 = (undefined1)((uint)uVar1 >> 0x18);
    _DAT_600a08b0 = param_2[5];
    _DAT_600a08b4 = param_2[6];
    _DAT_600a08b8 = param_2[7];
    _DAT_600a08bc = param_2[8];
    uVar1 = param_2[9];
    DAT_600123a5 = (undefined1)uVar1;
    DAT_600123a6 = (undefined1)((uint)uVar1 >> 8);
    DAT_600123a7 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_600123a8 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[10];
    DAT_600123c1 = (undefined1)uVar1;
    DAT_600123c2 = (undefined1)((uint)uVar1 >> 8);
    DAT_600123c3 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_600123c4 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0xb];
    DAT_60012371 = (undefined1)uVar1;
    DAT_60012372 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012373 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012374 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0xc];
    DAT_6001235d = (undefined1)uVar1;
    DAT_6001235e = (undefined1)((uint)uVar1 >> 8);
    DAT_6001235f = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012360 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0xd];
    DAT_60012361 = (undefined1)uVar1;
    DAT_60012362 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012363 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012364 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0xe];
    DAT_60012355 = (undefined1)uVar1;
    DAT_60012356 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012357 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012358 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0xf];
    DAT_60012359 = (undefined1)uVar1;
    DAT_6001235a = (undefined1)((uint)uVar1 >> 8);
    DAT_6001235b = (undefined1)((uint)uVar1 >> 0x10);
    DAT_6001235c = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0x10];
    DAT_60012389 = (undefined1)uVar1;
    DAT_6001238a = (undefined1)((uint)uVar1 >> 8);
    DAT_6001238b = (undefined1)((uint)uVar1 >> 0x10);
    DAT_6001238c = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0x11];
    DAT_6001244d = (undefined1)uVar1;
    DAT_6001244e = (undefined1)((uint)uVar1 >> 8);
    DAT_6001244f = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012450 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0x12];
    DAT_60012411 = (undefined1)uVar1;
    DAT_60012412 = (undefined1)((uint)uVar1 >> 8);
    DAT_60012413 = (undefined1)((uint)uVar1 >> 0x10);
    DAT_60012414 = (undefined1)((uint)uVar1 >> 0x18);
    uVar1 = param_2[0x13];
    DAT_60012469 = (undefined1)uVar1;
    DAT_6001246a = (undefined1)((uint)uVar1 >> 8);
    DAT_6001246b = (undefined1)((uint)uVar1 >> 0x10);
    DAT_6001246c = (undefined1)((uint)uVar1 >> 0x18);
  }
  else {
    *param_2 = CONCAT13(DAT_60012454,CONCAT12(DAT_60012453,CONCAT11(DAT_60012452,DAT_60012451)));
    param_2[1] = CONCAT13(DAT_60012354,CONCAT12(DAT_60012353,CONCAT11(DAT_60012352,DAT_60012351)));
    param_2[2] = CONCAT13(DAT_6001244c,CONCAT12(DAT_6001244b,CONCAT11(DAT_6001244a,DAT_60012449)));
    param_2[3] = CONCAT13(DAT_600123bc,CONCAT12(DAT_600123bb,CONCAT11(DAT_600123ba,DAT_600123b9)));
    param_2[4] = CONCAT13(DAT_60012464,CONCAT12(DAT_60012463,CONCAT11(DAT_60012462,DAT_60012461)));
    param_2[5] = _DAT_600a08b0;
    param_2[6] = _DAT_600a08b4;
    param_2[7] = _DAT_600a08b8;
    param_2[8] = _DAT_600a08bc;
    param_2[9] = CONCAT13(DAT_600123a8,CONCAT12(DAT_600123a7,CONCAT11(DAT_600123a6,DAT_600123a5)));
    param_2[10] = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1)));
    param_2[0xb] = CONCAT13(DAT_60012374,CONCAT12(DAT_60012373,CONCAT11(DAT_60012372,DAT_60012371)))
    ;
    param_2[0xc] = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d)))
    ;
    param_2[0xd] = CONCAT13(DAT_60012364,CONCAT12(DAT_60012363,CONCAT11(DAT_60012362,DAT_60012361)))
    ;
    param_2[0xe] = CONCAT13(DAT_60012358,CONCAT12(DAT_60012357,CONCAT11(DAT_60012356,DAT_60012355)))
    ;
    param_2[0xf] = CONCAT13(DAT_6001235c,CONCAT12(DAT_6001235b,CONCAT11(DAT_6001235a,DAT_60012359)))
    ;
    param_2[0x10] =
         CONCAT13(DAT_6001238c,CONCAT12(DAT_6001238b,CONCAT11(DAT_6001238a,DAT_60012389)));
    param_2[0x11] =
         CONCAT13(DAT_60012450,CONCAT12(DAT_6001244f,CONCAT11(DAT_6001244e,DAT_6001244d)));
    param_2[0x12] =
         CONCAT13(DAT_60012414,CONCAT12(DAT_60012413,CONCAT11(DAT_60012412,DAT_60012411)));
    param_2[0x13] =
         CONCAT13(DAT_6001246c,CONCAT12(DAT_6001246b,CONCAT11(DAT_6001246a,DAT_60012469)));
  }
  return 0x14;
}

