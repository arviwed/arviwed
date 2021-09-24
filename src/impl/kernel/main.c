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
    /*for (int i = 0; i < 1000000000000000000; i++) {
        count++;
        if (count >= 100) {
            if (count >= 200) {
                if (count >= 300) {
                    
                    
                    print_newline();
                    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_BLACK);
                    print_str("B");
                    count = 0;
                }  
            } else {
                print_newline();
                print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
                print_str("G");
            }
            
        } else {
            print_newline();
            print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
            print_str("R");
        }
    }*/

}