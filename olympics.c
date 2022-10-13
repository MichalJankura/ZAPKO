#include <superkarel.h>

void turn_right(){
    turn_left();
    turn_left();
    turn_left();
}
void jump_over(){
    step();
    turn_right();
    step();
    turn_right();
    step();
    }

void turn_north(){
    turn_left();
    turn_left();
}


int main(){
    turn_on("olympics.kw");
    set_step_delay(100);
    while (beepers_present()){
        pick_beeper();
        break;
    }
    while (facing_east() && front_is_blocked())
    {
        turn_left();
        jump_over();
        turn_left();
    if (beepers_present()){
        pick_beeper();
        break;
    }
    while (facing_east() && front_is_clear())
    {
        step();
    }

    }

    turn_off();
    return 0;
}