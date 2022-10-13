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
    turn_on("olympics2.kw");
    set_step_delay(100);
    while (front_is_blocked())
    {
        if (facing_east() && front_is_blocked())
        {
            turn_left();
        }
        
        while (front_is_clear() && right_is_blocked())
        {
            step();
            
            if ((facing_north() && right_is_clear())){
            turn_right();
            step();
            turn_right();
        }
        }
        
        while (facing_south()){
            step();
        if (facing_south() && front_is_blocked()){
            turn_left();
        }
        }
        
        while (facing_east() && front_is_clear()){
        step();
        }
        if (beepers_present()){
            pick_beeper();
            break;
        }    
    }
    
    turn_off();
    return 0;
}