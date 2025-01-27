#pragma once

#include "XignDefs.hpp"

namespace XignCode
{
	static _XignCode_function_dispatch_t _XignCode_function_dispatch = nullptr;

	bool Initialize(std::wstring const&strGameDirectory);
	bool Uninitialize();

	bool MakeResponse(unsigned char* request, unsigned int size, _XignCode_heartbeat_callback_t heartbeat_callback);
}