#pragma once

class Duck {
public:
	virtual ~Duck();
	virtual void display() = 0;
};

class SwimBehavior {
public:
	virtual ~SwimBehavior() = 0;
	virtual void swim() = 0;
};

class FlyBehavior {
public:
	virtual ~FlyBehavior() = 0;
	virtual void fly() = 0;
};

class QuackBehavior {
public:
	virtual ~QuackBehavior() = 0;
	virtual void quack() = 0;
};
