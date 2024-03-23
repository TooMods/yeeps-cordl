#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "System/Security/AccessControl/CryptoKeySecurity.hpp"
#include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "System/Security/AccessControl/ObjectSecurity.hpp"
#ifdef __cpp_modules
export module AccessControl;
#endif
