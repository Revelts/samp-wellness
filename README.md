# samp-wellness

[![sampctl](https://img.shields.io/badge/sampctl-samp--wellness-2f2f2f.svg?style=for-the-badge)](https://github.com/Revelt/samp-wellness)

<!--
Short description of your library, why it's useful, some examples, pictures or
videos. Link to your forum release thread too.

Remember: You can use "forumfmt" to convert this readme to forum BBCode!

What the sections below should be used for:

`## Installation`: Leave this section un-edited unless you have some specific
additional installation procedure.

`## Testing`: Whether your library is tested with a simple `main()` and `print`,
unit-tested, or demonstrated via prompting the player to connect, you should
include some basic information for users to try out your code in some way.

And finally, maintaining your version number`:

* Follow [Semantic Versioning](https://semver.org/)
* When you release a new version, update `VERSION` and `git tag` it
* Versioning is important for sampctl to use the version control features

Happy Pawning!
-->

## Installation

Simply install to your project:

```bash
sampctl package install Revelt/samp-wellness
```

Include in your code and begin using the library:

```pawn
#include <samp-wellness>
```

## Usage

```
SetPlayerHunger(playerid, Float:amount, count);
SetPlayerEnergy(playerid, Float:amount, count);

Amount = The amount you want in float data!
Count :
True = it will count from the total amount
False = it will set totally the wellness
```

```
GetPlayerHunger(playerid) To get the amount of player hunger in Float
GetPlayerEnergy(playerid) To get the amount of player energy in Float

SetPlayerHungryTrigger(playerid, Float:amount) To set the trigger when player will hungry
SetPlayerThirstyTrigger(playerid, Float:amount) To set the trigger when player will thirsty
NB : Amount = FLOAT DATA!
```

```
SetHungerReduceAmount(Float:amount) to set the amount how much it will reduce the hunger
SetEnergyReduceAmount(Float:amount) to set the amount how much it will reduce the energy

GetHungerReduceAmount() to get the amount of hunger reduce / second
GetEnergyReduceAmount() to get the amount of energy reduce / second
```

```
OnPlayerUpdateWellness(playerid) to check when the player update their wellness! you can do everything you want here
```

## Testing

<!--
Depending on whether your package is tested via in-game "demo tests" or
y_testing unit-tests, you should indicate to readers what to expect below here.
-->

To test, simply run the package:

```bash
sampctl package run
```
