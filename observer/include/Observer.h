#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
    public:
    virtual void update(float temp, float heat, float humidity)=0;
    virtual ~Observer(){};
};

#endif