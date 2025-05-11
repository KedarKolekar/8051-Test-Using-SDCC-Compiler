#include <8051.h>

#define LED P2_0

void main(void){
    int i = 0;
    while(1){
        LED = 1;
        for(i=0; i<30000; i++);
        LED = 0;
        for (i = 0; i < 30000; i++);
    }
}