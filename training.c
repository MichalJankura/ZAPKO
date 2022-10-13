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
    turn_on("training.kw");
    turn_left();
    set_step_delay(100);
    while (front_is_clear())
    {
        jump_over();
    while (front_is_blocked())
    {
        turn_right();
    }
    if (beepers_present()){
        pick_beeper();
        break;
    }
    }
        
    turn_off();
    return 0;
}