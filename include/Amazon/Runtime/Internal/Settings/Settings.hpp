#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/Internal/Settings/IPersistenceManager.hpp"
#include "Amazon/Runtime/Internal/Settings/InMemoryPersistenceManager.hpp"
#include "Amazon/Runtime/Internal/Settings/PersistenceManager.hpp"
#include "Amazon/Runtime/Internal/Settings/SettingsCollection.hpp"
#include "Amazon/Runtime/Internal/Settings/SettingsConstants.hpp"
#include "Amazon/Runtime/Internal/Settings/SettingsWatcher.hpp"
#include "Amazon/Runtime/Internal/Settings/UserCrypto.hpp"
#ifdef __cpp_modules
export module Settings;
#endif
