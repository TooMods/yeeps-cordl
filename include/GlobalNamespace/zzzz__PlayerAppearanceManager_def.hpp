#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAppearanceManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerAppearanceManager)
namespace GlobalNamespace {
class AvatarIdentity;
}
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
struct __AWSDatabase__BatchDynamoResponse;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__ActiveFetchRequest;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__CachedPlayerAppearance;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager___BatchGetAccountIDs_d__11;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerAppearanceManager;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__ActiveFetchRequest;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed;
}
namespace GlobalNamespace {
class __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__CachedPlayerAppearance;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager__PlayerAppearance;
}
namespace GlobalNamespace {
struct __PlayerAppearanceManager___BatchGetAccountIDs_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerAppearanceManager);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess);
MARK_VAL_T(::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance);
MARK_VAL_T(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance);
MARK_VAL_T(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11);
// Type: ::PlayerAppearance
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerAppearanceManager::PlayerAppearance
struct CORDL_TYPE __PlayerAppearanceManager__PlayerAppearance {
public:
  // Declarations
  __declspec(property(get = get_activeCosmetics, put = set_activeCosmetics))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmetics;

  __declspec(property(get = get_avatarIdentity, put = set_avatarIdentity))::GlobalNamespace::AvatarIdentity* avatarIdentity;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  /// @brief Method .ctor, addr 0x106b874, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* activeCosmetics, ::GlobalNamespace::AvatarIdentity* avatarIdentity);

  /// @brief Method .ctor, addr 0x106b498, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerData playerData);

  /// @brief Method get_activeCosmetics, addr 0x106b854, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* get_activeCosmetics();

  /// @brief Method get_avatarIdentity, addr 0x106b864, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AvatarIdentity* get_avatarIdentity();

  /// @brief Method get_displayName, addr 0x106b844, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method set_activeCosmetics, addr 0x106b85c, size 0x8, virtual false, abstract: false, final false
  inline void set_activeCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* value);

  /// @brief Method set_avatarIdentity, addr 0x106b86c, size 0x8, virtual false, abstract: false, final false
  inline void set_avatarIdentity(::GlobalNamespace::AvatarIdentity* value);

  /// @brief Method set_displayName, addr 0x106b84c, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager__PlayerAppearance();

  // Ctor Parameters [CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_activeCosmetics_k__BackingField", ty:
  // "::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>*", modifiers: "", def_value: None }, CppParam { name: "_avatarIdentity_k__BackingField", ty:
  // "::GlobalNamespace::AvatarIdentity*", modifiers: "", def_value: None }]
  constexpr __PlayerAppearanceManager__PlayerAppearance(::StringW _displayName_k__BackingField,
                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* _activeCosmetics_k__BackingField,
                                                        ::GlobalNamespace::AvatarIdentity* _avatarIdentity_k__BackingField) noexcept;

  /// @brief Field <displayName>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _displayName_k__BackingField;

  /// @brief Field <activeCosmetics>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* _activeCosmetics_k__BackingField;

  /// @brief Field <avatarIdentity>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AvatarIdentity* _avatarIdentity_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, _displayName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, _activeCosmetics_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, _avatarIdentity_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CachedPlayerAppearance
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerAppearanceManager::CachedPlayerAppearance
struct CORDL_TYPE __PlayerAppearanceManager__CachedPlayerAppearance {
public:
  // Declarations
  __declspec(property(get = get_expirationTime, put = set_expirationTime))::System::DateTime expirationTime;

  __declspec(property(get = get_playerAppearance, put = set_playerAppearance))::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance;

  /// @brief Method IsExpired, addr 0x106afbc, size 0x60, virtual false, abstract: false, final false
  inline bool IsExpired();

  /// @brief Method .ctor, addr 0x106b698, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method get_expirationTime, addr 0x106b880, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_expirationTime();

  /// @brief Method get_playerAppearance, addr 0x106b890, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance get_playerAppearance();

  /// @brief Method set_expirationTime, addr 0x106b888, size 0x8, virtual false, abstract: false, final false
  inline void set_expirationTime(::System::DateTime value);

