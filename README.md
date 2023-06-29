![Platinum SDK logo](/assets/img/logo-text.png "Platinum SDK logo")

# Platinum SDK
Simple Geometry Dash modding SDK for Android

## Example mod
This example overwrites the response of the More Games button on the main menu to a dialog box with the text "Hello, World!":
```cpp
#include <Platinum.h>
#include <Modify/MenuLayer.h>

void onMoreGames(MenuLayer* self) {
	FLAlertLayer::create(
		nullptr,
		"Platinum SDK",
		"Hello, World!",
		"Close", NULL
	)->show();
}

__attribute__((constructor))
void load() {
	MenuLayer_Hooks::onMoreGames((void*) onMoreGames);
}
```
The same example on a regular SDK:
```cpp
#include <gd.h>
#include <dobby.h>
#include <dlfcn.h>
#include <cocos2d.h>

using namespace cocos2d;

void (*onMoreGames_o) (MenuLayer*);
void onMoreGames(MenuLayer* self) {
	FLALertLayer::create(
		nullptr,
		"Platinum SDK",
		"Hello, World!",
		"Close", NULL
	)->show();
}

__attribute__((constructor))
void load() {
	DobbyHook(
		dlsym(
			dlopen("libcocos2dcpp.so", RTLD_LAZY),
			"_ZN9MenuLayer11onMoreGamesEPN7cocos2d8CCObjectE"
		),
		(void*) onMoreGames,
		(void**) &onMoreGames_o
	);
}
```
## Documentation
Documentation with examples and tutorials can be found [here](https://google.com).
## New to modding?
Get help [here](https://discord.gg/6a8gV5zpbx) (Russians only).
