#include "neuron.h"

int Neuron::gID = 0;

Neuron::Neuron()
{
    dID = gID;
    gID++;
}

int Neuron::getID()
{
    return (dID);
}