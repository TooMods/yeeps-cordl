#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FatalErrorData_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FatalErrorManager)
namespace GlobalNamespace {
struct FatalErrorData;
}
namespace GlobalNamespace {
class __FatalErrorManager___TimeoutRoutine_d__12;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
class FatalErrorManager;
}
namespace GlobalNamespace {
class __FatalErrorManager___TimeoutRoutine_d__12;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FatalErrorManager);
MARK_REF_PTR_T(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12);
// Type: ::<TimeoutRoutine>d__12
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorManager::<TimeoutRoutine>d__12*
class CORDL_TYPE __FatalErrorManager___TimeoutRoutine_d__12 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field duration, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x29c9640, size 0x13c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x29c977c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x29c9784, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x29c97c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x29c963c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x29c9084, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FatalErrorManager___TimeoutRoutine_d__12();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorManager___TimeoutRoutine_d__12", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FatalErrorManager___TimeoutRoutine_d__12(__FatalErrorManager___TimeoutRoutine_d__12&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FatalErrorManager___TimeoutRoutine_d__12", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FatalErrorManager___TimeoutRoutine_d__12(__FatalErrorManager___TimeoutRoutine_d__12 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field duration, offset: 0x20, size: 0x4, def value: None
  float_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12, ___duration) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FatalErrorManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FatalErrorManager*
class CORDL_TYPE FatalErrorManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::FatalErrorManager>> {
public:
  // Declarations
  using _TimeoutRoutine_d__12 = ::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12;

  /// @brief Field fatalErrorData, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_fatalErrorData, put = setStaticF_fatalErrorData))::GlobalNamespace::FatalErrorData fatalErrorData;

  /// @brief Field hasFatalError, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasFatalError, put = setStaticF_hasFatalError)) bool hasFatalError;

  /// @brief Field hasLaunchedErrorScene, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasLaunchedErrorScene, put = setStaticF_hasLaunchedErrorScene)) bool hasLaunchedErrorScene;

  /// @brief Field hasStoppedTimeout, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasStoppedTimeout, put = setStaticF_hasStoppedTimeout)) bool hasStoppedTimeout;

  /// @brief Field timeoutRoutine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_timeoutRoutine, put = __cordl_internal_set_timeoutRoutine))::UnityEngine::Coroutine* timeoutRoutine;

  /// @brief Method LaunchErrorScene, addr 0x29c926c, size 0x30c, virtual false, abstract: false, final false
  static inline void LaunchErrorScene(::GlobalNamespace::FatalErrorData fatalErrorData);

  static inline ::GlobalNamespace::FatalErrorManager* New_ctor();

  /// @brief Method OpenWithNonFatalError, addr 0x29c9578, size 0x7c, virtual false, abstract: false, final false
  static inline void OpenWithNonFatalError(::StringW title, ::StringW body, ::StringW recoverySuggestion);

  /// @brief Method ReportFatalError, addr 0x29c91a0, size 0xcc, virtual false, abstract: false, final false
  static inline void ReportFatalError(::GlobalNamespace::FatalErrorData errorData);

  /// @brief Method ReportFatalError, addr 0x29c90ac, size 0xf4, virtual false, abstract: false, final false
  static inline void ReportFatalError(::StringW shortMessage, ::System::Exception* exception);

  /// @brief Method Start, addr 0x29c8e8c, size 0x80, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopTimeout, addr 0x29c8f7c, size 0x108, virtual false, abstract: false, final false
  static inline void StopTimeout();

  /// @brief Method TimeoutRoutine, addr 0x29c8f0c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TimeoutRoutine(float_t duration);

  /// @brief Method TryGetFatalError, addr 0x29c826c, size 0x60, virtual false, abstract: false, final false
  static inline bool TryGetFatalError(ByRef<::GlobalNamespace::FatalErrorData> fatalErrorData);

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_timeoutRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_timeoutRoutine() const;

  constexpr void __cordl_internal_set_timeoutRoutine(::UnityEngine::Coroutine* value);

  /// @brief Method .ctor, addr 0x29c95f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::FatalErrorData getStaticF_fatalErrorData();

  static inline bool getStaticF_hasFatalError();

  static inline bool getStaticF_hasLaunchedErrorScene();

  static inline bool getStaticF_hasStoppedTimeout();

  static inline void setStaticF_fatalErrorData(::GlobalNamespace::FatalErrorData value);

  static inline void setStaticF_hasFatalError(bool value);

  static inline void setStaticF_hasLaunchedErrorScene(bool value);

  static inline void setStaticF_hasStoppedTimeout(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FatalErrorManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FatalErrorManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FatalErrorManager(FatalErrorManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FatalErrorManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FatalErrorManager(FatalErrorManager const&) = delete;

  /// @brief Field timeoutRoutine, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___timeoutRoutine;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Fatal Error: " };

  /// @brief Field defaultRecoverySuggestion offset 0xffffffff size 0x8
  static constexpr ::ConstString defaultRecoverySuggestion{ u"Try restarting the game.\nIf the problem persists, please reach out on Discord: discord.gg/yeeps" };

  /// @brief Field errorSceneIndex offset 0xffffffff size 0x4
  static constexpr int32_t errorSceneIndex{ static_cast<int32_t>(0x2) };

  /// @brief Field timeoutDuration offset 0xffffffff size 0x4
  static constexpr float_t timeoutDuration{ 60.0 };

  /// @brief Field timeoutInEditorDuration offset 0xffffffff size 0x4
  static constexpr float_t timeoutInEditorDuration{ 60.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FatalErrorManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorManager, ___timeoutRoutine) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FatalErrorManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FatalErrorManager*, "", "FatalErrorManager");
NEED_NO_BOX(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FatalErrorManager___TimeoutRoutine_d__12*, "", "FatalErrorManager/<TimeoutRoutine>d__12");
