# bluetooth2spdif - a very simple Bluetooth to S/PDIF adapter using a ESP32 and a IR / red led.

Connect the IR led to the TX using a 220Ω resistor and GND of the ESP32 and voila, you have a bluetooth to S/PDIF adapter which you can connect to any AV receiver.

You can also use a simple red led but you should use a Optical Toslink connector to be able to connect it with the AV receiver with a optical toslink cable.

Thanks to the fantastic work of:

https://github.com/pschatzmann/ESP32-A2DP

https://github.com/JohnyMielony/ESP32-A2DP

https://github.com/feilipu/Arduino_FreeRTOS_Library
