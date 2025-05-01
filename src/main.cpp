#include <Geode/Geode.hpp>
using namespace geode::prelude;
#include <Geode/modify/GJBaseGameLayer.hpp>
class $modify(AntiKickLayer, GJBaseGameLayer) {
	bool shouldExitHackedLevel() {return false;}
};