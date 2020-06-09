# Lua And LuaBridge Template
A simple C++ Lua and Luabridge Example Template to play with.

If you have any feedback for our repositories or want to join please head over to our [Discord](https://discord.gg/Zq8MDAQ)

[Example of how to use Lua and LuaBridge](https://eliasdaler.wordpress.com/2014/07/18/using-lua-with-cpp-luabridge/
)

### Requirements
- CMake
- A C++ 17+ Compiler (Only if you chose to not update the CMake)

### Download and Setup
Ensure you have git client installed, we will be using git from the command line in this example. 

Navigate to the directory you will clone too.
```
git clone https://github.com/MurdochITSociety/LuaAndLuaBridgeTemplate.git
cd LuaAndLuaBridgeTemplate
```
This example uses submodules and compiles its external liberies from source. Since we are using submodules we will need to retrieve them.
```
git submodule update --init --recursive --depth 1
```

#### A Simple trick
For the most simple way of being able to modify lua scripts with out having to copy them around it is advised that you edit the root CMakeLists.txt and modify the following...
```
option(CopyResources "CopyResources" OFF)
````
to...
```
option(CopyResources "CopyResources" ON)
```
This will instead create a symlink instead of a copying. However on Windows you will either need to turn developer mode on in Windows or run your IDE or command prompt with administrator privilages.

### Building using CMake
#### Visual Studio 2019
To open this in VS2019 do the following...
1. Open Visual Studio 2019.
1. If a dialog prompts to open a file/project click "Continue with out project" in the bottom right.
1. Click File on the toolbar.
1. Click Open.
1. Click Open CMake
1. Navigate to LuaAndLuaBridgeTemplate and open CMakeLists.txt
1. Wait for the CMake to generate.
You should now be ready to compile and run with out having to worry about linking :D.

#### Build from CMAKE CLI
Open a terminal or command prompt and navigate to LuaAndLuaBridgeTemplate.
1. Type "cmake -S . -B build"
1. Now change into the directory by typing "cd build"
1. Build it by typing "make"
* If on UNIX type "./LuaBridgeExample"
* If on windows type "./LuaBridgeExample.exe"
