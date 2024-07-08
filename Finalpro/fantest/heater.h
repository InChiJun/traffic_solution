#ifndef heater_h
#define heater_h

#include <Arduino.h>

class heater {
public:
    void begin(uint8_t signalPin); // 수정: 신호 핀을 인자로 받음
    void control();
    void power_on();
    void power_off();
    bool get_power() const;
private:
    bool power_status;
    uint8_t signal_pin; // 추가: 신호 핀
};

#endif