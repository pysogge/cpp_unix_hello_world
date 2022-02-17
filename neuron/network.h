#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include "neuron.h"

class Network
{
private:
    static int gID;
    int dID;
    std::vector<Neuron> neurons;

public:
    Network();
    int getID();
    int generate(int dNodes);
    std::vector<Neuron> getNeurons();
};

#endif