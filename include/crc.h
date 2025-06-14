/*
The MIT License (MIT)

Copyright (c) 2025 James Nichol

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif  // __cplusplus

    uint8_t crc8(const uint8_t* data, const size_t len);
    uint8_t crc8Maxim(const uint8_t* data, const size_t len);
    uint8_t crc8Sht35(const uint8_t* data, const size_t len);
    uint8_t crc8Sht75(const uint8_t* data, const size_t len);

    uint16_t crc16(const uint8_t* data, const size_t len);
    uint16_t crc16Ccitt(const uint8_t* data, const size_t len);
    uint16_t crc16Modbus(const uint8_t* data, const size_t len);
    uint16_t crc16Usb(const uint8_t* data, const size_t len);
    uint16_t crc16Xmodem(const uint8_t* data, const size_t len);

    uint32_t crc32(const uint8_t* data, const size_t len);
    uint32_t crc32Bzip2(const uint8_t* data, const size_t len);
    uint32_t crc32Mpeg2(const uint8_t* data, const size_t len);
    uint32_t crc32Sata(const uint8_t* data, const size_t len);
    uint32_t crc32C(const uint8_t* data, const size_t len);

#ifdef __cplusplus
}
#endif  // __cplusplus