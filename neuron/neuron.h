#ifndef NEURON_H
#define NEURON_H

class Neuron
{
private:
    static int gID;
    int dID;

public:
    Neuron();
    int getID();
};

#endif