# 🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦 Fake Blue Screen Prank using Pro Micro HID 🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

This project uses an Arduino Pro Micro (HID support) to simulate a fake blue screen image using keyboard automation. When the device is plugged in, it opens the **Run** dialog (Win + R), opens an image file from a specific location, and enters full-screen mode using F11.

> ⚠️ This is intended **for educational and prank purposes only**. Do **not** use it without the target user’s knowledge or consent.

## 💻 How It Works
- Simulates `Win + R` to open the Run dialog.
- Types the full path to the fake blue screen image.
- Hits `Enter` to open it.
- Presses `F11` to enter full-screen mode (works with image viewers and browsers).
- Ends the keyboard emulation.

## 🖼️ Included Image
A fake blue screen image `bluescreen.avif` is located in the repo under:
