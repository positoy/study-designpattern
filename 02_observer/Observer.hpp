#pragma once

class Observer {
public:
    virtual void update(void* data) = 0;
};