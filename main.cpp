#include <iostream>
#include "proto/test.pb.h"

int main()
{
    test_pkg::TestMessage m;
    std::cout << "Hello Proto!" << std::endl;
    return 0;
}