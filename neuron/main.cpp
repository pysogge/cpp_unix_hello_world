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

vector<Network> generateIndividualNetworks(int n)
{
    vector<Network> networks;
    networks.reserve(n);

    for (int i = 0; i < n; i++)
    {
        networks.push_back(Network());
    }

    return (networks);
}

int main()
{
    // Create 10 neurons (unassociated with any network)
    int dNumNeurons = 10;
    vector<Neuron> neuronsA = generateIndividualNeurons(dNumNeurons);
    cout << "Free Neuron IDs: " << endl;
    printNeuronIDs(neuronsA);

    // Create 10 networks
    int dNumNetworks = 10;
    vector<Network> networksA = generateIndividualNetworks(dNumNetworks);

    // Generate 10 neurons for each network
    for (int n = 0; n < networksA.size(); n++)
    {
        networksA[n].generate(dNumNeurons);
    }

    // Print the IDs of the neurons in each network
    for (int n = 0; n < networksA.size(); n++){
        printf("Network [%2d] neurons: ", n);
        printNeuronIDs(networksA[n].getNeurons());
    }
}