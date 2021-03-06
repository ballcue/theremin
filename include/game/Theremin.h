#ifndef THEREMIN_H
#define THEREMIN_H

#include "../global.h"
#include "../config/config.h"
#include "../io/Capture.h"
#include "../gui/PlayingScreen.h"
#include "../gui/InitialScreen.h"
#include "../tracking/TrackingInfo.h"
#include "../tracking/ColorSampler.h"
#include "../tracking/Tracker.h"
#include "../sound/SoundGenerator.h"
#include "../sound/SilentSoundGenerator.h"
#include "../sound/RangeSoundGenerator.h"

class Theremin {
public:
    Theremin();
    ~Theremin();
    void run();

private:
    Capture capture;
    Screen* screen;
    TrackingInfo* tracker;
    SoundGenerator* sound;

    bool playingMode; // TODO make polymorphic with respect to run()?

    void switchToPlayingMode();
    bool keyOptions();

};

#endif
