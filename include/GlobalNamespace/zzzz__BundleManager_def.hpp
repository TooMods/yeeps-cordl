#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleManager)
namespace GlobalNamespace {
class BundleData;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
class __BundleManager__OnActiveBundleUpdated;
}
namespace GlobalNamespace {
class __BundleManager__OnFetchActiveBundleFailure;
}
namespace GlobalNamespace {
class __BundleManager__OnFetchActiveBundleSuccess;
}
namespace GlobalNamespace {
class __BundleManager__OnTimeUntilExpireUpdated;
}
namespace GlobalNamespace {
struct __BundleManager___FetchActiveBundle_d__21;
}
namespace GlobalNamespace {
class __BundleManager____c;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class BundleManager;
}
namespace GlobalNamespace {
class __BundleManager__OnActiveBundleUpdated;
}
namespace GlobalNamespace {
class __BundleManager__OnFetchActiveBundleFailure;
}
namespace GlobalNamespace {
class __BundleManager__OnFetchActiveBundleSuccess;
}
namespace GlobalNamespace {
class __BundleManager__OnTimeUntilExpireUpdated;
}
namespace GlobalNamespace {
class __BundleManager____c;
}
namespace GlobalNamespace {
struct __BundleManager___FetchActiveBundle_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BundleManager);
MARK_REF_PTR_T(::GlobalNamespace::__BundleManager__OnActiveBundleUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure);
MARK_REF_PTR_T(::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__BundleManager____c);
MARK_VAL_T(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21);
// Type: ::OnActiveBundleUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager::OnActiveBundleUpdated*
class CORDL_TYPE __BundleManager__OnActiveBundleUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1596734, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BundleData* newActiveBundle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1596754, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1596720, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::BundleData* newActiveBundle);

  static inline ::GlobalNamespace::__BundleManager__OnActiveBundleUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15965f4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager__OnActiveBundleUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnActiveBundleUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleManager__OnActiveBundleUpdated(__BundleManager__OnActiveBundleUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnActiveBundleUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleManager__OnActiveBundleUpdated(__BundleManager__OnActiveBundleUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager__OnActiveBundleUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTimeUntilExpireUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager::OnTimeUntilExpireUpdated*
class CORDL_TYPE __BundleManager__OnTimeUntilExpireUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1596838, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::TimeSpan newTimeUntilExpire, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15968bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1596824, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::TimeSpan newTimeUntilExpire);

  static inline ::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1596760, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager__OnTimeUntilExpireUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnTimeUntilExpireUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleManager__OnTimeUntilExpireUpdated(__BundleManager__OnTimeUntilExpireUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnTimeUntilExpireUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleManager__OnTimeUntilExpireUpdated(__BundleManager__OnTimeUntilExpireUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchActiveBundleSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager::OnFetchActiveBundleSuccess*
class CORDL_TYPE __BundleManager__OnFetchActiveBundleSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x15968dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BundleData* activeBundle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15968fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x15968c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::BundleData* activeBundle);

  static inline ::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x159601c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager__OnFetchActiveBundleSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnFetchActiveBundleSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleManager__OnFetchActiveBundleSuccess(__BundleManager__OnFetchActiveBundleSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnFetchActiveBundleSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleManager__OnFetchActiveBundleSuccess(__BundleManager__OnFetchActiveBundleSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchActiveBundleFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager::OnFetchActiveBundleFailure*
class CORDL_TYPE __BundleManager__OnFetchActiveBundleFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x159691c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x159693c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1596908, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1596148, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager__OnFetchActiveBundleFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnFetchActiveBundleFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleManager__OnFetchActiveBundleFailure(__BundleManager__OnFetchActiveBundleFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager__OnFetchActiveBundleFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleManager__OnFetchActiveBundleFailure(__BundleManager__OnFetchActiveBundleFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager::<>c*
class CORDL_TYPE __BundleManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BundleManager____c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_1, put = setStaticF___9__17_1))::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* __9__17_1;

  static inline ::GlobalNamespace::__BundleManager____c* New_ctor();

  /// @brief Method <Start>b__17_0, addr 0x15969b4, size 0x8, virtual false, abstract: false, final false
  inline void _Start_b__17_0(::GlobalNamespace::BundleData* activeBundle);

  /// @brief Method <Start>b__17_1, addr 0x15969bc, size 0x8c, virtual false, abstract: false, final false
  inline void _Start_b__17_1(::StringW errorType);

  /// @brief Method .ctor, addr 0x15969ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__BundleManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* getStaticF___9__17_0();

  static inline ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* getStaticF___9__17_1();

  static inline void setStaticF___9(::GlobalNamespace::__BundleManager____c* value);

  static inline void setStaticF___9__17_0(::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* value);

  static inline void setStaticF___9__17_1(::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleManager____c(__BundleManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleManager____c(__BundleManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchActiveBundle>d__21
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BundleManager::<FetchActiveBundle>d__21
struct CORDL_TYPE __BundleManager___FetchActiveBundle_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1596a48, size 0x618, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x15972a8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleManager___FetchActiveBundle_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess*", modifiers: "", def_value: None }, CppParam { name: "_activeBundleKey_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __BundleManager___FetchActiveBundle_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                      ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* onFailure,
                                                      ::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* onSuccess, ::StringW _activeBundleKey_5__2,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* onSuccess;

  /// @brief Field <activeBundleKey>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _activeBundleKey_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, _activeBundleKey_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BundleManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleManager*
class CORDL_TYPE BundleManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::BundleManager>> {
public:
  // Declarations
  using OnActiveBundleUpdated = ::GlobalNamespace::__BundleManager__OnActiveBundleUpdated;

  using OnFetchActiveBundleFailure = ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure;

  using OnFetchActiveBundleSuccess = ::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess;

  using OnTimeUntilExpireUpdated = ::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated;

  using _FetchActiveBundle_d__21 = ::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21;

  using __c = ::GlobalNamespace::__BundleManager____c;

  /// @brief Field <activeBundle>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__activeBundle_k__BackingField, put = setStaticF__activeBundle_k__BackingField))::GlobalNamespace::BundleData* _activeBundle_k__BackingField;

  /// @brief Field <timeUntilExpire>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__timeUntilExpire_k__BackingField, put = setStaticF__timeUntilExpire_k__BackingField))::System::TimeSpan _timeUntilExpire_k__BackingField;

  /// @brief Field nextTimeUntilExpireUpdateTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nextTimeUntilExpireUpdateTime, put = __cordl_internal_set_nextTimeUntilExpireUpdateTime)) float_t nextTimeUntilExpireUpdateTime;

  /// @brief Field onActiveBundleUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onActiveBundleUpdatedCallbacks,
                      put = __cordl_internal_set_onActiveBundleUpdatedCallbacks))::GlobalNamespace::__BundleManager__OnActiveBundleUpdated* onActiveBundleUpdatedCallbacks;

  /// @brief Field onTimeUntilExpireUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onTimeUntilExpireUpdatedCallbacks,
                      put = __cordl_internal_set_onTimeUntilExpireUpdatedCallbacks))::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated* onTimeUntilExpireUpdatedCallbacks;

  /// @brief Method FetchActiveBundle, addr 0x159621c, size 0xa0, virtual false, abstract: false, final false
  static inline void FetchActiveBundle(::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess* onSuccess, ::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure* onFailure);

  static inline ::GlobalNamespace::BundleManager* New_ctor();

  /// @brief Method SetActiveBundle, addr 0x1595c0c, size 0x25c, virtual false, abstract: false, final false
  static inline void SetActiveBundle(::GlobalNamespace::BundleData* newActiveBundle);

  /// @brief Method Start, addr 0x1595ec0, size 0x15c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetActiveBundle, addr 0x1595e68, size 0x58, virtual false, abstract: false, final false
  static inline bool TryGetActiveBundle(ByRef<::GlobalNamespace::BundleData*> bundle);

  /// @brief Method Update, addr 0x15962bc, size 0x2f0, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextTimeUntilExpireUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextTimeUntilExpireUpdateTime();

  constexpr ::GlobalNamespace::__BundleManager__OnActiveBundleUpdated*& __cordl_internal_get_onActiveBundleUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BundleManager__OnActiveBundleUpdated*> const& __cordl_internal_get_onActiveBundleUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated*& __cordl_internal_get_onTimeUntilExpireUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated*> const& __cordl_internal_get_onTimeUntilExpireUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_nextTimeUntilExpireUpdateTime(float_t value);

  constexpr void __cordl_internal_set_onActiveBundleUpdatedCallbacks(::GlobalNamespace::__BundleManager__OnActiveBundleUpdated* value);

  constexpr void __cordl_internal_set_onTimeUntilExpireUpdatedCallbacks(::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated* value);

  /// @brief Method .ctor, addr 0x15965ac, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BundleData* getStaticF__activeBundle_k__BackingField();

  static inline ::System::TimeSpan getStaticF__timeUntilExpire_k__BackingField();

  /// @brief Method get_activeBundle, addr 0x1595ae4, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::BundleData* get_activeBundle();

  /// @brief Method get_timeUntilExpire, addr 0x1595b78, size 0x48, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_timeUntilExpire();

  static inline void setStaticF__activeBundle_k__BackingField(::GlobalNamespace::BundleData* value);

  static inline void setStaticF__timeUntilExpire_k__BackingField(::System::TimeSpan value);

  /// @brief Method set_activeBundle, addr 0x1595b2c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_activeBundle(::GlobalNamespace::BundleData* value);

  /// @brief Method set_timeUntilExpire, addr 0x1595bc0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_timeUntilExpire(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BundleManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BundleManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BundleManager(BundleManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BundleManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BundleManager(BundleManager const&) = delete;

  /// @brief Field onActiveBundleUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BundleManager__OnActiveBundleUpdated* ___onActiveBundleUpdatedCallbacks;

  /// @brief Field nextTimeUntilExpireUpdateTime, offset: 0x20, size: 0x4, def value: None
  float_t ___nextTimeUntilExpireUpdateTime;

  /// @brief Field onTimeUntilExpireUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated* ___onTimeUntilExpireUpdatedCallbacks;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Bundles: " };

  /// @brief Field timeUntilExpireUpdateIntervals offset 0xffffffff size 0x4
  static constexpr float_t timeUntilExpireUpdateIntervals{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BundleManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleManager, ___onActiveBundleUpdatedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleManager, ___nextTimeUntilExpireUpdateTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleManager, ___onTimeUntilExpireUpdatedCallbacks) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BundleManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BundleManager*, "", "BundleManager");
NEED_NO_BOX(::GlobalNamespace::__BundleManager__OnActiveBundleUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager__OnActiveBundleUpdated*, "", "BundleManager/OnActiveBundleUpdated");
NEED_NO_BOX(::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager__OnFetchActiveBundleFailure*, "", "BundleManager/OnFetchActiveBundleFailure");
NEED_NO_BOX(::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager__OnFetchActiveBundleSuccess*, "", "BundleManager/OnFetchActiveBundleSuccess");
NEED_NO_BOX(::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager__OnTimeUntilExpireUpdated*, "", "BundleManager/OnTimeUntilExpireUpdated");
NEED_NO_BOX(::GlobalNamespace::__BundleManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager____c*, "", "BundleManager/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleManager___FetchActiveBundle_d__21, "", "BundleManager/<FetchActiveBundle>d__21");
