#include <Platinum.h>
#include <Modify/MenuLayer.h>

void onMoreGames(MenuLayer* self) {
	Alert(
		"Platinum SDK",
		"Hello, World!",
		"Close", empty
	)->show();
}

Loader {
	MenuLayer_Hooks::onMoreGames(hook(onMoreGames));
}