whyami
===

The ontological counterpart to `whoami` - for all your existential and ontological command line needs.

Build and Install
-----------------

    $ git clone https://github.com/jkingsman/whyami.git
    $ cd whyami
    $ make
    $ sudo make install

The default install PREFIX is `/usr/bin`.

Contributing
-----

Please add your own belief systems in `meanings.h`. Thanks to [this reddit post](https://www.reddit.com/r/ProgrammerHumor/comments/3o3pv8/how_can_our_bash_be_real_if_our_envs_arent_real/) for inspiration.

Usage
-----

`whyami [--belief]` returns a meaning from a random philosophy of belief, or the meaning as optionally specified by some named `belief` system.

Show a possible list of beliefs with the `whyami --list` command.

Also allows for the fantastic command `man whyami`. Bruh. Deep.

Disclaimer
-----
I mean no offense by any meanings. If you see one you disagree with, make a PR. This project is very tongue-in-cheek and should not be taken seriously by anyone, nor do any of the meanings necessarily reflect the author's point of view.

Author and License
------------------

Copyright 2015 by Jack Kingsman <jack.kingsman@gmail.com>

Permission to use, copy, modify, distribute, and sell this software
and its documentation for any purpose is hereby granted without fee,
provided that the above copyright notice appear in all copies and
that both that copyright notice and this permission notice appear in
supporting documentation.  No representations are made about the
suitability of this software for any purpose.  It is provided "as
is" without express or implied warranty.
