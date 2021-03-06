/*
 Copyright (c) 2014 Tomas Poledny
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 1. Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.
*/
#ifndef A4Tool_H
#define A4Tool_H

#include <libgmouse/system_a4.h>
#include <libgmouse/control_a4.h>

#define LITLE_SLEEP   250000

enum WakeAfter {
    CLICK = A4_WAKE_BY_CLICK ,
    MOVE = A4_WAKE_BY_MOVE,
    UNKNOWN = 0x0080,
};

enum ChannelMod {
    AUTO = A4_CHAN_AUTO,
    MANUAL = A4_CHAN_MANUAL,
    ERROR = -1,

};

int pair_func(a4_device* dev, int argc, char* argv[]);

int dump_func(a4_device* dev, int argc, char* argv[]);

bool initMultifunc(a4_device* dev);

bool isInit(a4_device* dev);

int getProfile(a4_device* dev);

bool setProfile(a4_device* dev, int profile);

int getSignal(a4_device* dev);

int getBatteryMouse(a4_device* dev);

int getBatteryKeyboard(a4_device* dev);

int getMrr(a4_device* dev);

bool setMrr(a4_device* dev, int mrr);

int getWakeUpTime(a4_device* dev);

WakeAfter getWakeUpBy(a4_device* dev);

bool setWakeUp(a4_device* dev, int time, WakeAfter after);

int getDistance(a4_device* dev);

bool setDistance(a4_device* dev, int idx);

int getChannel(a4_device* dev);

ChannelMod getChannelMode(a4_device* dev);

bool setChannel(a4_device* dev, int channel, ChannelMod mode);

a4_device* getDevice();

#endif // A4Tool_H
