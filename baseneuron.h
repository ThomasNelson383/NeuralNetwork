#ifndef BASENEURON_H
#define BASENEURON_H

#include <QObject>

class BaseNeuron : public QObject
{
    Q_OBJECT
public:
    explicit BaseNeuron(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BASENEURON_H