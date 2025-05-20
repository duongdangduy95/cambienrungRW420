# 🚨 Dự án cảm biến rung SW-420 với Arduino

Dự án này sử dụng cảm biến rung **SW-420** để phát hiện va chạm hoặc rung động, sau đó điều khiển đèn LED báo hiệu trên kit **Arduino UNO**. Khi có rung động, LED sẽ sáng và thông báo sẽ được in ra **Serial Monitor**.

---

## 🎯 Mục tiêu

- Làm quen với cảm biến rung SW-420
- Phát hiện rung động bằng tín hiệu số
- Báo rung bằng đèn LED và Serial

---



## 🧾 Giới thiệu về kit Arduino UNO

**Arduino UNO R3** là bo mạch vi điều khiển dựa trên chip ATmega328P. Nó có:

- 14 chân digital (6 chân PWM)
- 6 chân analog
- 1 cổng USB nạp code
- Tích hợp nút reset, đèn LED, giao tiếp I2C, SPI

Đây là một nền tảng mã nguồn mở lý tưởng cho người mới bắt đầu học lập trình nhúng và làm các dự án điện tử.

---

## 🔌 Sơ đồ kết nối phần cứng

| SW-420     | Arduino    |
|------------|------------|
| VCC        | 5V         |
| GND        | GND        |
| DO         | D7         |
| (LED +)    | D13 (qua điện trở) |
| (LED -)    | GND        |

---

## Nguyên lý hoạt động

- Khi có rung động, chân DO của SW-420 chuyển lên mức **HIGH**.
- Arduino đọc trạng thái đó, **bật LED** trên Arduino và **in thông báo** ra Serial Monitor.

---



## 📹 Video demo *(nếu có)*

(https://youtu.be/Iv8Y4WwMgrU)

---

## ✅ Liên hệ

Dự án chia sẻ bởi [duongdangduy95](https://github.com/duongdangduy95)
