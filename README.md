# SFML Game Project

This repository contains a simple game project built using SFML. The project includes various components such as a game manager, snake, textbox, window manager, world manager, and an event manager.

## Prerequisites

Before you can build and run this project, you need to have the following software installed on your system:

- [GNU Compiler Collection (GCC)](https://gcc.gnu.org/) (specifically g++)
- [SFML (Simple and Fast Multimedia Library)](https://www.sfml-dev.org/)

### Installing SFML

You can install SFML on your system using your package manager. Here are some examples:

**For Ubuntu/Debian:**

```sh
sudo apt-get update
sudo apt-get install libsfml-dev
```

**For macOS (using Homebrew):**

```sh
brew update
brew install sfml
```

**For Windows:**
Download the appropriate version of SFML from the [SFML download page](https://www.sfml-dev.org/download.php) and follow the installation instructions provided there.

## Building the Project

To build the project, you can use the provided Makefile. Follow these steps:

1. Open a terminal and navigate to the project directory.
2. Run the following command to compile and link the project:

    ```sh
    make
    ```
   This will create an executable file named app in the project directory.

## Running the Game

After building the project, you can run the game using the following command:

```sh
./app
```
## Cleaning Up

To remove the generated object files and the executable, run the following command:

```sh
make clean
```

## Project Structure
- `main.cpp`: Entry point of the game.
- `Game.cpp / Game.hpp`: Game manager implementation.
- `Snake.cpp / Snake.hpp`: Snake game logic.
- `Textbox.cpp / Textbox.hpp`: Textbox implementation.
- `Window.cpp / Window.hpp`: Window manager.
- `World.cpp / World.hpp`: World management logic.
- `EventManager.cpp / EventManager.hpp`: Event handling.

## Contributing
If you would like to contribute to this project, please fork the repository and submit a pull request with your changes.

## License
This project is licensed under the MIT License. See the [LICENSE file](LICENSE) for more details.