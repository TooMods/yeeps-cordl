#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct MapData;
}
namespace GlobalNamespace {
class RoomAutoCycleEffect;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFailure;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetRoomDataSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnSuccess;
}
namespace GlobalNamespace {
class __RoomManager__OnGoToRoomFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnGoToRoomSuccess;
}
namespace GlobalNamespace {
class __RoomManager__OnResetMapFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnResetMapSuccess;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomLoaded;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomPositionShift;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomUnloaded;
}
namespace GlobalNamespace {
class __RoomManager__OnSaveMapFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnSaveMapSuccess;
}
namespace GlobalNamespace {
struct __RoomManager__RoomPrefabOverrideData;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class __RoomManager____c;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass27_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass28_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass28_1;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass61_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass65_0;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeFailure;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeSuccess;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class RoomManager;
}
namespace GlobalNamespace {
class __RoomManager__OnGoToRoomFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnGoToRoomSuccess;
}
namespace GlobalNamespace {
class __RoomManager__OnResetMapFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnResetMapSuccess;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomLoaded;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomPositionShift;
}
namespace GlobalNamespace {
class __RoomManager__OnRoomUnloaded;
}
namespace GlobalNamespace {
class __RoomManager__OnSaveMapFailure;
}
namespace GlobalNamespace {
class __RoomManager__OnSaveMapSuccess;
}
namespace GlobalNamespace {
class __RoomManager____c;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass27_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass28_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass28_1;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass61_0;
}
namespace GlobalNamespace {
class __RoomManager____c__DisplayClass65_0;
}
namespace GlobalNamespace {
struct __RoomManager__RoomPrefabOverrideData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__RoomManager__TravelDirection);
MARK_REF_PTR_T(::GlobalNamespace::RoomManager);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnGoToRoomFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnResetMapFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnResetMapSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnRoomLoaded);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnRoomPositionShift);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnRoomUnloaded);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnSaveMapFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager__OnSaveMapSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass16_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass23_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass27_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass28_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass28_1);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass29_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass61_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomManager____c__DisplayClass65_0);
MARK_VAL_T(::GlobalNamespace::__RoomManager__RoomPrefabOverrideData);
// Type: ::RoomPrefabOverrideData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomManager::RoomPrefabOverrideData
struct CORDL_TYPE __RoomManager__RoomPrefabOverrideData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__RoomPrefabOverrideData();

  // Ctor Parameters [CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roomPrefabOverride", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
  // def_value: None }]
  constexpr __RoomManager__RoomPrefabOverrideData(::StringW roomKey, ::UnityW<::UnityEngine::GameObject> roomPrefabOverride) noexcept;

  /// @brief Field roomKey, offset: 0x0, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field roomPrefabOverride, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> roomPrefabOverride;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, roomKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, roomPrefabOverride) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TravelDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomManager::TravelDirection
