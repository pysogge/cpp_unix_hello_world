#include <iostream>
#include <vector>
#include "neuron.h"
#include "network.h"
using namespace std;

void printNeuronIDs(vector<Neuron> neurons)
{
    int n = neurons.size();

    for (int i = 0; i < n; i++)
    {
        cout << neurons[i].getID() << " ";
    }
    cout << endl;
}

vector<Neuron> generateIndividualNeurons(int n)
{
    vector<Neuron> neurons;
    neurons.reserve(n);

    for (int i = 0; i < n; i++)
    {
        neurons.push_back(Neuron());
    }

    return (neurons);
}

int main()
{
    int dNumNeurons = 10;
    vector<Neuron> neuronsA = generateIndividualNeurons(dNumNeurons);
    cout << "Free Neuron IDs: " << endl;
    printNeuronIDs(neuronsA);

    Network networkA = Network();
    Network networkB = Network();
    cout << "networkA ID: " << networkA.getID() << endl;
    cout << "networkB ID: " << networkB.getID() << endl;

    networkA.generate(dNumNeurons);

    vector<Neuron> neuronsB = networkA.getNeurons();

    cout << "NetworkA IDs: " << endl;
    printNeuronIDs(neuronsB);
}