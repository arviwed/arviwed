#include "print.h"

#define true 1
void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("/===============/\n");
    print_str("/    ");
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    print_str("R");
    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("G");
    print_set_color(PRINT_COLOR_LIGHT_BLUE, PRINT_COLOR_BLACK);
    print_str("B");
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("OS      /\n");
    print_str("/===============/\n");
    print_str("Lenge leve RGB\n");
    print_str("RGBiskop\n");
    print_str("RGBible\n");

}