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

- Update your server hunger reduce amount for every player

```c
SetHungerReduceAmount(Float:amount)
```

- Update your server hunger reduce amount for every player

```c
SetEnergyReduceAmount(Float:amount)
```

### Functions
- This is to set player's hunger
Float:amount = The amount you want in float data!
count : true / false
True = it will count from the total amount
False = it will set totally the wellness
```c
SetPlayerHunger(playerid, Float:amount, count);
```

- This is to set player's energy
Float:amount = The amount you want in float data!
count : true / false
True = it will count from the total amount
False = it will set totally the wellness
```c
SetPlayerEnergy(playerid, Float:amount, count);
```

- This is for get player's hunger in float amount!

```c
GetPlayerHunger(playerid) To get the amount of player hunger in Float
```

- This is for get player's energy in float amount!

```c
GetPlayerEnergy(playerid) To get the amount of player energy in Float
```

- This is for set player's hunger when they will become hungry!

```c
SetPlayerHungryTrigger(playerid, Float:amount)
```

- This is for set player's hunger when they will become hungry!

```c
SetPlayerThirstyTrigger(playerid, Float:amount)
```

- This is to get global hunger reduce amount!

```c
GetHungerReduceAmount() to get the amount of hunger reduce / second
```

- This is to get global energy reduce amount!

```c
GetEnergyReduceAmount() to get the amount of energy reduce / second
```

- This is to check if player's hunger or not!

```c
IsPlayerHungry(playerid)
```

- This is to check if player's thirsty or not!

```c
IsPlayerThirsty(playerid)
```
### Callback
- when player update their wellness, reminder this callback always called every 1 second!

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
