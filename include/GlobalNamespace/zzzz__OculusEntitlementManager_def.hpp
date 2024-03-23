#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OculusAccountData_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusEntitlementManager)
namespace GlobalNamespace {
struct OculusAccountData;
}
namespace GlobalNamespace {
class __OculusEntitlementManager__OnFetchOculusUserDataFailed;
}
namespace GlobalNamespace {
class __OculusEntitlementManager__OnFetchOculusUserDataSuccess;
}
namespace GlobalNamespace {
class __OculusEntitlementManager___TimeoutRoutine_d__20;
}
namespace Oculus::Platform {
class Message;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
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
class OculusEntitlementManager;
}
namespace GlobalNamespace {
class __OculusEntitlementManager__OnFetchOculusUserDataFailed;
}
namespace GlobalNamespace {
class __OculusEntitlementManager__OnFetchOculusUserDataSuccess;
}
namespace GlobalNamespace {
class __OculusEntitlementManager___TimeoutRoutine_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusEntitlementManager);
MARK_REF_PTR_T(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed);
MARK_REF_PTR_T(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20);
// Type: ::OnFetchOculusUserDataSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusEntitlementManager::OnFetchOculusUserDataSuccess*
class CORDL_TYPE __OculusEntitlementManager__OnFetchOculusUserDataSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c8748c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::OculusAccountData data, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c87518, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c87458, size 0x34, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::OculusAccountData data);

  static inline ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c87394, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusEntitlementManager__OnFetchOculusUserDataSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager__OnFetchOculusUserDataSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusEntitlementManager__OnFetchOculusUserDataSuccess(__OculusEntitlementManager__OnFetchOculusUserDataSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager__OnFetchOculusUserDataSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusEntitlementManager__OnFetchOculusUserDataSuccess(__OculusEntitlementManager__OnFetchOculusUserDataSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchOculusUserDataFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusEntitlementManager::OnFetchOculusUserDataFailed*
class CORDL_TYPE __OculusEntitlementManager__OnFetchOculusUserDataFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c8760c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorMessage, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c8762c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c875f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorMessage);

  static inline ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c87524, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusEntitlementManager__OnFetchOculusUserDataFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager__OnFetchOculusUserDataFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusEntitlementManager__OnFetchOculusUserDataFailed(__OculusEntitlementManager__OnFetchOculusUserDataFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager__OnFetchOculusUserDataFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusEntitlementManager__OnFetchOculusUserDataFailed(__OculusEntitlementManager__OnFetchOculusUserDataFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TimeoutRoutine>d__20
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusEntitlementManager::<TimeoutRoutine>d__20*
class CORDL_TYPE __OculusEntitlementManager___TimeoutRoutine_d__20 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::OculusEntitlementManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c8763c, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c876dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c876e4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c87724, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c87638, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::OculusEntitlementManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::OculusEntitlementManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OculusEntitlementManager> value);

  /// @brief Method .ctor, addr 0x2c86c78, size 0x28, virtual false, abstract: false, final false
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
  constexpr __OculusEntitlementManager___TimeoutRoutine_d__20();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager___TimeoutRoutine_d__20", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusEntitlementManager___TimeoutRoutine_d__20(__OculusEntitlementManager___TimeoutRoutine_d__20&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusEntitlementManager___TimeoutRoutine_d__20", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusEntitlementManager___TimeoutRoutine_d__20(__OculusEntitlementManager___TimeoutRoutine_d__20 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OculusEntitlementManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusEntitlementManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusEntitlementManager*
class CORDL_TYPE OculusEntitlementManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::OculusEntitlementManager>> {
public:
  // Declarations
  using OnFetchOculusUserDataFailed = ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed;

  using OnFetchOculusUserDataSuccess = ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess;

  using _TimeoutRoutine_d__20 = ::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20;

  /// @brief Field <oculusAccountData>k__BackingField, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF__oculusAccountData_k__BackingField,
                             put = setStaticF__oculusAccountData_k__BackingField))::GlobalNamespace::OculusAccountData _oculusAccountData_k__BackingField;

  /// @brief Field appID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_appID, put = __cordl_internal_set_appID))::StringW appID;

  /// @brief Field canUseOculusFeatures, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_canUseOculusFeatures, put = setStaticF_canUseOculusFeatures)) bool canUseOculusFeatures;

  /// @brief Field curTimeoutRoutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curTimeoutRoutine, put = __cordl_internal_set_curTimeoutRoutine))::UnityEngine::Coroutine* curTimeoutRoutine;

  /// @brief Field didCheck, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_didCheck, put = setStaticF_didCheck)) bool didCheck;

  /// @brief Field didTimeout, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_didTimeout, put = setStaticF_didTimeout)) bool didTimeout;

  /// @brief Field hasFetchedAccountData, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasFetchedAccountData, put = setStaticF_hasFetchedAccountData)) bool hasFetchedAccountData;

  /// @brief Field hasOculusAccountData, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasOculusAccountData, put = setStaticF_hasOculusAccountData)) bool hasOculusAccountData;

  /// @brief Field onFailed, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailed, put = __cordl_internal_set_onFailed))::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* onFailed;

  /// @brief Field onSuccess, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess* onSuccess;

  /// @brief Field quitOnFail, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_quitOnFail, put = __cordl_internal_set_quitOnFail)) bool quitOnFail;

  /// @brief Field standaloneMode, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_standaloneMode, put = __cordl_internal_set_standaloneMode)) bool standaloneMode;

  /// @brief Method CheckCallback, addr 0x2c86d14, size 0x14c, virtual false, abstract: false, final false
  inline void CheckCallback(::Oculus::Platform::Message* msg);

  /// @brief Method GetLoggedInUserCallback, addr 0x2c86ff4, size 0x32c, virtual false, abstract: false, final false
  inline void GetLoggedInUserCallback(::Oculus::Platform::Message* message);

  static inline ::GlobalNamespace::OculusEntitlementManager* New_ctor();

  /// @brief Method OnCheckPassed, addr 0x2c86e60, size 0x194, virtual false, abstract: false, final false
  inline void OnCheckPassed();

  /// @brief Method OnFailed, addr 0x2c86a50, size 0xf4, virtual false, abstract: false, final false
  inline void OnFailed(::StringW errorMessage);

  /// @brief Method OnSuccess, addr 0x2c86b44, size 0xcc, virtual false, abstract: false, final false
  inline void OnSuccess();

  /// @brief Method OnTimeout, addr 0x2c86ca0, size 0x74, virtual false, abstract: false, final false
  inline void OnTimeout();

  /// @brief Method TimeoutRoutine, addr 0x2c86c10, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* TimeoutRoutine();

  /// @brief Method TryLoadOculusAccount, addr 0x2c86694, size 0x3bc, virtual false, abstract: false, final false
  inline void TryLoadOculusAccount(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess* onSuccess,
                                   ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* onFailed);

  constexpr ::StringW const& __cordl_internal_get_appID() const;

  constexpr ::StringW& __cordl_internal_get_appID();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curTimeoutRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curTimeoutRoutine() const;

  constexpr ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed*& __cordl_internal_get_onFailed();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed*> const& __cordl_internal_get_onFailed() const;

  constexpr ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr bool const& __cordl_internal_get_quitOnFail() const;

  constexpr bool& __cordl_internal_get_quitOnFail();

  constexpr bool const& __cordl_internal_get_standaloneMode() const;

  constexpr bool& __cordl_internal_get_standaloneMode();

  constexpr void __cordl_internal_set_appID(::StringW value);

  constexpr void __cordl_internal_set_curTimeoutRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_onFailed(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess* value);

  constexpr void __cordl_internal_set_quitOnFail(bool value);

  constexpr void __cordl_internal_set_standaloneMode(bool value);

  /// @brief Method .ctor, addr 0x2c87320, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OculusAccountData getStaticF__oculusAccountData_k__BackingField();

  static inline bool getStaticF_canUseOculusFeatures();

  static inline bool getStaticF_didCheck();

  static inline bool getStaticF_didTimeout();

  static inline bool getStaticF_hasFetchedAccountData();

  static inline bool getStaticF_hasOculusAccountData();

  /// @brief Method get_oculusAccountData, addr 0x2c865e0, size 0x54, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OculusAccountData get_oculusAccountData();

  static inline void setStaticF__oculusAccountData_k__BackingField(::GlobalNamespace::OculusAccountData value);

  static inline void setStaticF_canUseOculusFeatures(bool value);

  static inline void setStaticF_didCheck(bool value);

  static inline void setStaticF_didTimeout(bool value);

  static inline void setStaticF_hasFetchedAccountData(bool value);

  static inline void setStaticF_hasOculusAccountData(bool value);

  /// @brief Method set_oculusAccountData, addr 0x2c86634, size 0x60, virtual false, abstract: false, final false
  static inline void set_oculusAccountData(::GlobalNamespace::OculusAccountData value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusEntitlementManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusEntitlementManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusEntitlementManager(OculusEntitlementManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusEntitlementManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusEntitlementManager(OculusEntitlementManager const&) = delete;

  /// @brief Field quitOnFail, offset: 0x18, size: 0x1, def value: None
  bool ___quitOnFail;

  /// @brief Field standaloneMode, offset: 0x19, size: 0x1, def value: None
  bool ___standaloneMode;

  /// @brief Field appID, offset: 0x20, size: 0x8, def value: None
  ::StringW ___appID;

  /// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess* ___onSuccess;

  /// @brief Field onFailed, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed* ___onFailed;

  /// @brief Field curTimeoutRoutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curTimeoutRoutine;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Entitlement: " };

  /// @brief Field timeoutDuration offset 0xffffffff size 0x4
  static constexpr float_t timeoutDuration{ 10.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusEntitlementManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___quitOnFail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___standaloneMode) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___appID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___onFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusEntitlementManager, ___curTimeoutRoutine) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusEntitlementManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusEntitlementManager*, "", "OculusEntitlementManager");
NEED_NO_BOX(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataFailed*, "", "OculusEntitlementManager/OnFetchOculusUserDataFailed");
NEED_NO_BOX(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusEntitlementManager__OnFetchOculusUserDataSuccess*, "", "OculusEntitlementManager/OnFetchOculusUserDataSuccess");
NEED_NO_BOX(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusEntitlementManager___TimeoutRoutine_d__20*, "", "OculusEntitlementManager/<TimeoutRoutine>d__20");
