#include <iostream>
extern "C" {
# include "lua.h"
# include "lauxlib.h"
# include "lualib.h"
}
//You must include lua headers first before LuaBridge
#include <LuaBridge/LuaBridge.h>
 
using namespace luabridge;
int main() {
    lua_State* L = luaL_newstate();
    luaL_dofile(L, "scripts/script.lua");
    luaL_openlibs(L);
    lua_pcall(L, 0, 0, 0);
    LuaRef s = getGlobal(L, "testString");
    LuaRef n = getGlobal(L, "number");
    auto luaString = s.cast<std::string>();
    int answer = n.cast<int>();
    std::cout << luaString << std::endl;
    std::cout << "And here's our number:" << answer << std::endl;
}
