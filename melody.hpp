#pragma once

#include <string>
#include <vector>

#include "pitches.hpp"
#include "durations.hpp"

// Supported platforms : Arduino, Linux (with beep installed).
#define LINUX 1
#define ARDUINO 0

#if ARDUINO
#include <Arduino.h>
#endif

namespace eutrp
{
    struct Note
    {
        float pitch;
        float duration;
    };

    class Melody
    {
    public:
        Melody() = default;
#if LINUX
        Melody(float tempo)
        {
            period = 60 * 1000 / tempo;

            t1 = period;
            t1_dot = t1 + t1 / 2;
            t2 = period / 2;
            t2_dot = t2 + t2 / 2;
            t4 = period / 4;
            t4_dot = t4 + t4 / 2;
            t8 = period / 8;
            t8_dot = t8 + t8 / 2;
            t16 = period / 16;
            t16_dot = t16 + t32 / 2;
            t32 = period / 32;
            t32_dot = t32 + t32 / 2;
            t64 = period / 64;
            t64_dot = t64 + t64 / 2;
        }
#endif

#if ARDUINO
        Melody(float tempo, u_int8_t buzzer_pin)
        {
            period = 60 * 1000 / tempo;

            t1 = period;
            t1_dot = t1 + t1 / 2;
            t2 = period / 2;
            t2_dot = t2 + t2 / 2;
            t4 = period / 4;
            t4_dot = t4 + t4 / 2;
            t8 = period / 8;
            t8_dot = t8 + t8 / 2;
            t16 = period / 16;
            t16_dot = t16 + t32 / 2;
            t32 = period / 32;
            t32_dot = t32 + t32 / 2;
            t64 = period / 64;
            t64_dot = t64 + t64 / 2;
        }
#endif

        ~Melody() = default;

        void add_note(Note note)
        {
            _notes.push_back(note);
        }

        void change_tempo(float new_tempo)
        {
            period = 60 * 1000 / new_tempo;

            t1 = period;
            t1_dot = t1 + t1 / 2;
            t2 = period / 2;
            t2_dot = t2 + t2 / 2;
            t4 = period / 4;
            t4_dot = t4 + t4 / 2;
            t8 = period / 8;
            t8_dot = t8 + t8 / 2;
            t16 = period / 16;
            t16_dot = t16 + t32 / 2;
            t32 = period / 32;
            t32_dot = t32 + t32 / 2;
            t64 = period / 64;
            t64_dot = t64 + t64 / 2;
        }

        void play()
        {
#if LINUX
            for (unsigned int i = 0; i < _notes.size(); i++)
            {
                std::string pitch = std::to_string(_notes[i].pitch);
                std::string duration = std::to_string(_notes[i].duration);

                int ret = std::system(("beep -f " + pitch + " -l " + duration).c_str());
                if (ret == -1)
                {
                    std::cout << "Something went wrong." << std::endl;
                }
                // std::cout << "beep -f " + pitch + " -l " + duration << std::endl;
            }
#endif
#if ARDUINO
            for (unsigned int i = 0; i < _notes.size(); i++)
            {
                std::string pitch = std::to_string(_notes[i].pitch);
                std::string duration = std::to_string(_notes[i].duration);

                tone(_buzzer, pitch);
                delay(duration);
                noTone(_buzzer);
            }
#endif
        }

    private:
        float _tempo;
#if ARDUINO
        u_int8_t _buzzer;
#endif
        std::vector<Note> _notes;
    };

} // namespace eutrp