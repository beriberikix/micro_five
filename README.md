*WARNING: this project is highly experimental and still in the exploration phase.*

# micro-five
µFive - a microcontroller port of Johnny-Five written in C

## Why
ARM-based microcontrollers like the STM32 are getting less costly, more powerful and more accessible by the day. I've been experimenting with these kinds of devices for use in Robotics. However, there aren't really good frameworks for developing applications that run natively on the chips (sometimes called "bare metal.") 

I'm a huge fan of [rwaldron/johnny-five](https://github.com/rwaldron/johnny-five). I love the component-based API design, the event-driven programming model and the general design decisions like clear naming conventions. I want to program microcontrollers in the same way so I decided to explore this port. Also, I tend to learn platforms by writing libraries so I hope to better understand embedded development workflows, C, testing, etc.

## What
The main deliverable is a C library that provides an API comparable to `johnny-five`. There's nuance in that so here's a breakdown of the goals & non-goals:

### Goals
* Methods and events with the same effects as `johnny-five`
* Optimize for embedded systems like ARM and AVR
* An idiomatic C API
* OS-like features (events, threads) using an RTOS

### Non-goals
* Re-use existing JavaScript implementation
* Directly port JavaScript features to C
* Replace implementations in `johnny-five`

## Ideas
* [ ] Explore ChibiOS as RTOS
* [ ] Add optional features that are available to the board (microsecond counters, additional peripherals)
* [ ] Add test-driven development (Unity? CMock?)
* [ ] Higher-level bindings as separate projects (duktape, micropython, zinc)
