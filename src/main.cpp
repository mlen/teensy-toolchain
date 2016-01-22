#include "WProgram.h"

extern "C" int main(void) {
    pinMode(13, OUTPUT);

    while (true) {
        digitalWriteFast(13, HIGH);
        delay(500);
        digitalWriteFast(13, LOW);
        delay(500);
    }
}