  /// @brief Method set_playerAppearance, addr 0x106b8a4, size 0x14, virtual false, abstract: false, final false
  inline void set_playerAppearance(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager__CachedPlayerAppearance();

  // Ctor Parameters [CppParam { name: "_expirationTime_k__BackingField", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_playerAppearance_k__BackingField", ty:
  // "::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance", modifiers: "", def_value: None }]
  constexpr __PlayerAppearanceManager__CachedPlayerAppearance(::System::DateTime _expirationTime_k__BackingField,
                                                              ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance _playerAppearance_k__BackingField) noexcept;

  /// @brief Field <expirationTime>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime _expirationTime_k__BackingField;

  /// @brief Field <playerAppearance>k__BackingField, offset: 0x8, size: 0x18, def value: None
  ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance _playerAppearance_k__BackingField;

  /// @brief Field CACHE_LIFETIME offset 0xffffffff size 0x4
  static constexpr int32_t CACHE_LIFETIME{ static_cast<int32_t>(0x3c) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance, _expirationTime_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance, _playerAppearance_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ActiveFetchRequest
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerAppearanceManager::ActiveFetchRequest*
class CORDL_TYPE __PlayerAppearanceManager__ActiveFetchRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field <onFailed>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__onFailed_k__BackingField,
                      put = __cordl_internal_set__onFailed_k__BackingField))::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* _onFailed_k__BackingField;

