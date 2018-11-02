#include "baseneuron.h"

 BaseNeuron::BaseNeuron(double a, double b, QObject *parent)
    : QObject(parent)
    , m_inputA(a)
    , m_inputB(b)
{
}
