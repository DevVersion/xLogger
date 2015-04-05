# xLogger
xLogger an Arma 3 C++ Extension - DLL / SO

#### What it can
- Live Logging to File
- Linux and Windows Compatible
- High Performance

#### Installation
- Download the current release from https://github.com/PaulGap/xLogger/releases
- Move the ```@xLogger``` Folder into your Arma 3 Root Folder
- Start Arma 3 and enjoy the new file logger.

#### Call Extension
- Be sure to launch this as Server
- Create a script with parameters ability to execute this on serverside
- In this script file call this arma function ```"xLogger callExtension _this select 0```
- Launch Serverside with ```[["Message"], "fnc_script", false, false] call BIS_fnc_MP```