  /// @brief Field <onSuccess>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__onSuccess_k__BackingField,
                      put = __cordl_internal_set__onSuccess_k__BackingField))::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* _onSuccess_k__BackingField;

  __declspec(property(get = get_onFailed, put = set_onFailed))::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed;

  __declspec(property(get = get_onSuccess, put = set_onSuccess))::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess;

  /// @brief Method AddCallbacks, addr 0x106b01c, size 0xbc, virtual false, abstract: false, final false
  inline void AddCallbacks(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                           ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed);

  static inline ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest* New_ctor(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                                                                           ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed);

  /// @brief Method OnFailure, addr 0x106b310, size 0x1c, virtual false, abstract: false, final false
  inline void OnFailure(::StringW errType);

  /// @brief Method OnSuccess, addr 0x106b414, size 0x48, virtual false, abstract: false, final false
  inline void OnSuccess(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*& __cordl_internal_get__onFailed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*> const& __cordl_internal_get__onFailed_k__BackingField() const;

  constexpr ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*& __cordl_internal_get__onSuccess_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*> const& __cordl_internal_get__onSuccess_k__BackingField() const;

  constexpr void __cordl_internal_set__onFailed_k__BackingField(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* value);

  constexpr void __cordl_internal_set__onSuccess_k__BackingField(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* value);

  /// @brief Method .ctor, addr 0x106b0d8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed);

  /// @brief Method get_onFailed, addr 0x106b8c8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* get_onFailed();

  /// @brief Method get_onSuccess, addr 0x106b8b8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* get_onSuccess();

  /// @brief Method set_onFailed, addr 0x106b8d0, size 0x8, virtual false, abstract: false, final false
  inline void set_onFailed(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* value);

  /// @brief Method set_onSuccess, addr 0x106b8c0, size 0x8, virtual false, abstract: false, final false
  inline void set_onSuccess(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager__ActiveFetchRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__ActiveFetchRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerAppearanceManager__ActiveFetchRequest(__PlayerAppearanceManager__ActiveFetchRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__ActiveFetchRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerAppearanceManager__ActiveFetchRequest(__PlayerAppearanceManager__ActiveFetchRequest const&) = delete;

  /// @brief Field <onSuccess>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* ____onSuccess_k__BackingField;

  /// @brief Field <onFailed>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* ____onFailed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest, ____onSuccess_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest, ____onFailed_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchPlayerAppearanceSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerAppearanceManager::OnFetchPlayerAppearanceSuccess*
class CORDL_TYPE __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x106b9d8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x106ba64, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x106b99c, size 0x3c, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  static inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x106b8d8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess(__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess(__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchPlayerAppearanceFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerAppearanceManager::OnFetchPlayerAppearanceFailed*
class CORDL_TYPE __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x106bb58, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x106bb78, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x106bb44, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x106ba70, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed(__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerAppearanceManager__OnFetchPlayerAppearanceFailed(__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<BatchGetAccountIDs>d__11
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerAppearanceManager::<BatchGetAccountIDs>d__11
struct CORDL_TYPE __PlayerAppearanceManager___BatchGetAccountIDs_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x106bb84, size 0x9f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x106c888, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerAppearanceManager___BatchGetAccountIDs_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty: "::System::Collections::Generic::List_1<::StringW>*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerAppearanceManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerAppearanceManager___BatchGetAccountIDs_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                 ::System::Collections::Generic::List_1<::StringW>* accountIDs, ::UnityW<::GlobalNamespace::PlayerAppearanceManager> __4__this,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field accountIDs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerAppearanceManager> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, accountIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAppearanceManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerAppearanceManager*
class CORDL_TYPE PlayerAppearanceManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PlayerAppearanceManager>> {
public:
  // Declarations
  using ActiveFetchRequest = ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest;

  using CachedPlayerAppearance = ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance;

  using OnFetchPlayerAppearanceFailed = ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed;

  using OnFetchPlayerAppearanceSuccess = ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess;

  using PlayerAppearance = ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance;

  using _BatchGetAccountIDs_d__11 = ::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11;

  /// @brief Field accountIDsToFetchNextFrame, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_accountIDsToFetchNextFrame,
                      put = __cordl_internal_set_accountIDsToFetchNextFrame))::System::Collections::Generic::List_1<::StringW>* accountIDsToFetchNextFrame;

  /// @brief Field activeRequests, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_activeRequests,
               put = __cordl_internal_set_activeRequests))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>* activeRequests;

  /// @brief Field playerAppearanceCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAppearanceCache, put = __cordl_internal_set_playerAppearanceCache))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>* playerAppearanceCache;

  /// @brief Method BatchGetAccountIDs, addr 0x106b1c8, size 0x9c, virtual false, abstract: false, final false
  inline void BatchGetAccountIDs(::System::Collections::Generic::List_1<::StringW>* accountIDs);

  /// @brief Method FetchPlayerAppearance, addr 0x106add4, size 0x1e8, virtual false, abstract: false, final false
  inline void FetchPlayerAppearance(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess* onSuccess,
                                    ::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed* onFailed);

  /// @brief Method ForceSetPlayerAppearance, addr 0x106b4b4, size 0x108, virtual false, abstract: false, final false
  inline void ForceSetPlayerAppearance(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method LateUpdate, addr 0x106b104, size 0xc4, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PlayerAppearanceManager* New_ctor();

  /// @brief Method OnFetchFailed, addr 0x106b264, size 0xac, virtual false, abstract: false, final false
  inline void OnFetchFailed(::StringW accountID, ::StringW errTypeRaw);

  /// @brief Method OnFetchSuccess, addr 0x106b32c, size 0xe8, virtual false, abstract: false, final false
  inline void OnFetchSuccess(::StringW accountID, ::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance playerAppearance);

  /// @brief Method OnOtherPlayerJoinedPhotonRoom, addr 0x106b45c, size 0x3c, virtual false, abstract: false, final false
  inline void OnOtherPlayerJoinedPhotonRoom(::GlobalNamespace::PlayerData otherPlayerData);

  /// @brief Method OnPlayerDataModified, addr 0x106b5bc, size 0xdc, virtual false, abstract: false, final false
  inline void OnPlayerDataModified(::GlobalNamespace::PlayerData playerData, ::System::Collections::Generic::List_1<::StringW>* modifiedFields);

  /// @brief Method Start, addr 0x106aac0, size 0x18c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_accountIDsToFetchNextFrame();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_accountIDsToFetchNextFrame() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>*& __cordl_internal_get_activeRequests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>*> const&
  __cordl_internal_get_activeRequests() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>*& __cordl_internal_get_playerAppearanceCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>*> const&
  __cordl_internal_get_playerAppearanceCache() const;

  constexpr void __cordl_internal_set_accountIDsToFetchNextFrame(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_activeRequests(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>* value);

  constexpr void __cordl_internal_set_playerAppearanceCache(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>* value);

  /// @brief Method .ctor, addr 0x106b72c, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerAppearanceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerAppearanceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerAppearanceManager(PlayerAppearanceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerAppearanceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerAppearanceManager(PlayerAppearanceManager const&) = delete;

  /// @brief Field playerAppearanceCache, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance>* ___playerAppearanceCache;

  /// @brief Field accountIDsToFetchNextFrame, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___accountIDsToFetchNextFrame;

  /// @brief Field activeRequests, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*>* ___activeRequests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerAppearanceManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAppearanceManager, ___playerAppearanceCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAppearanceManager, ___accountIDsToFetchNextFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerAppearanceManager, ___activeRequests) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerAppearanceManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAppearanceManager*, "", "PlayerAppearanceManager");
NEED_NO_BOX(::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager__ActiveFetchRequest*, "", "PlayerAppearanceManager/ActiveFetchRequest");
NEED_NO_BOX(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceFailed*, "", "PlayerAppearanceManager/OnFetchPlayerAppearanceFailed");
NEED_NO_BOX(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager__OnFetchPlayerAppearanceSuccess*, "", "PlayerAppearanceManager/OnFetchPlayerAppearanceSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager__CachedPlayerAppearance, "", "PlayerAppearanceManager/CachedPlayerAppearance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager__PlayerAppearance, "", "PlayerAppearanceManager/PlayerAppearance");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerAppearanceManager___BatchGetAccountIDs_d__11, "", "PlayerAppearanceManager/<BatchGetAccountIDs>d__11");
