<p align="left"><img alt="OSPTEK" src="./images/logo.png" width="200" /></p>

<h1 align="center">OSPTEK 1.6″ AMOLED 320×360 (CO5300 · QSPI)</h1>

<p align="center"><b>AMOLED module · QSPI · CO5300</b></p>

<p align="center"><a href="./README.md">简体中文</a> | English · <a href="../../README_EN.md">Family index</a></p>

<p align="center">
  <img alt="Size: 1.6 inch" src="https://img.shields.io/badge/Size-1.6%22-3498DB?style=flat-square" />
  <img alt="Resolution: 320x360" src="https://img.shields.io/badge/Resolution-320%C3%97360-8E44AD?style=flat-square" />
  <img alt="Interface: QSPI" src="https://img.shields.io/badge/Interface-QSPI-27AE60?style=flat-square" />
  <img alt="Driver: CO5300" src="https://img.shields.io/badge/Driver-CO5300-E7352C?style=flat-square" />
</p>

<p align="center"><img alt="OSPTEK 1.6&quot; 320×360 AMOLED QSPI module (CO5300) product image" src="./images/product.png" width="640" /></p>

## Contents

- [Overview](#overview)
- [Specifications](#specifications)
- [Sample projects](#sample-projects)
- [Repository layout](#repository-layout)
- [Resources](#resources)
- [Buy](#buy)
- [Support](#support)

---

## Overview

OSPTEK **1.6″ 320×360 AMOLED** is a **QSPI** color display module driven by **CO5300**, with touch controller **CST820**. It suits wearables, handheld terminals, and compact HMI.

Spec ID (repository name): `amoled-1.6-320x360-qspi-co5300`

Current module version: **AM160Q320360ZS1**. Versus discontinued [`AM160Q320360ZS`](../AM160Q320360ZS/), only the cover glass is larger; the driver, touch, interface, and examples are the same. Electrical and mechanical details follow [`docs/AM160Q320360ZS1.pdf`](./docs/AM160Q320360ZS1.pdf).

## Specifications

| Item | Spec |
| ---- | ---- |
| Size | 1.6 inch |
| Type | AMOLED (color) |
| Resolution | 320×360 |
| Interface | QSPI |
| Driver IC | CO5300 |
| Touch IC | CST820 |

> Full outline, FPC definition, power, and timing follow the product datasheet / driver IC datasheet.

## Sample projects

| Description | Path |
| ---- | ---- |
| ESP32-S3 · CO5300 QSPI bringup (LVGL9) | [`examples/esp32s3-amoled-1.6-320x360-qspi-co5300-bringup/`](./examples/esp32s3-amoled-1.6-320x360-qspi-co5300-bringup/) |
| ESP32-S3 · CO5300 QSPI + esp-lvgl-adapter / LVGL8 | [`examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8/`](./examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8/) |
| ESP32-S3 · CO5300 QSPI + esp-lvgl-adapter / LVGL9 | [`examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9/`](./examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9/) |
| ESP32-S3 · LVGL8 + TE | [`examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8_amoled-with-te/`](./examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8_amoled-with-te/) |
| ESP32-S3 · LVGL9 + TE | [`examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9_amoled-with-te/`](./examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9_amoled-with-te/) |

## Repository layout

```text
amoled-1.6-320x360-qspi-co5300/                                # repo root (nav: ../../README_EN.md)
└── versions/
    ├── AM160Q320360ZS1/                               # full materials for this part number (current)
    │   ├── README.md
    │   ├── README_EN.md
    │   ├── images/
    │   ├── docs/
    │   └── examples/
    └── AM160Q320360ZS/                                # 停产 / EOL
```

## Resources

### Product files

| Resource | Link |
| ---- | ---- |
| Product datasheet (AM160Q320360ZS1) | [`docs/AM160Q320360ZS1.pdf`](./docs/AM160Q320360ZS1.pdf) |
| 3D drawing (AM160Q320360ZS1) | [`docs/AM160Q320360ZS1.dwg`](./docs/AM160Q320360ZS1.dwg) |
| Driver IC datasheet (CO5300) | [`docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf`](./docs/CO_5300_Datasheet_V0_00_20230328_07edb82936.pdf) |
| Touch IC datasheet (CST820) | [`docs/DS_CST_820_V1_2_e0543732ca.pdf`](./docs/DS_CST_820_V1_2_e0543732ca.pdf) |
| Adapter schematic (same as AM160Q320360ZS) | [`docs/1.6寸屏幕转接板_AM160Q320360ZS.pdf`](./docs/1.6%E5%AF%B8%E5%B1%8F%E5%B9%95%E8%BD%AC%E6%8E%A5%E6%9D%BF_AM160Q320360ZS.pdf) |

### Samples

- [ESP32-S3 CO5300 QSPI bringup](./examples/esp32s3-amoled-1.6-320x360-qspi-co5300-bringup/)
- [ESP32-S3 CO5300 QSPI + LVGL8](./examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8/)
- [ESP32-S3 CO5300 QSPI + LVGL9](./examples/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9/)
- [ESP32-S3 LVGL8 + TE](./examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl8_amoled-with-te/)
- [ESP32-S3 LVGL9 + TE](./examples/with-te/esp32s3-idf5_co5300-qspi_esp-lvgl-adapter_lvgl9_amoled-with-te/)

## Buy

<p align="center">
  <a href="https://www.aliexpress.com/store/1105701619"><img alt="AliExpress store" src="https://img.shields.io/badge/AliExpress-Official_Store-FF6A00?style=for-the-badge" /></a>
  &nbsp;&nbsp;
  <a href="https://shop110742373.taobao.com/"><img alt="Taobao store" src="https://img.shields.io/badge/Taobao-Official_Store-FF6A00?style=for-the-badge" /></a>
</p>

**Overseas (AliExpress)**

- Store: [OSPTEK Official Store](https://www.aliexpress.com/store/1105701619)

**China (Taobao)**

- Store: [鱼鹰光电工厂店](https://shop110742373.taobao.com/)

## Support

- Technical support / product inquiry: <luyu@osptek.com>
- QQ group (China): **985881096**
- Website: <https://osptek.com/>
- Feel free to open an Issue in this repository if you have any questions

---

<p align="center"><sub>© 2026 OSPTEK · Materials in this repository are licensed under CC BY 4.0</sub></p>
