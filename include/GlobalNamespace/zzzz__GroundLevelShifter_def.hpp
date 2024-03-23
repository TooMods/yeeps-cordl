#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroundLevelShifter)
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __GroundLevelShifter__OnRoomFloorDepthUpdated;
}
namespace GlobalNamespace {
class __GroundLevelShifter____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFailure;
}
namespace GlobalNamespace {
class __RoomDatabase__OnSuccess;
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
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class GroundLevelShifter;
}
namespace GlobalNamespace {
class __GroundLevelShifter__OnRoomFloorDepthUpdated;
}
namespace GlobalNamespace {
class __GroundLevelShifter____c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GroundLevelShifter);
MARK_REF_PTR_T(::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0);
// Type: ::OnRoomFloorDepthUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GroundLevelShifter::OnRoomFloorDepthUpdated*
class CORDL_TYPE __GroundLevelShifter__OnRoomFloorDepthUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x154848c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::RoomData* roomData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15484ac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1548478, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1547bf8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroundLevelShifter__OnRoomFloorDepthUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GroundLevelShifter__OnRoomFloorDepthUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroundLevelShifter__OnRoomFloorDepthUpdated(__GroundLevelShifter__OnRoomFloorDepthUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroundLevelShifter__OnRoomFloorDepthUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroundLevelShifter__OnRoomFloorDepthUpdated(__GroundLevelShifter__OnRoomFloorDepthUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GroundLevelShifter::<>c__DisplayClass9_0*
class CORDL_TYPE __GroundLevelShifter____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::GroundLevelShifter> __4__this;

  /// @brief Field <>9__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__RoomDatabase__OnSuccess* __9__1;

  /// @brief Field <>9__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__RoomDatabase__OnFailure* __9__2;

  /// @brief Field newDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_newDepth, put = __cordl_internal_set_newDepth)) int32_t newDepth;

  /// @brief Field roomData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roomData, put = __cordl_internal_set_roomData))::GlobalNamespace::RoomData* roomData;

  static inline ::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0* New_ctor();

  /// @brief Method <ShiftGroundLevel>b__0, addr 0x15484b8, size 0x140, virtual false, abstract: false, final false
  inline void _ShiftGroundLevel_b__0(bool approved);

  /// @brief Method <ShiftGroundLevel>b__1, addr 0x15485f8, size 0x154, virtual false, abstract: false, final false
  inline void _ShiftGroundLevel_b__1();

  /// @brief Method <ShiftGroundLevel>b__2, addr 0x154874c, size 0x6c, virtual false, abstract: false, final false
  inline void _ShiftGroundLevel_b__2(::StringW failCode);

  constexpr ::UnityW<::GlobalNamespace::GroundLevelShifter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::GroundLevelShifter>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__RoomDatabase__OnSuccess*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnSuccess*> const& __cordl_internal_get___9__1() const;

  constexpr ::GlobalNamespace::__RoomDatabase__OnFailure*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnFailure*> const& __cordl_internal_get___9__2() const;

  constexpr int32_t const& __cordl_internal_get_newDepth() const;

  constexpr int32_t& __cordl_internal_get_newDepth();

  constexpr ::GlobalNamespace::RoomData*& __cordl_internal_get_roomData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomData*> const& __cordl_internal_get_roomData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GroundLevelShifter> value);

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__RoomDatabase__OnSuccess* value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  constexpr void __cordl_internal_set_newDepth(int32_t value);

  constexpr void __cordl_internal_set_roomData(::GlobalNamespace::RoomData* value);

  /// @brief Method .ctor, addr 0x1548170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GroundLevelShifter____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GroundLevelShifter____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GroundLevelShifter____c__DisplayClass9_0(__GroundLevelShifter____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GroundLevelShifter____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GroundLevelShifter____c__DisplayClass9_0(__GroundLevelShifter____c__DisplayClass9_0 const&) = delete;

  /// @brief Field roomData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::RoomData* ___roomData;

  /// @brief Field newDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ___newDepth;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GroundLevelShifter> _____4__this;

  /// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnSuccess* _____9__1;

  /// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, ___roomData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, ___newDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0, _____9__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GroundLevelShifter
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 241, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GroundLevelShifter*
class CORDL_TYPE GroundLevelShifter : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using OnRoomFloorDepthUpdated = ::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0;

  /// @brief Field isRegisteredForRoomFloorDepthUpdates, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForRoomFloorDepthUpdates, put = __cordl_internal_set_isRegisteredForRoomFloorDepthUpdates)) bool isRegisteredForRoomFloorDepthUpdates;

  /// @brief Field onRoomFloorDepthUpdatedCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onRoomFloorDepthUpdatedCallbacks,
                             put = setStaticF_onRoomFloorDepthUpdatedCallbacks))::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated* onRoomFloorDepthUpdatedCallbacks;

  /// @brief Field shiftDownButton, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftDownButton, put = __cordl_internal_set_shiftDownButton))::UnityW<::GlobalNamespace::SimpleButtonController> shiftDownButton;

  /// @brief Field shiftSoundKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftSoundKey, put = __cordl_internal_set_shiftSoundKey))::StringW shiftSoundKey;

  /// @brief Field shiftUpButton, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftUpButton, put = __cordl_internal_set_shiftUpButton))::UnityW<::GlobalNamespace::SimpleButtonController> shiftUpButton;

  /// @brief Method DisplayStatusError, addr 0x1548178, size 0xf4, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  /// @brief Method Initialize, addr 0x15479b4, size 0x1c4, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerAccountID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::GroundLevelShifter* New_ctor();

  /// @brief Method OnReceiveRoomLevelUpdated, addr 0x154826c, size 0x1f4, virtual false, abstract: false, final false
  static inline void OnReceiveRoomLevelUpdated(::StringW roomKey, int32_t newDepth);

  /// @brief Method OnShiftGroundLevelDownButtonPressed, addr 0x1548468, size 0x8, virtual false, abstract: false, final false
  inline void OnShiftGroundLevelDownButtonPressed();

  /// @brief Method OnShiftGroundLevelUpButtonPressed, addr 0x1548460, size 0x8, virtual false, abstract: false, final false
  inline void OnShiftGroundLevelUpButtonPressed();

  /// @brief Method PrepareForDestroy, addr 0x1547d24, size 0x104, virtual true, abstract: false, final false
  inline void PrepareForDestroy();

  /// @brief Method RefreshButtons, addr 0x1547b78, size 0x80, virtual false, abstract: false, final false
  inline void RefreshButtons(::GlobalNamespace::RoomData* roomData);

  /// @brief Method ShiftGroundLevel, addr 0x1547e28, size 0x348, virtual false, abstract: false, final false
  inline void ShiftGroundLevel(bool shiftUp);

  constexpr bool const& __cordl_internal_get_isRegisteredForRoomFloorDepthUpdates() const;

  constexpr bool& __cordl_internal_get_isRegisteredForRoomFloorDepthUpdates();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_shiftDownButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_shiftDownButton();

  constexpr ::StringW const& __cordl_internal_get_shiftSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_shiftSoundKey();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_shiftUpButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_shiftUpButton();

  constexpr void __cordl_internal_set_isRegisteredForRoomFloorDepthUpdates(bool value);

  constexpr void __cordl_internal_set_shiftDownButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_shiftSoundKey(::StringW value);

  constexpr void __cordl_internal_set_shiftUpButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  /// @brief Method .ctor, addr 0x1548470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated* getStaticF_onRoomFloorDepthUpdatedCallbacks();

  static inline void setStaticF_onRoomFloorDepthUpdatedCallbacks(::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroundLevelShifter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroundLevelShifter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroundLevelShifter(GroundLevelShifter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroundLevelShifter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroundLevelShifter(GroundLevelShifter const&) = delete;

  /// @brief Field shiftSoundKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___shiftSoundKey;

  /// @brief Field shiftUpButton, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___shiftUpButton;

  /// @brief Field shiftDownButton, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___shiftDownButton;

  /// @brief Field isRegisteredForRoomFloorDepthUpdates, offset: 0xf0, size: 0x1, def value: None
  bool ___isRegisteredForRoomFloorDepthUpdates;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Ground Level Shifter: " };

  /// @brief Field failedToShiftPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToShiftPreface{ u"Failed to change ground level: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GroundLevelShifter, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GroundLevelShifter, ___shiftSoundKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroundLevelShifter, ___shiftUpButton) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroundLevelShifter, ___shiftDownButton) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GroundLevelShifter, ___isRegisteredForRoomFloorDepthUpdates) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GroundLevelShifter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GroundLevelShifter*, "", "GroundLevelShifter");
NEED_NO_BOX(::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GroundLevelShifter__OnRoomFloorDepthUpdated*, "", "GroundLevelShifter/OnRoomFloorDepthUpdated");
NEED_NO_BOX(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GroundLevelShifter____c__DisplayClass9_0*, "", "GroundLevelShifter/<>c__DisplayClass9_0");
