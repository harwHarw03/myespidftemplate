#include <iostream>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


extern "C" void app_main(void)
{
    int i = 0;
    while (1) {
    std::cout << "Hello World from C++ "<< i << '\n';
    vTaskDelay(1000 / portTICK_PERIOD_MS);
        i++;
    }
}

