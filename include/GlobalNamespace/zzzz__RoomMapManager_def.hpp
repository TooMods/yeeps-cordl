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
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMapManager)
namespace GlobalNamespace {
struct RoomMapNodeData;
}
namespace GlobalNamespace {
class RoomMap;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
struct __RoomData__Type;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetHasPermissionToJoinRoomFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetRoomMapFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetRoomMapSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated;
}
namespace GlobalNamespace {
class __RoomMapManager__OnTargetPublicWorldCodeUpdated;
}
namespace GlobalNamespace {
struct __RoomMapManager___GetRoomMap_d__19;
}
namespace GlobalNamespace {
class __RoomMapManager____c;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass24_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass26_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass49_0;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomMapManager;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetHasPermissionToJoinRoomFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetRoomMapFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetRoomMapSuccess;
}
namespace GlobalNamespace {
class __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated;
}
namespace GlobalNamespace {
class __RoomMapManager__OnTargetPublicWorldCodeUpdated;
}
namespace GlobalNamespace {
class __RoomMapManager____c;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass24_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass26_0;
}
namespace GlobalNamespace {
class __RoomMapManager____c__DisplayClass49_0;
}
namespace GlobalNamespace {
struct __RoomMapManager___GetRoomMap_d__19;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomMapManager);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0);
MARK_VAL_T(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19);
// Type: ::OnGetRoomMapSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetRoomMapSuccess*
class CORDL_TYPE __RoomMapManager__OnGetRoomMapSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x143438c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::RoomMap* roomMap, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14343ac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1434378, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::RoomMap* roomMap);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x143424c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetRoomMapSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetRoomMapSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetRoomMapSuccess(__RoomMapManager__OnGetRoomMapSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetRoomMapSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetRoomMapSuccess(__RoomMapManager__OnGetRoomMapSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetRoomMapFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetRoomMapFailure*
class CORDL_TYPE __RoomMapManager__OnGetRoomMapFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x14344a0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x14344c0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x143448c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14343b8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetRoomMapFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetRoomMapFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetRoomMapFailure(__RoomMapManager__OnGetRoomMapFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetRoomMapFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetRoomMapFailure(__RoomMapManager__OnGetRoomMapFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetNodeSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetNodeSuccess*
class CORDL_TYPE __RoomMapManager__OnGetNodeSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x143460c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__RoomMap__Node* node, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x143462c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x14345f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__RoomMap__Node* node);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x14344cc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetNodeSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetNodeSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetNodeSuccess(__RoomMapManager__OnGetNodeSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetNodeSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetNodeSuccess(__RoomMapManager__OnGetNodeSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetNodeFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetNodeFailure*
class CORDL_TYPE __RoomMapManager__OnGetNodeFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1434720, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1434740, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x143470c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1434638, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetNodeFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetNodeFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetNodeFailure(__RoomMapManager__OnGetNodeFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetNodeFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetNodeFailure(__RoomMapManager__OnGetNodeFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPrivateRoomTargetAccountIDUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnPrivateRoomTargetAccountIDUpdated*
class CORDL_TYPE __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1434834, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW newAccountID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1434854, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1434820, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW newAccountID);

  static inline ::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x143474c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated(__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnPrivateRoomTargetAccountIDUpdated(__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTargetPublicWorldCodeUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnTargetPublicWorldCodeUpdated*
class CORDL_TYPE __RoomMapManager__OnTargetPublicWorldCodeUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1434948, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW newCode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1434968, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1434934, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW newCode);

  static inline ::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1434860, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnTargetPublicWorldCodeUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnTargetPublicWorldCodeUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnTargetPublicWorldCodeUpdated(__RoomMapManager__OnTargetPublicWorldCodeUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnTargetPublicWorldCodeUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnTargetPublicWorldCodeUpdated(__RoomMapManager__OnTargetPublicWorldCodeUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetHasPermissionToJoinRoomSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetHasPermissionToJoinRoomSuccess*
class CORDL_TYPE __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1434a50, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool hasPermission, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1434ad8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1434a38, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool hasPermission);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1434974, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess(__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetHasPermissionToJoinRoomSuccess(__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetHasPermissionToJoinRoomFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::OnGetHasPermissionToJoinRoomFailure*
class CORDL_TYPE __RoomMapManager__OnGetHasPermissionToJoinRoomFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1434bcc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1434bec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1434bb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1434ae4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager__OnGetHasPermissionToJoinRoomFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetHasPermissionToJoinRoomFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager__OnGetHasPermissionToJoinRoomFailure(__RoomMapManager__OnGetHasPermissionToJoinRoomFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager__OnGetHasPermissionToJoinRoomFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager__OnGetHasPermissionToJoinRoomFailure(__RoomMapManager__OnGetHasPermissionToJoinRoomFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRoomMap>d__19
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomMapManager::<GetRoomMap>d__19
struct CORDL_TYPE __RoomMapManager___GetRoomMap_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1434bf8, size 0x97c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1435574, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager___GetRoomMap_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomMapKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onSuccess", ty: "::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __RoomMapManager___GetRoomMap_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomMapKey,
                                                ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* onSuccess, ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* onFailure,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomMapKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomMapKey;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* onSuccess;

  /// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* onFailure;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, roomMapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::<>c*
class CORDL_TYPE __RoomMapManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RoomMapManager____c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0))::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* __9__20_0;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_1, put = setStaticF___9__20_1))::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* __9__20_1;

  static inline ::GlobalNamespace::__RoomMapManager____c* New_ctor();

  /// @brief Method <RefreshRoomMap>b__20_0, addr 0x14355ec, size 0x7c, virtual false, abstract: false, final false
  inline void _RefreshRoomMap_b__20_0(::GlobalNamespace::RoomMap* roomMap);

  /// @brief Method <RefreshRoomMap>b__20_1, addr 0x1435668, size 0x128, virtual false, abstract: false, final false
  inline void _RefreshRoomMap_b__20_1(::StringW errType);

  /// @brief Method .ctor, addr 0x14355e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RoomMapManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* getStaticF___9__20_0();

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* getStaticF___9__20_1();

  static inline void setStaticF___9(::GlobalNamespace::__RoomMapManager____c* value);

  static inline void setStaticF___9__20_0(::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* value);

  static inline void setStaticF___9__20_1(::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager____c(__RoomMapManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager____c(__RoomMapManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::<>c__DisplayClass24_0*
class CORDL_TYPE __RoomMapManager____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gridPosition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gridPosition, put = __cordl_internal_set_gridPosition))::UnityEngine::Vector2Int gridPosition;

  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0* New_ctor();

  /// @brief Method <GetNode>b__0, addr 0x1435798, size 0xac, virtual false, abstract: false, final false
  inline void _GetNode_b__0(::GlobalNamespace::RoomMap* newRoomMap);

  /// @brief Method <GetNode>b__1, addr 0x1435844, size 0x1c, virtual false, abstract: false, final false
  inline void _GetNode_b__1(::StringW errType);

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_gridPosition() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_gridPosition();

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_gridPosition(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* value);

  /// @brief Method .ctor, addr 0x1435790, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager____c__DisplayClass24_0(__RoomMapManager____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager____c__DisplayClass24_0(__RoomMapManager____c__DisplayClass24_0 const&) = delete;

  /// @brief Field gridPosition, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___gridPosition;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* ___onFailure;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* ___onSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0, ___gridPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0, ___onSuccess) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::<>c__DisplayClass25_0*
class CORDL_TYPE __RoomMapManager____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess;

  /// @brief Field roomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKey, put = __cordl_internal_set_roomKey))::StringW roomKey;

  static inline ::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetNode>b__0, addr 0x1435868, size 0xac, virtual false, abstract: false, final false
  inline void _GetNode_b__0(::GlobalNamespace::RoomMap* newRoomMap);

  /// @brief Method <GetNode>b__1, addr 0x1435914, size 0x1c, virtual false, abstract: false, final false
  inline void _GetNode_b__1(::StringW errType);

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr ::StringW const& __cordl_internal_get_roomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomKey();

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* value);

  constexpr void __cordl_internal_set_roomKey(::StringW value);

  /// @brief Method .ctor, addr 0x1435860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager____c__DisplayClass25_0(__RoomMapManager____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager____c__DisplayClass25_0(__RoomMapManager____c__DisplayClass25_0 const&) = delete;

  /// @brief Field roomKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___roomKey;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* ___onFailure;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* ___onSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0, ___roomKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0, ___onSuccess) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::<>c__DisplayClass26_0*
class CORDL_TYPE __RoomMapManager____c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure;

  /// @brief Field onSuccess, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0* New_ctor();

  /// @brief Method <GetTransitionNode>b__0, addr 0x1435938, size 0xa8, virtual false, abstract: false, final false
  inline void _GetTransitionNode_b__0(::GlobalNamespace::RoomMap* newRoomMap);

  /// @brief Method <GetTransitionNode>b__1, addr 0x14359e0, size 0x1c, virtual false, abstract: false, final false
  inline void _GetTransitionNode_b__1(::StringW errType);

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* value);

  /// @brief Method .ctor, addr 0x1435930, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager____c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager____c__DisplayClass26_0(__RoomMapManager____c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager____c__DisplayClass26_0(__RoomMapManager____c__DisplayClass26_0 const&) = delete;

  /// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0, ___onFailure) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass49_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager::<>c__DisplayClass49_0*
class CORDL_TYPE __RoomMapManager____c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure* onFailure;

  /// @brief Field onSuccess, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0* New_ctor();

  /// @brief Method <GetHasPermissionToJoinRoom>b__0, addr 0x1435a04, size 0x48, virtual false, abstract: false, final false
  inline void _GetHasPermissionToJoinRoom_b__0(bool isOnline, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus);

  /// @brief Method <GetHasPermissionToJoinRoom>b__1, addr 0x1435a4c, size 0x7c, virtual false, abstract: false, final false
  inline void _GetHasPermissionToJoinRoom_b__1(::StringW errType);

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess* value);

  /// @brief Method .ctor, addr 0x14359fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMapManager____c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMapManager____c__DisplayClass49_0(__RoomMapManager____c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMapManager____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMapManager____c__DisplayClass49_0(__RoomMapManager____c__DisplayClass49_0 const&) = delete;

  /// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0, ___onFailure) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomMapManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMapManager*
class CORDL_TYPE RoomMapManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoomMapManager>> {
public:
  // Declarations
  using OnGetHasPermissionToJoinRoomFailure = ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure;

  using OnGetHasPermissionToJoinRoomSuccess = ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess;

  using OnGetNodeFailure = ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure;

  using OnGetNodeSuccess = ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess;

  using OnGetRoomMapFailure = ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure;

  using OnGetRoomMapSuccess = ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess;

  using OnPrivateRoomTargetAccountIDUpdated = ::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated;

  using OnTargetPublicWorldCodeUpdated = ::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated;

  using _GetRoomMap_d__19 = ::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19;

  using __c = ::GlobalNamespace::__RoomMapManager____c;

  using __c__DisplayClass24_0 = ::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0;

  using __c__DisplayClass25_0 = ::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0;

  using __c__DisplayClass26_0 = ::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0;

  using __c__DisplayClass49_0 = ::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0;

  /// @brief Field awaitingRoomMapOnFailure, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_awaitingRoomMapOnFailure, put = setStaticF_awaitingRoomMapOnFailure))::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* awaitingRoomMapOnFailure;

  /// @brief Field awaitingRoomMapOnSuccess, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_awaitingRoomMapOnSuccess, put = setStaticF_awaitingRoomMapOnSuccess))::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* awaitingRoomMapOnSuccess;

  /// @brief Field cachedLocalRoomMaps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedLocalRoomMaps,
                             put = setStaticF_cachedLocalRoomMaps))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomMap*>* cachedLocalRoomMaps;

  /// @brief Field hasFetchedInitialTargetPublicWorldCode, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasFetchedInitialTargetPublicWorldCode, put = setStaticF_hasFetchedInitialTargetPublicWorldCode)) bool hasFetchedInitialTargetPublicWorldCode;

  /// @brief Field isAwaitingRoomMapFromDatabase, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isAwaitingRoomMapFromDatabase, put = setStaticF_isAwaitingRoomMapFromDatabase)) bool isAwaitingRoomMapFromDatabase;

  /// @brief Field onPrivateRoomTargetAccountIDUpdatedCallbacks, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onPrivateRoomTargetAccountIDUpdatedCallbacks,
      put = __cordl_internal_set_onPrivateRoomTargetAccountIDUpdatedCallbacks))::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated* onPrivateRoomTargetAccountIDUpdatedCallbacks;

  /// @brief Field onTargetPublicWorldCodeUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onTargetPublicWorldCodeUpdatedCallbacks,
                      put = __cordl_internal_set_onTargetPublicWorldCodeUpdatedCallbacks))::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated* onTargetPublicWorldCodeUpdatedCallbacks;

  /// @brief Field privateRoomTargetAccountID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_privateRoomTargetAccountID, put = setStaticF_privateRoomTargetAccountID))::StringW privateRoomTargetAccountID;

  /// @brief Field targetPublicWorldCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_targetPublicWorldCode, put = setStaticF_targetPublicWorldCode))::StringW targetPublicWorldCode;

  /// @brief Method ClearPrivateRoomTargetAccount, addr 0x1643744, size 0x1f8, virtual false, abstract: false, final false
  static inline void ClearPrivateRoomTargetAccount();

  /// @brief Method ClearTargetPublicWorldCode, addr 0x163ae98, size 0x50, virtual false, abstract: false, final false
  static inline void ClearTargetPublicWorldCode();

  /// @brief Method GetHasPermissionToJoinRoom, addr 0x163cd4c, size 0x338, virtual false, abstract: false, final false
  static inline void GetHasPermissionToJoinRoom(::StringW roomMapKey, ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess* onSuccess,
                                                ::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure* onFailure);

  /// @brief Method GetNode, addr 0x16431c4, size 0x140, virtual false, abstract: false, final false
  static inline void GetNode(::StringW roomMapKey, ::UnityEngine::Vector2Int gridPosition, ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess,
                             ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure);

  /// @brief Method GetNode, addr 0x163605c, size 0x140, virtual false, abstract: false, final false
  static inline void GetNode(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess,
                             ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure);

  /// @brief Method GetPrivateRoomMapKey, addr 0x163b2dc, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetPrivateRoomMapKey(::StringW accountID);

  /// @brief Method GetPrivateRoomTargetAccount, addr 0x1643694, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetPrivateRoomTargetAccount();

  /// @brief Method GetRoomMap, addr 0x1642c70, size 0xa8, virtual false, abstract: false, final false
  static inline void GetRoomMap(::StringW roomMapKey, ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* onSuccess, ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* onFailure);

  /// @brief Method GetRoomMapKeyFromTransitionKey, addr 0x1643304, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW GetRoomMapKeyFromTransitionKey(::StringW transitionKey);

  /// @brief Method GetRoomTypeFromRoomMapNode, addr 0x1632d78, size 0x148, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__RoomData__Type GetRoomTypeFromRoomMapNode(::GlobalNamespace::__RoomMap__Node* mapNode);

  /// @brief Method GetTargetPublicWorldCode, addr 0x1643ce0, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetTargetPublicWorldCode();

  /// @brief Method GetTransitionNode, addr 0x1640c48, size 0x148, virtual false, abstract: false, final false
  static inline void GetTransitionNode(::StringW currentRoomMapKey, ::StringW transitionKey, ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* onSuccess,
                                       ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* onFailure);

  /// @brief Method HasTargetPublicWorldCode, addr 0x1643db0, size 0x58, virtual false, abstract: false, final false
  static inline bool HasTargetPublicWorldCode();

  /// @brief Method IsPrivateRoomMapKey, addr 0x163b27c, size 0x60, virtual false, abstract: false, final false
  static inline bool IsPrivateRoomMapKey(::StringW roomMapKey);

  static inline ::GlobalNamespace::RoomMapManager* New_ctor();

  /// @brief Method RefreshRoomMap, addr 0x1642d18, size 0x190, virtual false, abstract: false, final false
  static inline void RefreshRoomMap(::StringW roomMapKey);

  /// @brief Method SetPrivateRoomTargetAccount, addr 0x1643440, size 0x254, virtual false, abstract: false, final false
  static inline void SetPrivateRoomTargetAccount(::StringW targetAccountID);

  /// @brief Method SetTargetPublicWorldCode, addr 0x164393c, size 0x250, virtual false, abstract: false, final false
  static inline void SetTargetPublicWorldCode(::StringW newCode);

  /// @brief Method TryExtractRoomMapNodeData, addr 0x1642ea8, size 0x31c, virtual false, abstract: false, final false
  static inline bool TryExtractRoomMapNodeData(::GlobalNamespace::__AWSDatabase__DynamoResponse input, ByRef<::GlobalNamespace::RoomMapNodeData> nodeData);

  /// @brief Method TryGetTargetPublicWorldCode, addr 0x1633260, size 0x64, virtual false, abstract: false, final false
  static inline bool TryGetTargetPublicWorldCode(ByRef<::StringW> code);

  /// @brief Method TryParsePrivateRoomMapKey, addr 0x163353c, size 0x90, virtual false, abstract: false, final false
  static inline bool TryParsePrivateRoomMapKey(::StringW roomMapKey, ByRef<::StringW> accountID);

  /// @brief Method ValidatePublicWorldCode, addr 0x1643b8c, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW ValidatePublicWorldCode(::StringW code);

  constexpr ::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated*& __cordl_internal_get_onPrivateRoomTargetAccountIDUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated*> const&
  __cordl_internal_get_onPrivateRoomTargetAccountIDUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated*& __cordl_internal_get_onTargetPublicWorldCodeUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated*> const& __cordl_internal_get_onTargetPublicWorldCodeUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_onPrivateRoomTargetAccountIDUpdatedCallbacks(::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated* value);

  constexpr void __cordl_internal_set_onTargetPublicWorldCodeUpdatedCallbacks(::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated* value);

  /// @brief Method .ctor, addr 0x1643e08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* getStaticF_awaitingRoomMapOnFailure();

  static inline ::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* getStaticF_awaitingRoomMapOnSuccess();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomMap*>* getStaticF_cachedLocalRoomMaps();

  static inline bool getStaticF_hasFetchedInitialTargetPublicWorldCode();

  static inline bool getStaticF_isAwaitingRoomMapFromDatabase();

  static inline ::StringW getStaticF_privateRoomTargetAccountID();

  static inline ::StringW getStaticF_targetPublicWorldCode();

  static inline void setStaticF_awaitingRoomMapOnFailure(::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure* value);

  static inline void setStaticF_awaitingRoomMapOnSuccess(::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess* value);

  static inline void setStaticF_cachedLocalRoomMaps(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomMap*>* value);

  static inline void setStaticF_hasFetchedInitialTargetPublicWorldCode(bool value);

  static inline void setStaticF_isAwaitingRoomMapFromDatabase(bool value);

  static inline void setStaticF_privateRoomTargetAccountID(::StringW value);

  static inline void setStaticF_targetPublicWorldCode(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMapManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMapManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMapManager(RoomMapManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMapManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMapManager(RoomMapManager const&) = delete;

  /// @brief Field onPrivateRoomTargetAccountIDUpdatedCallbacks, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated* ___onPrivateRoomTargetAccountIDUpdatedCallbacks;

  /// @brief Field onTargetPublicWorldCodeUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated* ___onTargetPublicWorldCodeUpdatedCallbacks;

  /// @brief Field ERROR_NO_PRIVATE_WORLD offset 0xffffffff size 0x8
  static constexpr ::ConstString ERROR_NO_PRIVATE_WORLD{ u"NO_PRIVATE_WORLD" };

  /// @brief Field PRIVATE_ROOM_MAP_KEY_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIVATE_ROOM_MAP_KEY_PREFIX{ u"p_" };

  /// @brief Field ROOMMAPNODE_BLOCKDOWN_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_BLOCKDOWN_KEY{ u"blockDown" };

  /// @brief Field ROOMMAPNODE_BLOCKLEFT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_BLOCKLEFT_KEY{ u"blockLeft" };

  /// @brief Field ROOMMAPNODE_BLOCKRIGHT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_BLOCKRIGHT_KEY{ u"blockRight" };

  /// @brief Field ROOMMAPNODE_BLOCKUP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_BLOCKUP_KEY{ u"blockUp" };

  /// @brief Field ROOMMAPNODE_GRIDPOSITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_GRIDPOSITION_KEY{ u"gridPosition" };

  /// @brief Field ROOMMAPNODE_ROOMKEY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_ROOMKEY_KEY{ u"roomKey" };

  /// @brief Field ROOMMAPNODE_THEME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_THEME_KEY{ u"themeKey" };

  /// @brief Field ROOMMAPNODE_TRANSITIONKEY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAPNODE_TRANSITIONKEY_KEY{ u"transitionKey" };

  /// @brief Field ROOMMAP_DATA_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAP_DATA_KEY{ u"data" };

  /// @brief Field ROOMMAP_PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAP_PRIMARY_KEY{ u"versionKey" };

  /// @brief Field ROOMMAP_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMMAP_TABLE{ u"G2_RoomMap" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Room Map: " };

  /// @brief Field publicWorldCodeLength offset 0xffffffff size 0x4
  static constexpr int32_t publicWorldCodeLength{ static_cast<int32_t>(0x4) };

  /// @brief Field publicWorldCodeValidChars offset 0xffffffff size 0x8
  static constexpr ::ConstString publicWorldCodeValidChars{ u"ABCDEFGHIJ" };

  /// @brief Field targetPublicWorldCodeKey offset 0xffffffff size 0x8
  static constexpr ::ConstString targetPublicWorldCodeKey{ u"targetPublicWorldCode" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMapManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapManager, ___onPrivateRoomTargetAccountIDUpdatedCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMapManager, ___onTargetPublicWorldCodeUpdatedCallbacks) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomMapManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMapManager*, "", "RoomMapManager");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomFailure*, "", "RoomMapManager/OnGetHasPermissionToJoinRoomFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetHasPermissionToJoinRoomSuccess*, "", "RoomMapManager/OnGetHasPermissionToJoinRoomSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*, "", "RoomMapManager/OnGetNodeFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*, "", "RoomMapManager/OnGetNodeSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetRoomMapFailure*, "", "RoomMapManager/OnGetRoomMapFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnGetRoomMapSuccess*, "", "RoomMapManager/OnGetRoomMapSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnPrivateRoomTargetAccountIDUpdated*, "", "RoomMapManager/OnPrivateRoomTargetAccountIDUpdated");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager__OnTargetPublicWorldCodeUpdated*, "", "RoomMapManager/OnTargetPublicWorldCodeUpdated");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager____c*, "", "RoomMapManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager____c__DisplayClass24_0*, "", "RoomMapManager/<>c__DisplayClass24_0");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager____c__DisplayClass25_0*, "", "RoomMapManager/<>c__DisplayClass25_0");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager____c__DisplayClass26_0*, "", "RoomMapManager/<>c__DisplayClass26_0");
NEED_NO_BOX(::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager____c__DisplayClass49_0*, "", "RoomMapManager/<>c__DisplayClass49_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMapManager___GetRoomMap_d__19, "", "RoomMapManager/<GetRoomMap>d__19");
