# Sensor de Humo MQ-2 ElecFreaks Octopus - WiFi LoRa 32(V2)

![Conexion](https://github.com/SantiagoGomezfpv/SensorHumoMQ2-ESP32/blob/main/conexiones.png)

Para la conexion anterior se utilizó un sensor **[Sensor de Humo MQ-2 ElecFreaks Octopus](https://shop.elecfreaks.com/es/products/elecfreaks-octopus-smoke-sensor-mq-2-brick "Sensor de Humo MQ-2 ElecFreaks Octopus")** y la tarjeta WiFi LoRa 32(V2)

>[!IMPORTANT]
> - Conectar el pin **G** del sensor a **GND** de la tarjeta 
> - Conectar el pin **V** del sensor a **3V3** de la tarjeta 
> - Conectar el pin **S** del sensor al pin **36** de la tarjeta para realizar una lectura análoga

![WIFI LoRa 32](https://escapequotes.net/wp-content/uploads/2021/02/WIFI_LoRa_32_V2-Heltec-pinout-diagram-2048x1031.jpg "WIFI LoRa 32")

Es posible realizar pruebas accionando la salida de gas de un encendedor cerca del sensor de gas, se puede evidenciar en el monitor serial un incremento del porcentaje de gas captado.

![Sensor de gas](https://shop.elecfreaks.com/cdn/shop/products/EF04028-1.jpg?v=1663924369)
