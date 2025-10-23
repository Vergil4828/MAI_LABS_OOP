#include <string>
#include "../include/change_symbol_text.h"

std::string change_symbol_text(const std::string& text, int n, const char old_value, const char new_value) {
    if (n<= 0) return text;

    int count_old_values=0;

    for (char symbol:text){
        if (symbol==old_value) count_old_values++;

    }

    if (count_old_values<n) return text;

    std::string text_to_changed=text;
    int count_old_value_changed=0;
    for (char& symbol:text_to_changed) {
        if (symbol == old_value){
            count_old_value_changed++;
            if (count_old_value_changed==n){
                symbol=new_value;
                count_old_value_changed=0;
            }
        }
    }


    return text_to_changed;
}