#pragma once

#include <SPI.h>


class SpiConnection {
public:
    SpiConnection(arduino::MbedSPI& spi, int CS_pin, bool pullup = false)
        : SPI_Manager(spi), CS(CS_pin), pull_up(pullup) {}

    void send(void* data, size_t size);

    template <typename T>
    inline void send(T& data) {
        send(&data, sizeof(T));
    }

    int recv(void* buf, size_t size);
    template <typename T>
    int recv(T* buf) {
        recv(buf, sizeof(T));
    }

    void set_pullup(bool pullup) { pull_up = pullup; }

private:
    void begin();

    void end();

    arduino::MbedSPI& SPI_Manager;
    SPISettings settings;
    int CS;
    bool pull_up = false;
};
