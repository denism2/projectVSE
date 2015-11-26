#include "systemc.h"

SC_MODULE(dff){
    sc_in<bool> din;
    sc_in<bool> clock;
    sc_out<bool> dout;

    void echantillone(){
        dout = din;
    };

    SC_CTOR(dff){
        SC_METHOD(dff);
        sensitive << clock.pos();
    };
};
