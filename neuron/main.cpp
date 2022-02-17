#include <iostream>
#include <vector>
#include "neuron.h"
using namespace std;

int main()
{
    int dNumNeurons = 10;
    vector<Neuron> neurons;
    neurons.reserve(dNumNeurons);

    for (int i = 0; i < dNumNeurons; i++){
        neurons.push_back(Neuron());
    }

    for (int i = 0; i < dNumNeurons; i++){
        cout << neurons[i].getID() << " ";
    }
}