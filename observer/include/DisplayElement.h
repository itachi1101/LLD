#ifndef DISPLAY_H
#define DISPLAY_H

class DisplayElement{
    public:
        virtual void display() = 0;
        virtual ~DisplayElement() {}
};

#endif