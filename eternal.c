#include <superkarel.h>


void turn_right(){
    turn_left();
    turn_left();
    turn_left();
}

void turn_south(){
    turn_left();  
    turn_left();
}

void turn_north(){
    turn_left();  
    turn_left();
}

int main(){
    turn_on("empty.kw");
    set_step_delay(150);
    turn_right();
    while (facing_north() && front_is_clear())
    {
        step();
    while (facing_north() && front_is_blocked())
    {
        turn_south();
        step();
    }
    while (facing_south() && front_is_clear())
    {
        step();
        if (front_is_blocked()){
            turn_north();
            step();
            }
    }
    
    }
    
    turn_off();
    return 0;
}