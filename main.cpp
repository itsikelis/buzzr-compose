#include <iostream>

#include "melody.hpp"

int main()
{
    using namespace eutrp;

    Melody mel = Melody(80);

    mel.add_note({g4, t8});
    mel.add_note({g4, t8});
    mel.add_note({g4, t8});
    mel.add_note({e_fl4, t1});

    mel.add_note({pause, t8});
    mel.add_note({f4, t8});
    mel.add_note({f4, t8});
    mel.add_note({f4, t8});
    mel.add_note({d4, t2});
    mel.add_note({d4, t1});

    mel.add_note({pause, t8});
    mel.add_note({g4, t8});
    mel.add_note({g4, t8});
    mel.add_note({g4, t8});

    mel.add_note({e_fl4, t8});
    mel.add_note({a_fl4, t8});
    mel.add_note({a_fl4, t8});
    mel.add_note({a_fl4, t8});

    mel.add_note({g4, t8});
    mel.add_note({e_fl5, t8});
    mel.add_note({e_fl5, t8});
    mel.add_note({e_fl5, t8});

    mel.add_note({c5, t2});
    mel.add_note({c5, t8});

    mel.add_note({pause, t8});
    mel.add_note({g4, t8});
    mel.add_note({g4, t8});
    mel.add_note({g4, t8});

    mel.add_note({d4, t8});
    mel.add_note({a_fl4, t8});
    mel.add_note({a_fl4, t8});
    mel.add_note({a_fl4, t8});

    mel.add_note({g4, t8});
    mel.add_note({f5, t8});
    mel.add_note({f5, t8});
    mel.add_note({f5, t8});

    mel.add_note({d5, t2});

    mel.change_tempo(70);

    mel.add_note({d4, t8});
    mel.add_note({g5, t8});
    mel.add_note({g5, t8});
    mel.add_note({f5, t8});

    mel.add_note({e_fl5, t2});

    mel.add_note({d4, t8});
    mel.add_note({g5, t8});
    mel.add_note({g5, t8});
    mel.add_note({f5, t8});

    mel.add_note({e_fl5, t2});

    mel.add_note({d4, t8});
    mel.add_note({g5, t8});
    mel.add_note({g5, t8});
    mel.add_note({f5, t8});

    mel.change_tempo(60);

    mel.add_note({e_fl5, t4});
    mel.add_note({pause, t4});

    mel.add_note({c5, t4});
    mel.add_note({pause, t4});

    mel.change_tempo(50);

    mel.add_note({g5, t1});

    mel.play();

    return 0;
}