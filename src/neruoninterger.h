#ifndef NERUONINTERGER_H
#define NERUONINTERGER_H

#include <QObject>

#include "baseneuron.h"

class NeruonInterger : public BaseNeuron<int>
{
public:
    NeruonInterger(int inputA, int inputB);
};

#endif // NERUONINTERGER_H
