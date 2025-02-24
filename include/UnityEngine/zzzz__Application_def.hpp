#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Application)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
struct ApplicationInstallMode;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct NetworkReachability;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
class __Application__LogCallback;
}
namespace UnityEngine {
class __Application__LowMemoryCallback;
}
// Forward declare root types
namespace UnityEngine {
class Application;
}
namespace UnityEngine {
class __Application__LogCallback;
}
namespace UnityEngine {
class __Application__LowMemoryCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Application);
MARK_REF_PTR_T(::UnityEngine::__Application__LogCallback);
MARK_REF_PTR_T(::UnityEngine::__Application__LowMemoryCallback);
// Type: ::LowMemoryCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Application::LowMemoryCallback*
class CORDL_TYPE __Application__LowMemoryCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2a82edc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::__Application__LowMemoryCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a82e20, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Application__LowMemoryCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Application__LowMemoryCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Application__LowMemoryCallback(__Application__LowMemoryCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Application__LowMemoryCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Application__LowMemoryCallback(__Application__LowMemoryCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Application__LowMemoryCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: ::LogCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::Application::LogCallback*
class CORDL_TYPE __Application__LogCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2a82fc8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);

  static inline ::UnityEngine::__Application__LogCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a82ef0, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Application__LogCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Application__LogCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Application__LogCallback(__Application__LogCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Application__LogCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Application__LogCallback(__Application__LogCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Application__LogCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Application
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Application*
class CORDL_TYPE Application : public ::System::Object {
public:
  // Declarations
  using LogCallback = ::UnityEngine::__Application__LogCallback;

  using LowMemoryCallback = ::UnityEngine::__Application__LowMemoryCallback;

  /// @brief Field deepLinkActivated, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_deepLinkActivated, put = setStaticF_deepLinkActivated))::System::Action_1<::StringW>* deepLinkActivated;

  /// @brief Field focusChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_focusChanged, put = setStaticF_focusChanged))::System::Action_1<bool>* focusChanged;

  /// @brief Field lowMemory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lowMemory, put = setStaticF_lowMemory))::UnityEngine::__Application__LowMemoryCallback* lowMemory;

  /// @brief Field quitting, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_quitting, put = setStaticF_quitting))::System::Action* quitting;

  /// @brief Field s_LogCallbackHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LogCallbackHandler, put = setStaticF_s_LogCallbackHandler))::UnityEngine::__Application__LogCallback* s_LogCallbackHandler;

  /// @brief Field s_LogCallbackHandlerThreaded, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LogCallbackHandlerThreaded, put = setStaticF_s_LogCallbackHandlerThreaded))::UnityEngine::__Application__LogCallback* s_LogCallbackHandlerThreaded;

  /// @brief Field unloading, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unloading, put = setStaticF_unloading))::System::Action* unloading;

  /// @brief Field wantsToQuit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_wantsToQuit, put = setStaticF_wantsToQuit))::System::Func_1<bool>* wantsToQuit;

  /// @brief Method CallLogCallback, addr 0x2a825e0, size 0xbc, virtual false, abstract: false, final false
  static inline void CallLogCallback(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type, bool invokedOnMainThread);

  /// @brief Method CallLowMemory, addr 0x2a82408, size 0x64, virtual false, abstract: false, final false
  static inline void CallLowMemory();

  /// @brief Method Internal_ApplicationQuit, addr 0x2a82c28, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_ApplicationQuit();

  /// @brief Method Internal_ApplicationUnload, addr 0x2a82c8c, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_ApplicationUnload();

  /// @brief Method Internal_ApplicationWantsToQuit, addr 0x2a82a64, size 0x1c4, virtual false, abstract: false, final false
  static inline bool Internal_ApplicationWantsToQuit();

  /// @brief Method InvokeDeepLinkActivated, addr 0x2a82dac, size 0x6c, virtual false, abstract: false, final false
  static inline void InvokeDeepLinkActivated(::StringW url);

  /// @brief Method InvokeFocusChanged, addr 0x2a82d40, size 0x6c, virtual false, abstract: false, final false
  static inline void InvokeFocusChanged(bool focus);

  /// @brief Method InvokeOnBeforeRender, addr 0x2a82cf0, size 0x50, virtual false, abstract: false, final false
  static inline void InvokeOnBeforeRender();

  /// @brief Method OpenURL, addr 0x2a82248, size 0x3c, virtual false, abstract: false, final false
  static inline void OpenURL(::StringW url);

  /// @brief Method Quit, addr 0x2a81fac, size 0x30, virtual false, abstract: false, final false
  static inline void Quit();

  /// @brief Method Quit, addr 0x2a81f70, size 0x3c, virtual false, abstract: false, final false
  static inline void Quit(int32_t exitCode);

  /// @brief Method SetLogCallbackDefined, addr 0x2a822c0, size 0x3c, virtual false, abstract: false, final false
  static inline void SetLogCallbackDefined(bool defined);

  /// @brief Method add_focusChanged, addr 0x2a8274c, size 0xd0, virtual false, abstract: false, final false
  static inline void add_focusChanged(::System::Action_1<bool>* value);

  /// @brief Method add_logMessageReceived, addr 0x2a8246c, size 0xcc, virtual false, abstract: false, final false
  static inline void add_logMessageReceived(::UnityEngine::__Application__LogCallback* value);

  /// @brief Method add_onBeforeRender, addr 0x2a8269c, size 0x58, virtual false, abstract: false, final false
  static inline void add_onBeforeRender(::UnityEngine::Events::UnityAction* value);

  /// @brief Method add_quitting, addr 0x2a828ec, size 0xbc, virtual false, abstract: false, final false
  static inline void add_quitting(::System::Action* value);

  static inline ::System::Action_1<::StringW>* getStaticF_deepLinkActivated();

  static inline ::System::Action_1<bool>* getStaticF_focusChanged();

  static inline ::UnityEngine::__Application__LowMemoryCallback* getStaticF_lowMemory();

  static inline ::System::Action* getStaticF_quitting();

  static inline ::UnityEngine::__Application__LogCallback* getStaticF_s_LogCallbackHandler();

  static inline ::UnityEngine::__Application__LogCallback* getStaticF_s_LogCallbackHandlerThreaded();

  static inline ::System::Action* getStaticF_unloading();

  static inline ::System::Func_1<bool>* getStaticF_wantsToQuit();

  /// @brief Method get_cloudProjectId, addr 0x2a82220, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_cloudProjectId();

  /// @brief Method get_companyName, addr 0x2a821f8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_companyName();

  /// @brief Method get_dataPath, addr 0x2a820b8, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_dataPath();

  /// @brief Method get_genuine, addr 0x2a822fc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_genuine();

  /// @brief Method get_genuineCheckAvailable, addr 0x2a82324, size 0x28, virtual false, abstract: false, final false
  static inline bool get_genuineCheckAvailable();

  /// @brief Method get_identifier, addr 0x2a82180, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_identifier();

  /// @brief Method get_installMode, addr 0x2a821a8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ApplicationInstallMode get_installMode();

  /// @brief Method get_internetReachability, addr 0x2a823e0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::NetworkReachability get_internetReachability();

  /// @brief Method get_isBatchMode, addr 0x2a82090, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isBatchMode();

  /// @brief Method get_isEditor, addr 0x2a82e18, size 0x8, virtual false, abstract: false, final false
  static inline bool get_isEditor();

  /// @brief Method get_isFocused, addr 0x2a82004, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isFocused();

  /// @brief Method get_isMobilePlatform, addr 0x2a82374, size 0x6c, virtual false, abstract: false, final false
  static inline bool get_isMobilePlatform();

  /// @brief Method get_isPlaying, addr 0x2a81fdc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isPlaying();

  /// @brief Method get_persistentDataPath, addr 0x2a82108, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_persistentDataPath();

  /// @brief Method get_platform, addr 0x2a8234c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::RuntimePlatform get_platform();

  /// @brief Method get_productName, addr 0x2a821d0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_productName();

  /// @brief Method get_runInBackground, addr 0x2a8202c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_runInBackground();

  /// @brief Method get_streamingAssetsPath, addr 0x2a820e0, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_streamingAssetsPath();

  /// @brief Method get_unityVersion, addr 0x2a82130, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_unityVersion();

  /// @brief Method get_version, addr 0x2a82158, size 0x28, virtual false, abstract: false, final false
  static inline ::StringW get_version();

  /// @brief Method remove_focusChanged, addr 0x2a8281c, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_focusChanged(::System::Action_1<bool>* value);

  /// @brief Method remove_logMessageReceived, addr 0x2a82538, size 0xa8, virtual false, abstract: false, final false
  static inline void remove_logMessageReceived(::UnityEngine::__Application__LogCallback* value);

  /// @brief Method remove_onBeforeRender, addr 0x2a826f4, size 0x58, virtual false, abstract: false, final false
  static inline void remove_onBeforeRender(::UnityEngine::Events::UnityAction* value);

  /// @brief Method remove_quitting, addr 0x2a829a8, size 0xbc, virtual false, abstract: false, final false
  static inline void remove_quitting(::System::Action* value);

  static inline void setStaticF_deepLinkActivated(::System::Action_1<::StringW>* value);

  static inline void setStaticF_focusChanged(::System::Action_1<bool>* value);

  static inline void setStaticF_lowMemory(::UnityEngine::__Application__LowMemoryCallback* value);

  static inline void setStaticF_quitting(::System::Action* value);

  static inline void setStaticF_s_LogCallbackHandler(::UnityEngine::__Application__LogCallback* value);

  static inline void setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::__Application__LogCallback* value);

  static inline void setStaticF_unloading(::System::Action* value);

  static inline void setStaticF_wantsToQuit(::System::Func_1<bool>* value);

  /// @brief Method set_runInBackground, addr 0x2a82054, size 0x3c, virtual false, abstract: false, final false
  static inline void set_runInBackground(bool value);

  /// @brief Method set_targetFrameRate, addr 0x2a82284, size 0x3c, virtual false, abstract: false, final false
  static inline void set_targetFrameRate(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Application();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Application(Application&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Application", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Application(Application const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Application, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Application);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Application*, "UnityEngine", "Application");
NEED_NO_BOX(::UnityEngine::__Application__LogCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Application__LogCallback*, "UnityEngine", "Application/LogCallback");
NEED_NO_BOX(::UnityEngine::__Application__LowMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Application__LowMemoryCallback*, "UnityEngine", "Application/LowMemoryCallback");
