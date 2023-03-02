#include <zmk/led_widgets.h>
#include <zmk/endpoints_types.h>

const led_widget_t led_widgets[LED_EVENT_SIZE][CONFIG_ZMK_LED_WIDGETS_MAX_WIDGET_NUM] = {
    [LED_EVENT_BOOT] = {
        WIDGET(0, priority = 100, period = 0, cmd_len = 3, CMD(100, 0, 0, 1), WAIT(100), CMD(100, 0, 0, 1)),
    },
};
