#pragma once
#include "../../Includes.hpp"
#include "../../Libraries/ImGui/imgui.h"
#include <sysinfoapi.h>

enum notify_state_s : int {
	info_state = 0,
	success_state,
	warning_state,
	danger_state,
	debug_state,
	missed_state,
	notresolved_state,
	hitted_state,
	bought_state
};

struct notify_data_t
{
	std::string message;
	notify_state_s state;
	unsigned __int64 end_time;
};

namespace notifies {
	void handle(ImDrawList* draw_list);
	void push(const std::string& message, notify_state_s state = notify_state_s::info_state);
}