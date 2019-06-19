#pragma once

class Subject;
#include "Subject.h"

class Observer {
public:
    Observer(Subject* _subject) : subject{_subject} {}
    virtual void update(void* data) = 0;
protected:
    Subject* subject;
};