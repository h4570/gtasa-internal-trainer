# GTA:SA simple internal trainer

Simple internal trainer (.dll) with infinite ammo feature.

X+Z: Uninject dll from gta_sa.exe process

F5: Enable infinite ammo

![alt text](http://h4570.net/gta_sa_trainer2.png)

## Getting Started

To compile this trainer, you will need a c++ compiler (i used mingw).

If u want attach trainer to gta, use dll injector (ex. extreme injector). 

### Compiling

```
g++ -shared -o dist/main.dll src/main.cpp src/lib/utility.cpp src/lib/offsets.cpp src/lib/sdk/gui.cpp src/lib/sdk/weapon.cpp src/lib/threads/ammo.cpp src/lib/threads/guard.cpp
```

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
