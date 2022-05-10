#include <iostream>
#include "xthread.h"

using namespace std;

class XTask : public XThread
{
public:
    void Main() override
    {
        cout << "XTask Main" << endl;
    }

};

int main(int argc, char *argv[])
{
    cout << "xservear start" << endl;

    XTask task;
    task.Start();
    task.Wait();
    
    return 0;
}