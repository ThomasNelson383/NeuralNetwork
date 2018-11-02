#include "neuronadd.h"

NeuronAdd::NeuronAdd(double inputA, double inputB, QObject *parent)
    : BaseNeuron(inputA, inputB, parent)
{}

double NeuronAdd::output()
{
   return m_inputA + m_inputB;
}

double NeuronAdd::derivativeA()
{
    return 1.0;
}

double NeuronAdd::derivativeB()
{
    return 1.0;
}
