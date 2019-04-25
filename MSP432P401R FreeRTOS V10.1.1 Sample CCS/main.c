#include "FreeRTOS.h"
#include "task.h"

void Task1(void *args)
{
    while(1)
    {

    }
}

void main(void)
{
    xTaskCreate(Task1, "task1", 128, NULL, tskIDLE_PRIORITY, NULL);

    vTaskStartScheduler();

    while(1)
    {

    }
}

void vApplicationStackOverflowHook(void)
{

}
