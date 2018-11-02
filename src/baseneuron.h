#ifndef BASENEURON_H
#define BASENEURON_H

#include <QObject>

class BaseNeuron : public QObject
{
public:
    explicit BaseNeuron(double a, double b, QObject *parent);

    virtual double output() = 0;

signals:

public slots:

protected:
    virtual double derivativeA() = 0;
    virtual double derivativeB() = 0;

    double m_inputA;
    double m_inputB;
};

#endif // BASENEURON_H
