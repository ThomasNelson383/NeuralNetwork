#ifndef NERUONADD_H
#define NERUONADD_H

#include "baseneuron.h"

class NeuronAdd : public BaseNeuron
{
    Q_OBJECT
public:
    explicit NeuronAdd(double inputA, double inputB,
                       QObject *parent = nullptr);

    virtual double output();
signals:

public slots:

private:
    virtual double derivativeA();
    virtual double derivativeB();
};

#endif // NERUONADD_H
