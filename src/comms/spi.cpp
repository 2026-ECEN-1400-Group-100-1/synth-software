#include "spi.hpp"

void SpiConnection::send(void* data, size_t size) {
    begin();
    SPI_Manager.transfer(data, size);
    end();
}

int SpiConnection::recv(void* buf, size_t size) {
    begin();
    // TODO recv
    end();
}

void SpiConnection::begin() {
    SPI_Manager.beginTransaction(settings);
    digitalWrite(CS, pull_up);
}

void SpiConnection::end() {
    SPI_Manager.endTransaction();
    digitalWrite(CS, !pull_up);
}