struct CORDL_TYPE __RoomManager__TravelDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RoomManager__TravelDirection_Unwrapped
  enum struct ____RoomManager__TravelDirection_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_up = static_cast<int32_t>(0x1),
    __E_right = static_cast<int32_t>(0x2),
    __E_down = static_cast<int32_t>(0x3),
    __E_left = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RoomManager__TravelDirection_Unwrapped() const noexcept {
    return static_cast<____RoomManager__TravelDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__TravelDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RoomManager__TravelDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field down value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__RoomManager__TravelDirection const down;

  /// @brief Field left value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__RoomManager__TravelDirection const left;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__RoomManager__TravelDirection const none;

  /// @brief Field right value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__RoomManager__TravelDirection const right;

  /// @brief Field up value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__RoomManager__TravelDirection const up;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__TravelDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager__TravelDirection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGoToRoomSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnGoToRoomSuccess*
class CORDL_TYPE __RoomManager__OnGoToRoomSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163efac, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::RoomData* roomData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163efcc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163ef98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163b51c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnGoToRoomSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnGoToRoomSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnGoToRoomSuccess(__RoomManager__OnGoToRoomSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnGoToRoomSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnGoToRoomSuccess(__RoomManager__OnGoToRoomSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGoToRoomFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnGoToRoomFailure*
class CORDL_TYPE __RoomManager__OnGoToRoomFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163eff0, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorMessage, bool isFatal, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f088, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163efd8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorMessage, bool isFatal);

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163b648, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnGoToRoomFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnGoToRoomFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnGoToRoomFailure(__RoomManager__OnGoToRoomFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnGoToRoomFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnGoToRoomFailure(__RoomManager__OnGoToRoomFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnGoToRoomFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRoomLoaded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnRoomLoaded*
class CORDL_TYPE __RoomManager__OnRoomLoaded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f1d4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::Room* room, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f1f4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f1c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::Room* room);

  static inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163f094, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnRoomLoaded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomLoaded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnRoomLoaded(__RoomManager__OnRoomLoaded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomLoaded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnRoomLoaded(__RoomManager__OnRoomLoaded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnRoomLoaded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRoomUnloaded
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnRoomUnloaded*
class CORDL_TYPE __RoomManager__OnRoomUnloaded : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f214, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f234, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f200, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomManager__OnRoomUnloaded* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x16317b4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnRoomUnloaded();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomUnloaded", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnRoomUnloaded(__RoomManager__OnRoomUnloaded&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomUnloaded", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnRoomUnloaded(__RoomManager__OnRoomUnloaded const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnRoomUnloaded, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRoomPositionShift
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnRoomPositionShift*
class CORDL_TYPE __RoomManager__OnRoomPositionShift : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f318, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 positionShift, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f3a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f304, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Vector3 positionShift);

  static inline ::GlobalNamespace::__RoomManager__OnRoomPositionShift* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163f240, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnRoomPositionShift();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomPositionShift", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnRoomPositionShift(__RoomManager__OnRoomPositionShift&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnRoomPositionShift", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnRoomPositionShift(__RoomManager__OnRoomPositionShift const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnRoomPositionShift, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSaveMapSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnSaveMapSuccess*
class CORDL_TYPE __RoomManager__OnSaveMapSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f3c0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f3e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f3ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163dbc0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnSaveMapSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnSaveMapSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnSaveMapSuccess(__RoomManager__OnSaveMapSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnSaveMapSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnSaveMapSuccess(__RoomManager__OnSaveMapSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnSaveMapSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnSaveMapFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnSaveMapFailure*
class CORDL_TYPE __RoomManager__OnSaveMapFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f400, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f420, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f3ec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomManager__OnSaveMapFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163e3c0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnSaveMapFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnSaveMapFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnSaveMapFailure(__RoomManager__OnSaveMapFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnSaveMapFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnSaveMapFailure(__RoomManager__OnSaveMapFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnSaveMapFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnResetMapSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnResetMapSuccess*
class CORDL_TYPE __RoomManager__OnResetMapSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f4fc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f51c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f4e8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomManager__OnResetMapSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163f42c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnResetMapSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnResetMapSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnResetMapSuccess(__RoomManager__OnResetMapSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnResetMapSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnResetMapSuccess(__RoomManager__OnResetMapSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnResetMapSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnResetMapFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::OnResetMapFailure*
class CORDL_TYPE __RoomManager__OnResetMapFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163f5f8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163f618, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163f5e4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomManager__OnResetMapFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163f528, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager__OnResetMapFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnResetMapFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager__OnResetMapFailure(__RoomManager__OnResetMapFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager__OnResetMapFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager__OnResetMapFailure(__RoomManager__OnResetMapFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager__OnResetMapFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass16_0*
class CORDL_TYPE __RoomManager____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RoomManager> __4__this;

  /// @brief Field startingRoomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_startingRoomKey, put = __cordl_internal_set_startingRoomKey))::StringW startingRoomKey;

  /// @brief Field startingRoomMapKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_startingRoomMapKey, put = __cordl_internal_set_startingRoomMapKey))::StringW startingRoomMapKey;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass16_0* New_ctor();

  /// @brief Method <GoToStartingRoom>b__1, addr 0x163f624, size 0x1b8, virtual false, abstract: false, final false
  inline void _GoToStartingRoom_b__1(::StringW errorMessage, bool isFatal);

  constexpr ::UnityW<::GlobalNamespace::RoomManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomManager>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_startingRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_startingRoomKey();

  constexpr ::StringW const& __cordl_internal_get_startingRoomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_startingRoomMapKey();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value);

  constexpr void __cordl_internal_set_startingRoomKey(::StringW value);

  constexpr void __cordl_internal_set_startingRoomMapKey(::StringW value);

  /// @brief Method .ctor, addr 0x163b274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass16_0(__RoomManager____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass16_0(__RoomManager____c__DisplayClass16_0 const&) = delete;

  /// @brief Field startingRoomKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___startingRoomKey;

  /// @brief Field startingRoomMapKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___startingRoomMapKey;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass16_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass16_0, ___startingRoomKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass16_0, ___startingRoomMapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass16_0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c*
class CORDL_TYPE __RoomManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__RoomManager____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* __9__16_0;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__17_1, put = setStaticF___9__17_1))::GlobalNamespace::__RoomManager__OnGoToRoomFailure* __9__17_1;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_0, put = setStaticF___9__18_0))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* __9__18_0;

  /// @brief Field <>9__18_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__18_1, put = setStaticF___9__18_1))::GlobalNamespace::__RoomManager__OnGoToRoomFailure* __9__18_1;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1))::GlobalNamespace::__RoomDatabase__OnFailure* __9__23_1;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0))::GlobalNamespace::__RoomManager__OnSaveMapSuccess* __9__53_0;

  /// @brief Field <>9__66_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__66_1, put = setStaticF___9__66_1))::GlobalNamespace::__RoomManager__OnSaveMapFailure* __9__66_1;

  /// @brief Field <>9__66_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__66_2, put = setStaticF___9__66_2))::GlobalNamespace::__RoomDatabase__OnSuccess* __9__66_2;

  /// @brief Field <>9__66_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__66_3, put = setStaticF___9__66_3))::GlobalNamespace::__RoomDatabase__OnFailure* __9__66_3;

  /// @brief Field <>9__67_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__67_1, put = setStaticF___9__67_1))::GlobalNamespace::__RoomDatabase__OnFailure* __9__67_1;

  /// @brief Field <>9__67_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__67_2, put = setStaticF___9__67_2))::GlobalNamespace::__RoomDatabase__OnSuccess* __9__67_2;

  /// @brief Field <>9__67_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__67_3, put = setStaticF___9__67_3))::GlobalNamespace::__RoomDatabase__OnFailure* __9__67_3;

  static inline ::GlobalNamespace::__RoomManager____c* New_ctor();

  /// @brief Method <GoToPrivateRoomTransitionRoom>b__18_0, addr 0x163f8d0, size 0x4, virtual false, abstract: false, final false
  inline void _GoToPrivateRoomTransitionRoom_b__18_0(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <GoToPrivateRoomTransitionRoom>b__18_1, addr 0x163f8d4, size 0x80, virtual false, abstract: false, final false
  inline void _GoToPrivateRoomTransitionRoom_b__18_1(::StringW errorMessage, bool isFatal);

  /// @brief Method <GoToSpawnRoom>b__17_0, addr 0x163f84c, size 0x4, virtual false, abstract: false, final false
  inline void _GoToSpawnRoom_b__17_0(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <GoToSpawnRoom>b__17_1, addr 0x163f850, size 0x80, virtual false, abstract: false, final false
  inline void _GoToSpawnRoom_b__17_1(::StringW errorMessage, bool isFatal);

  /// @brief Method <GoToStartingRoom>b__16_0, addr 0x163f848, size 0x4, virtual false, abstract: false, final false
  inline void _GoToStartingRoom_b__16_0(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <SetCurrentRoomIsCreative>b__23_1, addr 0x163f954, size 0xc8, virtual false, abstract: false, final false
  inline void _SetCurrentRoomIsCreative_b__23_1(::StringW errType);

  /// @brief Method <TryEnterCreativeMode>b__67_1, addr 0x163fddc, size 0xcc, virtual false, abstract: false, final false
  inline void _TryEnterCreativeMode_b__67_1(::StringW failCode);

  /// @brief Method <TryEnterCreativeMode>b__67_2, addr 0x163fc78, size 0x98, virtual false, abstract: false, final false
  inline void _TryEnterCreativeMode_b__67_2();

  /// @brief Method <TryEnterCreativeMode>b__67_3, addr 0x163fd10, size 0xcc, virtual false, abstract: false, final false
  inline void _TryEnterCreativeMode_b__67_3(::StringW errType);

  /// @brief Method <TryEnterPlayMode>b__66_1, addr 0x163fbd0, size 0xa8, virtual false, abstract: false, final false
  inline void _TryEnterPlayMode_b__66_1();

  /// @brief Method <TryEnterPlayMode>b__66_2, addr 0x163fa6c, size 0x98, virtual false, abstract: false, final false
  inline void _TryEnterPlayMode_b__66_2();

  /// @brief Method <TryEnterPlayMode>b__66_3, addr 0x163fb04, size 0xcc, virtual false, abstract: false, final false
  inline void _TryEnterPlayMode_b__66_3(::StringW errType);

  /// @brief Method <Update>b__53_0, addr 0x163fa1c, size 0x50, virtual false, abstract: false, final false
  inline void _Update_b__53_0();

  /// @brief Method .ctor, addr 0x163f840, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__RoomManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* getStaticF___9__16_0();

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* getStaticF___9__17_0();

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* getStaticF___9__17_1();

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* getStaticF___9__18_0();

  static inline ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* getStaticF___9__18_1();

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* getStaticF___9__23_1();

  static inline ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* getStaticF___9__53_0();

  static inline ::GlobalNamespace::__RoomManager__OnSaveMapFailure* getStaticF___9__66_1();

  static inline ::GlobalNamespace::__RoomDatabase__OnSuccess* getStaticF___9__66_2();

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* getStaticF___9__66_3();

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* getStaticF___9__67_1();

  static inline ::GlobalNamespace::__RoomDatabase__OnSuccess* getStaticF___9__67_2();

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* getStaticF___9__67_3();

  static inline void setStaticF___9(::GlobalNamespace::__RoomManager____c* value);

  static inline void setStaticF___9__16_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  static inline void setStaticF___9__17_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  static inline void setStaticF___9__17_1(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value);

  static inline void setStaticF___9__18_0(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  static inline void setStaticF___9__18_1(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value);

  static inline void setStaticF___9__23_1(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  static inline void setStaticF___9__53_0(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* value);

  static inline void setStaticF___9__66_1(::GlobalNamespace::__RoomManager__OnSaveMapFailure* value);

  static inline void setStaticF___9__66_2(::GlobalNamespace::__RoomDatabase__OnSuccess* value);

  static inline void setStaticF___9__66_3(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  static inline void setStaticF___9__67_1(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  static inline void setStaticF___9__67_2(::GlobalNamespace::__RoomDatabase__OnSuccess* value);

  static inline void setStaticF___9__67_3(::GlobalNamespace::__RoomDatabase__OnFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c(__RoomManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c(__RoomManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass23_0*
class CORDL_TYPE __RoomManager____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field requestedRoomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_requestedRoomKey, put = __cordl_internal_set_requestedRoomKey))::StringW requestedRoomKey;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass23_0* New_ctor();

  /// @brief Method <SetCurrentRoomIsCreative>b__0, addr 0x163fea8, size 0x98, virtual false, abstract: false, final false
  inline void _SetCurrentRoomIsCreative_b__0(::System::DateTime timestamp);

  constexpr ::StringW const& __cordl_internal_get_requestedRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_requestedRoomKey();

  constexpr void __cordl_internal_set_requestedRoomKey(::StringW value);

  /// @brief Method .ctor, addr 0x163cd3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass23_0(__RoomManager____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass23_0(__RoomManager____c__DisplayClass23_0 const&) = delete;

  /// @brief Field requestedRoomKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___requestedRoomKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass23_0, ___requestedRoomKey) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass27_0*
class CORDL_TYPE __RoomManager____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* __9__2;

  /// @brief Field <>9__3, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get___9__3, put = __cordl_internal_set___9__3))::GlobalNamespace::__RoomDatabase__OnFailure* __9__3;

  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure;

  /// @brief Field onSuccess, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess;

  /// @brief Field requestIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_requestIndex, put = __cordl_internal_set_requestIndex)) int32_t requestIndex;

  /// @brief Field roomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKey, put = __cordl_internal_set_roomKey))::StringW roomKey;

  /// @brief Field roomMapKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roomMapKey, put = __cordl_internal_set_roomMapKey))::StringW roomMapKey;

  /// @brief Field travelDirection, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_travelDirection, put = __cordl_internal_set_travelDirection))::GlobalNamespace::__RoomManager__TravelDirection travelDirection;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass27_0* New_ctor();

  /// @brief Method <GoToRoom>b__0, addr 0x163ff40, size 0x1e0, virtual false, abstract: false, final false
  inline void _GoToRoom_b__0(bool hasPermission);

  /// @brief Method <GoToRoom>b__1, addr 0x1640430, size 0xfc, virtual false, abstract: false, final false
  inline void _GoToRoom_b__1(::StringW errType);

  /// @brief Method <GoToRoom>b__2, addr 0x1640120, size 0x1f8, virtual false, abstract: false, final false
  inline void _GoToRoom_b__2(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <GoToRoom>b__3, addr 0x1640318, size 0x118, virtual false, abstract: false, final false
  inline void _GoToRoom_b__3(::StringW failCode);

  constexpr ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::__RoomDatabase__OnFailure*& __cordl_internal_get___9__3();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnFailure*> const& __cordl_internal_get___9__3() const;

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr int32_t const& __cordl_internal_get_requestIndex() const;

  constexpr int32_t& __cordl_internal_get_requestIndex();

  constexpr ::StringW const& __cordl_internal_get_roomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomKey();

  constexpr ::StringW const& __cordl_internal_get_roomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_roomMapKey();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_travelDirection() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_travelDirection();

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* value);

  constexpr void __cordl_internal_set___9__3(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  constexpr void __cordl_internal_set_requestIndex(int32_t value);

  constexpr void __cordl_internal_set_roomKey(::StringW value);

  constexpr void __cordl_internal_set_roomMapKey(::StringW value);

  constexpr void __cordl_internal_set_travelDirection(::GlobalNamespace::__RoomManager__TravelDirection value);

  /// @brief Method .ctor, addr 0x163cd44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass27_0(__RoomManager____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass27_0(__RoomManager____c__DisplayClass27_0 const&) = delete;

  /// @brief Field roomKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___roomKey;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* ___onFailure;

  /// @brief Field roomMapKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___roomMapKey;

  /// @brief Field requestIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___requestIndex;

  /// @brief Field travelDirection, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___travelDirection;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* ___onSuccess;

  /// @brief Field <>9__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* _____9__2;

  /// @brief Field <>9__3, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* _____9__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass27_0, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___roomKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___roomMapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___requestIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___travelDirection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, ___onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, _____9__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass27_0, _____9__3) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass28_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass28_0*
class CORDL_TYPE __RoomManager____c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RoomManager> __4__this;

  /// @brief Field <>9__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* __9__2;

  /// @brief Field <>9__3, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___9__3, put = __cordl_internal_set___9__3))::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* __9__3;

  /// @brief Field direction, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::GlobalNamespace::__RoomManager__TravelDirection direction;

  /// @brief Field onFailure, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass28_0* New_ctor();

  /// @brief Method <TryGoToNextRoom>b__1, addr 0x1640690, size 0x12c, virtual false, abstract: false, final false
  inline void _TryGoToNextRoom_b__1(::StringW errType);

  /// @brief Method <TryGoToNextRoom>b__2, addr 0x164052c, size 0x38, virtual false, abstract: false, final false
  inline void _TryGoToNextRoom_b__2(::GlobalNamespace::__RoomMap__Node* newNodeInNewRoomMap);

  /// @brief Method <TryGoToNextRoom>b__3, addr 0x1640564, size 0x12c, virtual false, abstract: false, final false
  inline void _TryGoToNextRoom_b__3(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::RoomManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomManager>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& __cordl_internal_get___9__3();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const& __cordl_internal_get___9__3() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_direction() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_direction();

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* value);

  constexpr void __cordl_internal_set___9__3(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value);

  constexpr void __cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  /// @brief Method .ctor, addr 0x163d364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass28_0(__RoomManager____c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass28_0(__RoomManager____c__DisplayClass28_0 const&) = delete;

  /// @brief Field direction, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___direction;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomManager> _____4__this;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* ___onFailure;

  /// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeSuccess* _____9__2;

  /// @brief Field <>9__3, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* _____9__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass28_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, ___direction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, _____9__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_0, _____9__3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass28_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass28_1*
class CORDL_TYPE __RoomManager____c__DisplayClass28_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::GlobalNamespace::__RoomManager____c__DisplayClass28_0* CS$__8__locals1;

  /// @brief Field currentRoomMapKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_currentRoomMapKey, put = __cordl_internal_set_currentRoomMapKey))::StringW currentRoomMapKey;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass28_1* New_ctor();

  /// @brief Method <TryGoToNextRoom>b__0, addr 0x16407bc, size 0x35c, virtual false, abstract: false, final false
  inline void _TryGoToNextRoom_b__0(::GlobalNamespace::__RoomMap__Node* curNode);

  constexpr ::GlobalNamespace::__RoomManager____c__DisplayClass28_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager____c__DisplayClass28_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::StringW const& __cordl_internal_get_currentRoomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_currentRoomMapKey();

  constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::__RoomManager____c__DisplayClass28_0* value);

  constexpr void __cordl_internal_set_currentRoomMapKey(::StringW value);

  /// @brief Method .ctor, addr 0x163d36c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass28_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass28_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass28_1(__RoomManager____c__DisplayClass28_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass28_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass28_1(__RoomManager____c__DisplayClass28_1 const&) = delete;

  /// @brief Field currentRoomMapKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___currentRoomMapKey;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager____c__DisplayClass28_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass28_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_1, ___currentRoomMapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass28_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass29_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass29_0*
class CORDL_TYPE __RoomManager____c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RoomManager> __4__this;

  /// @brief Field direction, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::GlobalNamespace::__RoomManager__TravelDirection direction;

  /// @brief Field onFailure, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure;

  /// @brief Field onSuccess, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass29_0* New_ctor();

  /// @brief Method <GoToNextRoom>b__0, addr 0x1640d90, size 0x1c, virtual false, abstract: false, final false
  inline void _GoToNextRoom_b__0(::GlobalNamespace::RoomData* roomData);

  /// @brief Method <GoToNextRoom>b__1, addr 0x1640dac, size 0x1e4, virtual false, abstract: false, final false
  inline void _GoToNextRoom_b__1(::StringW errorMessage, bool isFatal);

  constexpr ::UnityW<::GlobalNamespace::RoomManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomManager>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection const& __cordl_internal_get_direction() const;

  constexpr ::GlobalNamespace::__RoomManager__TravelDirection& __cordl_internal_get_direction();

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value);

  constexpr void __cordl_internal_set_direction(::GlobalNamespace::__RoomManager__TravelDirection value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnGoToRoomFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* value);

  /// @brief Method .ctor, addr 0x163d4a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass29_0(__RoomManager____c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass29_0(__RoomManager____c__DisplayClass29_0 const&) = delete;

  /// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* ___onSuccess;

  /// @brief Field direction, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection ___direction;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomManager> _____4__this;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass29_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass29_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass29_0, ___direction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass29_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass29_0, ___onFailure) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass61_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass61_0*
class CORDL_TYPE __RoomManager____c__DisplayClass61_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomManager__OnSaveMapFailure* onFailure;

  /// @brief Field onSuccess, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomManager__OnSaveMapSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass61_0* New_ctor();

  /// @brief Method <TrySaveMap>b__0, addr 0x1640f90, size 0xd0, virtual false, abstract: false, final false
  inline void _TrySaveMap_b__0();

  /// @brief Method <TrySaveMap>b__1, addr 0x1641060, size 0x228, virtual false, abstract: false, final false
  inline void _TrySaveMap_b__1(::StringW failMessage);

  constexpr ::GlobalNamespace::__RoomManager__OnSaveMapFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnSaveMapFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomManager__OnSaveMapSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnSaveMapSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnSaveMapFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* value);

  /// @brief Method .ctor, addr 0x163df44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass61_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass61_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass61_0(__RoomManager____c__DisplayClass61_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass61_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass61_0(__RoomManager____c__DisplayClass61_0 const&) = delete;

  /// @brief Field onSuccess, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnSaveMapSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnSaveMapFailure* ___onFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass61_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass61_0, ___onSuccess) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass61_0, ___onFailure) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass65_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager::<>c__DisplayClass65_0*
class CORDL_TYPE __RoomManager____c__DisplayClass65_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::RoomManager> __4__this;

  /// @brief Field onFailure, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomManager__OnResetMapFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomManager__OnResetMapSuccess* onSuccess;

  static inline ::GlobalNamespace::__RoomManager____c__DisplayClass65_0* New_ctor();

  /// @brief Method <TryResetMap>b__0, addr 0x1641288, size 0x184, virtual false, abstract: false, final false
  inline void _TryResetMap_b__0(::GlobalNamespace::MapData mapData);

  /// @brief Method <TryResetMap>b__1, addr 0x164140c, size 0x160, virtual false, abstract: false, final false
  inline void _TryResetMap_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::RoomManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::RoomManager>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__RoomManager__OnResetMapFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnResetMapFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomManager__OnResetMapSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnResetMapSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RoomManager> value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomManager__OnResetMapFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomManager__OnResetMapSuccess* value);

  /// @brief Method .ctor, addr 0x163e234, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomManager____c__DisplayClass65_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass65_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomManager____c__DisplayClass65_0(__RoomManager____c__DisplayClass65_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomManager____c__DisplayClass65_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomManager____c__DisplayClass65_0(__RoomManager____c__DisplayClass65_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomManager> _____4__this;

  /// @brief Field onFailure, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnResetMapFailure* ___onFailure;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnResetMapSuccess* ___onSuccess;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomManager____c__DisplayClass65_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass65_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass65_0, ___onFailure) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomManager____c__DisplayClass65_0, ___onSuccess) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomManager
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomManager*
class CORDL_TYPE RoomManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoomManager>> {
public:
  // Declarations
  using OnGoToRoomFailure = ::GlobalNamespace::__RoomManager__OnGoToRoomFailure;

  using OnGoToRoomSuccess = ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess;

  using OnResetMapFailure = ::GlobalNamespace::__RoomManager__OnResetMapFailure;

  using OnResetMapSuccess = ::GlobalNamespace::__RoomManager__OnResetMapSuccess;

  using OnRoomLoaded = ::GlobalNamespace::__RoomManager__OnRoomLoaded;

  using OnRoomPositionShift = ::GlobalNamespace::__RoomManager__OnRoomPositionShift;

  using OnRoomUnloaded = ::GlobalNamespace::__RoomManager__OnRoomUnloaded;

  using OnSaveMapFailure = ::GlobalNamespace::__RoomManager__OnSaveMapFailure;

  using OnSaveMapSuccess = ::GlobalNamespace::__RoomManager__OnSaveMapSuccess;

  using RoomPrefabOverrideData = ::GlobalNamespace::__RoomManager__RoomPrefabOverrideData;

  using TravelDirection = ::GlobalNamespace::__RoomManager__TravelDirection;

  using __c = ::GlobalNamespace::__RoomManager____c;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass16_0;

  using __c__DisplayClass23_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass23_0;

  using __c__DisplayClass27_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass27_0;

  using __c__DisplayClass28_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass28_0;

  using __c__DisplayClass28_1 = ::GlobalNamespace::__RoomManager____c__DisplayClass28_1;

  using __c__DisplayClass29_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass29_0;

  using __c__DisplayClass61_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass61_0;

  using __c__DisplayClass65_0 = ::GlobalNamespace::__RoomManager____c__DisplayClass65_0;

  /// @brief Field <loadedRoom>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedRoom_k__BackingField, put = __cordl_internal_set__loadedRoom_k__BackingField))::UnityW<::GlobalNamespace::Room> _loadedRoom_k__BackingField;

  /// @brief Field autoCycleTransitionPrefab, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_autoCycleTransitionPrefab, put = __cordl_internal_set_autoCycleTransitionPrefab))::UnityW<::UnityEngine::GameObject> autoCycleTransitionPrefab;

  /// @brief Field curRoomAutoTransitionEffect, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_curRoomAutoTransitionEffect,
                      put = __cordl_internal_set_curRoomAutoTransitionEffect))::UnityW<::GlobalNamespace::RoomAutoCycleEffect> curRoomAutoTransitionEffect;

  /// @brief Field currentGoToRoomRequestIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_currentGoToRoomRequestIndex, put = setStaticF_currentGoToRoomRequestIndex)) int32_t currentGoToRoomRequestIndex;

  /// @brief Field currentRoomData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_currentRoomData, put = setStaticF_currentRoomData))::GlobalNamespace::RoomData* currentRoomData;

  /// @brief Field hallwayPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_hallwayPrefab, put = __cordl_internal_set_hallwayPrefab))::UnityW<::UnityEngine::GameObject> hallwayPrefab;

  __declspec(property(get = get_hasLoadedRoom)) bool hasLoadedRoom;

  /// @brief Field isTryingToAutoEnterCreativeMode, offset 0x64, size 0x1
  __declspec(property(get = __cordl_internal_get_isTryingToAutoEnterCreativeMode, put = __cordl_internal_set_isTryingToAutoEnterCreativeMode)) bool isTryingToAutoEnterCreativeMode;

  __declspec(property(get = get_loadedRoom, put = set_loadedRoom))::UnityW<::GlobalNamespace::Room> loadedRoom;

  /// @brief Field nextAutoCycleCheckTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAutoCycleCheckTime, put = __cordl_internal_set_nextAutoCycleCheckTime)) float_t nextAutoCycleCheckTime;

  /// @brief Field nextAutosave, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_nextAutosave, put = __cordl_internal_set_nextAutosave)) float_t nextAutosave;

  /// @brief Field onRoomLoadedCallbacks, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoomLoadedCallbacks, put = __cordl_internal_set_onRoomLoadedCallbacks))::GlobalNamespace::__RoomManager__OnRoomLoaded* onRoomLoadedCallbacks;

  /// @brief Field onRoomLoadedLateCallbacks, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoomLoadedLateCallbacks,
                      put = __cordl_internal_set_onRoomLoadedLateCallbacks))::GlobalNamespace::__RoomManager__OnRoomLoaded* onRoomLoadedLateCallbacks;

  /// @brief Field onRoomLoadedLatePersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoomLoadedLatePersistentCallbacks,
                             put = setStaticF_onRoomLoadedLatePersistentCallbacks))::GlobalNamespace::__RoomManager__OnRoomLoaded* onRoomLoadedLatePersistentCallbacks;

  /// @brief Field onRoomLoadedPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoomLoadedPersistentCallbacks,
                             put = setStaticF_onRoomLoadedPersistentCallbacks))::GlobalNamespace::__RoomManager__OnRoomLoaded* onRoomLoadedPersistentCallbacks;

  /// @brief Field onRoomPositionShiftCallbacks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoomPositionShiftCallbacks,
                      put = __cordl_internal_set_onRoomPositionShiftCallbacks))::GlobalNamespace::__RoomManager__OnRoomPositionShift* onRoomPositionShiftCallbacks;

  /// @brief Field onRoomUnloadedCallbacks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_onRoomUnloadedCallbacks, put = __cordl_internal_set_onRoomUnloadedCallbacks))::GlobalNamespace::__RoomManager__OnRoomUnloaded* onRoomUnloadedCallbacks;

  /// @brief Field onRoomUnloadedPersistentCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoomUnloadedPersistentCallbacks,
                             put = setStaticF_onRoomUnloadedPersistentCallbacks))::GlobalNamespace::__RoomManager__OnRoomUnloaded* onRoomUnloadedPersistentCallbacks;

  /// @brief Field roomPrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomPrefab, put = __cordl_internal_set_roomPrefab))::UnityW<::UnityEngine::GameObject> roomPrefab;

  /// @brief Field roomPrefabOverrides, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_roomPrefabOverrides,
                             put = setStaticF_roomPrefabOverrides))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* roomPrefabOverrides;

  /// @brief Field roomPrefabOverridesRaw, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roomPrefabOverridesRaw,
                      put = __cordl_internal_set_roomPrefabOverridesRaw))::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData,
                                                                                  ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> roomPrefabOverridesRaw;

  /// @brief Method ClearLastRoomKey, addr 0x163bcb0, size 0x64, virtual false, abstract: false, final false
  static inline void ClearLastRoomKey();

  /// @brief Method CreateRoomAutoTransitionEffect, addr 0x163dc7c, size 0xb8, virtual false, abstract: false, final false
  inline void CreateRoomAutoTransitionEffect(float_t timeIntoWindow);

  /// @brief Method GetRoomPrefab, addr 0x1632b38, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetRoomPrefab(::StringW roomKey);

  /// @brief Method GetTravelDirection, addr 0x163a8bc, size 0x48, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__RoomManager__TravelDirection GetTravelDirection(::UnityEngine::Vector2Int current, ::UnityEngine::Vector2Int target);

  /// @brief Method GetTravelDirectionForwardRotation, addr 0x1639f90, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetTravelDirectionForwardRotation(::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method GetTravelDirectionOffset, addr 0x163a904, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int GetTravelDirectionOffset(::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method GoToNextRoom, addr 0x163d374, size 0x130, virtual false, abstract: false, final false
  inline void GoToNextRoom(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection direction, ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess,
                           ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure);

  /// @brief Method GoToPrivateRoomTransitionRoom, addr 0x163bb08, size 0x1a8, virtual false, abstract: false, final false
  inline void GoToPrivateRoomTransitionRoom();

  /// @brief Method GoToRoom, addr 0x163b720, size 0x3e8, virtual false, abstract: false, final false
  static inline void GoToRoom(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection,
                              ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure);

  /// @brief Method GoToSpawnRoom, addr 0x163b328, size 0x1f4, virtual false, abstract: false, final false
  inline void GoToSpawnRoom();

  /// @brief Method GoToStartingRoom, addr 0x163aee8, size 0x38c, virtual false, abstract: false, final false
  inline void GoToStartingRoom();

  /// @brief Method InvertTravelDirection, addr 0x162eeb8, size 0x24, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__RoomManager__TravelDirection InvertTravelDirection(::GlobalNamespace::__RoomManager__TravelDirection direction);

  /// @brief Method LoadRoom, addr 0x163c650, size 0x4a4, virtual false, abstract: false, final false
  inline void LoadRoom(::GlobalNamespace::RoomData* roomData, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection, ByRef<::UnityEngine::Vector3> travelAnchorPosition);

  static inline ::GlobalNamespace::RoomManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x163ae40, size 0x58, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnApplicationQuit, addr 0x163df38, size 0xc, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnReceivedMapAutoSaveSucceeeded, addr 0x163df4c, size 0x48, virtual false, abstract: false, final false
  inline void OnReceivedMapAutoSaveSucceeeded();

  /// @brief Method RemoveRoomAutoTransitionEffect, addr 0x163e724, size 0x7c, virtual false, abstract: false, final false
  inline void RemoveRoomAutoTransitionEffect();

  /// @brief Method RestartAutosaveTimer, addr 0x163d964, size 0x48, virtual false, abstract: false, final false
  inline void RestartAutosaveTimer();

  /// @brief Method SetCurrentRoom, addr 0x163bd90, size 0x624, virtual false, abstract: false, final false
  static inline void SetCurrentRoom(::GlobalNamespace::RoomData* newRoomData, ::GlobalNamespace::__RoomManager__TravelDirection travelDirection);

  /// @brief Method SetCurrentRoomIsCreative, addr 0x163cb54, size 0x1e8, virtual false, abstract: false, final false
  static inline void SetCurrentRoomIsCreative(bool newIsCreative);

  /// @brief Method SetLastRoomKey, addr 0x163bd14, size 0x7c, virtual false, abstract: false, final false
  static inline void SetLastRoomKey(::StringW roomMapKey, ::StringW roomKey);

  /// @brief Method ShowFailedToLoadRoomFromType, addr 0x163d4ac, size 0x98, virtual false, abstract: false, final false
  inline void ShowFailedToLoadRoomFromType(::StringW errType);

  /// @brief Method ShowFailedToLoadRoomMessage, addr 0x163d544, size 0xa0, virtual false, abstract: false, final false
  inline void ShowFailedToLoadRoomMessage(::StringW errorMessage);

  /// @brief Method Start, addr 0x163aa48, size 0x3f8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryAutoEnterCreativeMode, addr 0x163dd34, size 0x204, virtual false, abstract: false, final false
  inline void TryAutoEnterCreativeMode();

  /// @brief Method TryEnterCreativeMode, addr 0x163e47c, size 0x2a8, virtual false, abstract: false, final false
  inline void TryEnterCreativeMode();

  /// @brief Method TryEnterPlayMode, addr 0x163e23c, size 0x184, virtual false, abstract: false, final false
  inline void TryEnterPlayMode();

  /// @brief Method TryGoToNextRoom, addr 0x163d084, size 0x2e0, virtual false, abstract: false, final false
  inline void TryGoToNextRoom(::GlobalNamespace::__RoomManager__TravelDirection direction, ::GlobalNamespace::__RoomManager__OnGoToRoomSuccess* onSuccess,
                              ::GlobalNamespace::__RoomManager__OnGoToRoomFailure* onFailure);

  /// @brief Method TryResetMap, addr 0x163df94, size 0x2a0, virtual false, abstract: false, final false
  inline void TryResetMap(::GlobalNamespace::__RoomManager__OnResetMapSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnResetMapFailure* onFailure);

  /// @brief Method TrySaveMap, addr 0x163d5f4, size 0x370, virtual false, abstract: false, final false
  inline void TrySaveMap(::GlobalNamespace::__RoomManager__OnSaveMapSuccess* onSuccess, ::GlobalNamespace::__RoomManager__OnSaveMapFailure* onFailure);

  /// @brief Method UnloadRoom, addr 0x163c3b4, size 0x29c, virtual false, abstract: false, final false
  inline void UnloadRoom(::GlobalNamespace::__RoomManager__TravelDirection travelDirection, ByRef<::UnityEngine::Vector3> travelAnchorPosition);

  /// @brief Method Update, addr 0x163d9ac, size 0x214, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <TryAutoEnterCreativeMode>b__69_0, addr 0x163eb60, size 0x180, virtual false, abstract: false, final false
  inline void _TryAutoEnterCreativeMode_b__69_0(bool didSwitch);

  /// @brief Method <TryAutoEnterCreativeMode>b__69_1, addr 0x163ee8c, size 0x10c, virtual false, abstract: false, final false
  inline void _TryAutoEnterCreativeMode_b__69_1(::StringW errType);

  /// @brief Method <TryAutoEnterCreativeMode>b__69_2, addr 0x163ece0, size 0xa0, virtual false, abstract: false, final false
  inline void _TryAutoEnterCreativeMode_b__69_2(::GlobalNamespace::MapData mapData);

  /// @brief Method <TryAutoEnterCreativeMode>b__69_3, addr 0x163ed80, size 0x10c, virtual false, abstract: false, final false
  inline void _TryAutoEnterCreativeMode_b__69_3(::StringW failCode);

  /// @brief Method <TryEnterCreativeMode>b__67_0, addr 0x163e98c, size 0x1d4, virtual false, abstract: false, final false
  inline void _TryEnterCreativeMode_b__67_0(::GlobalNamespace::MapData mapData);

  /// @brief Method <TryEnterPlayMode>b__66_0, addr 0x163e7f0, size 0x19c, virtual false, abstract: false, final false
  inline void _TryEnterPlayMode_b__66_0();

  constexpr ::UnityW<::GlobalNamespace::Room> const& __cordl_internal_get__loadedRoom_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::Room>& __cordl_internal_get__loadedRoom_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_autoCycleTransitionPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_autoCycleTransitionPrefab();

  constexpr ::UnityW<::GlobalNamespace::RoomAutoCycleEffect> const& __cordl_internal_get_curRoomAutoTransitionEffect() const;

  constexpr ::UnityW<::GlobalNamespace::RoomAutoCycleEffect>& __cordl_internal_get_curRoomAutoTransitionEffect();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hallwayPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hallwayPrefab();

  constexpr bool const& __cordl_internal_get_isTryingToAutoEnterCreativeMode() const;

  constexpr bool& __cordl_internal_get_isTryingToAutoEnterCreativeMode();

  constexpr float_t const& __cordl_internal_get_nextAutoCycleCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextAutoCycleCheckTime();

  constexpr float_t const& __cordl_internal_get_nextAutosave() const;

  constexpr float_t& __cordl_internal_get_nextAutosave();

  constexpr ::GlobalNamespace::__RoomManager__OnRoomLoaded*& __cordl_internal_get_onRoomLoadedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomLoaded*> const& __cordl_internal_get_onRoomLoadedCallbacks() const;

  constexpr ::GlobalNamespace::__RoomManager__OnRoomLoaded*& __cordl_internal_get_onRoomLoadedLateCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomLoaded*> const& __cordl_internal_get_onRoomLoadedLateCallbacks() const;

  constexpr ::GlobalNamespace::__RoomManager__OnRoomPositionShift*& __cordl_internal_get_onRoomPositionShiftCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomPositionShift*> const& __cordl_internal_get_onRoomPositionShiftCallbacks() const;

  constexpr ::GlobalNamespace::__RoomManager__OnRoomUnloaded*& __cordl_internal_get_onRoomUnloadedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomManager__OnRoomUnloaded*> const& __cordl_internal_get_onRoomUnloadedCallbacks() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_roomPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_roomPrefab();

  constexpr ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> const&
  __cordl_internal_get_roomPrefabOverridesRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*>& __cordl_internal_get_roomPrefabOverridesRaw();

  constexpr void __cordl_internal_set__loadedRoom_k__BackingField(::UnityW<::GlobalNamespace::Room> value);

  constexpr void __cordl_internal_set_autoCycleTransitionPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_curRoomAutoTransitionEffect(::UnityW<::GlobalNamespace::RoomAutoCycleEffect> value);

  constexpr void __cordl_internal_set_hallwayPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isTryingToAutoEnterCreativeMode(bool value);

  constexpr void __cordl_internal_set_nextAutoCycleCheckTime(float_t value);

  constexpr void __cordl_internal_set_nextAutosave(float_t value);

  constexpr void __cordl_internal_set_onRoomLoadedCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value);

  constexpr void __cordl_internal_set_onRoomLoadedLateCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value);

  constexpr void __cordl_internal_set_onRoomPositionShiftCallbacks(::GlobalNamespace::__RoomManager__OnRoomPositionShift* value);

  constexpr void __cordl_internal_set_onRoomUnloadedCallbacks(::GlobalNamespace::__RoomManager__OnRoomUnloaded* value);

  constexpr void __cordl_internal_set_roomPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void
  __cordl_internal_set_roomPrefabOverridesRaw(::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> value);

  /// @brief Method .ctor, addr 0x163e7a0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_currentGoToRoomRequestIndex();

  static inline ::GlobalNamespace::RoomData* getStaticF_currentRoomData();

  static inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* getStaticF_onRoomLoadedLatePersistentCallbacks();

  static inline ::GlobalNamespace::__RoomManager__OnRoomLoaded* getStaticF_onRoomLoadedPersistentCallbacks();

  static inline ::GlobalNamespace::__RoomManager__OnRoomUnloaded* getStaticF_onRoomUnloadedPersistentCallbacks();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* getStaticF_roomPrefabOverrides();

  /// @brief Method get_hasLoadedRoom, addr 0x163caf4, size 0x60, virtual false, abstract: false, final false
  inline bool get_hasLoadedRoom();

  /// @brief Method get_loadedRoom, addr 0x163d5e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::Room> get_loadedRoom();

  static inline void setStaticF_currentGoToRoomRequestIndex(int32_t value);

  static inline void setStaticF_currentRoomData(::GlobalNamespace::RoomData* value);

  static inline void setStaticF_onRoomLoadedLatePersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value);

  static inline void setStaticF_onRoomLoadedPersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomLoaded* value);

  static inline void setStaticF_onRoomUnloadedPersistentCallbacks(::GlobalNamespace::__RoomManager__OnRoomUnloaded* value);

  static inline void setStaticF_roomPrefabOverrides(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::UnityEngine::GameObject>>* value);

  /// @brief Method set_loadedRoom, addr 0x163d5ec, size 0x8, virtual false, abstract: false, final false
  inline void set_loadedRoom(::GlobalNamespace::Room* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomManager(RoomManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomManager(RoomManager const&) = delete;

  /// @brief Field roomPrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___roomPrefab;

  /// @brief Field roomPrefabOverridesRaw, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, ::Array<::GlobalNamespace::__RoomManager__RoomPrefabOverrideData>*> ___roomPrefabOverridesRaw;

  /// @brief Field hallwayPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___hallwayPrefab;

  /// @brief Field <loadedRoom>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Room> ____loadedRoom_k__BackingField;

  /// @brief Field nextAutoCycleCheckTime, offset: 0x38, size: 0x4, def value: None
  float_t ___nextAutoCycleCheckTime;

  /// @brief Field onRoomLoadedCallbacks, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnRoomLoaded* ___onRoomLoadedCallbacks;

  /// @brief Field onRoomLoadedLateCallbacks, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnRoomLoaded* ___onRoomLoadedLateCallbacks;

  /// @brief Field onRoomUnloadedCallbacks, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnRoomUnloaded* ___onRoomUnloadedCallbacks;

  /// @brief Field onRoomPositionShiftCallbacks, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__RoomManager__OnRoomPositionShift* ___onRoomPositionShiftCallbacks;

  /// @brief Field nextAutosave, offset: 0x60, size: 0x4, def value: None
  float_t ___nextAutosave;

  /// @brief Field isTryingToAutoEnterCreativeMode, offset: 0x64, size: 0x1, def value: None
  bool ___isTryingToAutoEnterCreativeMode;

  /// @brief Field autoCycleTransitionPrefab, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___autoCycleTransitionPrefab;

  /// @brief Field curRoomAutoTransitionEffect, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RoomAutoCycleEffect> ___curRoomAutoTransitionEffect;

  /// @brief Field AUTOSAVE_INTERVAL offset 0xffffffff size 0x4
  static constexpr float_t AUTOSAVE_INTERVAL{ 60.0 };

  /// @brief Field AUTOSAVE_INTERVAL_OFFSET offset 0xffffffff size 0x4
  static constexpr float_t AUTOSAVE_INTERVAL_OFFSET{ 10.0 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Rooms: " };

  /// @brief Field lastRoomKey offset 0xffffffff size 0x8
  static constexpr ::ConstString lastRoomKey{ u"lastRoomKey2" };

  /// @brief Field lastRoomMapKey offset 0xffffffff size 0x8
  static constexpr ::ConstString lastRoomMapKey{ u"lastRoomMapKey2" };

  /// @brief Field logPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString logPreface{ u"Rooms" };

  /// @brief Field timeBetweenAutoCycleChecks offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenAutoCycleChecks{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomManager, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___roomPrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___roomPrefabOverridesRaw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___hallwayPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ____loadedRoom_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___nextAutoCycleCheckTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___onRoomLoadedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___onRoomLoadedLateCallbacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___onRoomUnloadedCallbacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___onRoomPositionShiftCallbacks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___nextAutosave) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___isTryingToAutoEnterCreativeMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___autoCycleTransitionPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomManager, ___curRoomAutoTransitionEffect) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__TravelDirection, "", "RoomManager/TravelDirection");
NEED_NO_BOX(::GlobalNamespace::RoomManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomManager*, "", "RoomManager");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnGoToRoomFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnGoToRoomFailure*, "", "RoomManager/OnGoToRoomFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnGoToRoomSuccess*, "", "RoomManager/OnGoToRoomSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnResetMapFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnResetMapFailure*, "", "RoomManager/OnResetMapFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnResetMapSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnResetMapSuccess*, "", "RoomManager/OnResetMapSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnRoomLoaded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnRoomLoaded*, "", "RoomManager/OnRoomLoaded");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnRoomPositionShift);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnRoomPositionShift*, "", "RoomManager/OnRoomPositionShift");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnRoomUnloaded);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnRoomUnloaded*, "", "RoomManager/OnRoomUnloaded");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnSaveMapFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnSaveMapFailure*, "", "RoomManager/OnSaveMapFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomManager__OnSaveMapSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__OnSaveMapSuccess*, "", "RoomManager/OnSaveMapSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c*, "", "RoomManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass16_0*, "", "RoomManager/<>c__DisplayClass16_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass23_0*, "", "RoomManager/<>c__DisplayClass23_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass27_0*, "", "RoomManager/<>c__DisplayClass27_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass28_0*, "", "RoomManager/<>c__DisplayClass28_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass28_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass28_1*, "", "RoomManager/<>c__DisplayClass28_1");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass29_0*, "", "RoomManager/<>c__DisplayClass29_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass61_0*, "", "RoomManager/<>c__DisplayClass61_0");
NEED_NO_BOX(::GlobalNamespace::__RoomManager____c__DisplayClass65_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager____c__DisplayClass65_0*, "", "RoomManager/<>c__DisplayClass65_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomManager__RoomPrefabOverrideData, "", "RoomManager/RoomPrefabOverrideData");
