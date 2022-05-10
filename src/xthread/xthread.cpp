#include "xthread.h"

#include <iostream>
using namespace std;

void XThread::Start()
{
    cout << "thread start" << endl;

    th = thread(&XThread::Main, this);

}


void XThread::Wait()
{
    cout << "thread wait" << endl;

    th.join();

    cout << "thread end" << endl;
}