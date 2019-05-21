#include <intercept.hpp>


int intercept::api_version() { //This is required for the plugin to work.
    return INTERCEPT_SDK_API_VERSION;
}

void intercept::register_interfaces() {
    
}

void intercept::pre_start() {
    
}

void intercept::pre_init() {
    intercept::sqf::system_chat("The Intercept template plugin is running!");
}

void intercept::post_start() {

    __SQF(
        _test = 1;
    );

    __SQF(
        _pos = getPos player;
        player sideChat format["Player Pos: %1", _pos];
        for "_i" from 0 to 10 do {
            [] call some_fnc;
        };
    );
}