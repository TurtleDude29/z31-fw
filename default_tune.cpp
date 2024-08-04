#include "pch.h"

void boardTuneDefaults() {
	engineConfiguration->cylindersCount = 6;
	engineConfiguration->displacement = 3.0;
     engineConfiguration->firingOrder = FO_1_2_3_4_5_6;
	engineConfiguration->injector.flow = 260;
}
