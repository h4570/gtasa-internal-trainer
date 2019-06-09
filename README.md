    # GTA:SA simple internal trainer

    Simple internal trainer (.dll) with infinite ammo feature.

    ## Getting Started

    To compile this trainer, you will need a c++ compiler and injector. I recommend mingw and extreme injector.

    ### Compiling

    ```
    g++ -shared -o dist/main.dll src/main.cpp src/lib/utility.cpp src/lib/offsets.cpp src/lib/sdk/gui.cpp src/lib/sdk/weapon.cpp src/lib/threads/ammo.cpp src/lib/threads/guard.cpp
    ```

    ## License

    This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details