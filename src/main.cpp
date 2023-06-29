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