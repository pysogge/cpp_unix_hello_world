#include "network.h"

int Network::gID = 0;

Network::Network()
{
    dID = gID;
    gID++;
}

int Network::getID()
{
    return (dID);
}

int Network::generate(int dNodes)
{
    for (int i = 0; i < dNodes; i++)
    {
        neurons.push_back(Neuron());
    }
    return (dNodes);
}

std::vector<Neuron> Network::getNeurons(){
    return (neurons);
}