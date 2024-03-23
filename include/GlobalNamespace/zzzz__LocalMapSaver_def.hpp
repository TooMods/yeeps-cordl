#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalMapSaver)
namespace GlobalNamespace {
class ButtonController;
}
namespace GlobalNamespace {
class MapSyncData;
}
namespace GlobalNamespace {
class __LocalMapSaver____c;
}
namespace GlobalNamespace {
class __LocalMapSaver____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __LocalMapSaver____c__DisplayClass20_0;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFailure;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalMapSaver;
}
namespace GlobalNamespace {
class __LocalMapSaver____c;
}
namespace GlobalNamespace {
class __LocalMapSaver____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __LocalMapSaver____c__DisplayClass20_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalMapSaver);
MARK_REF_PTR_T(::GlobalNamespace::__LocalMapSaver____c);
MARK_REF_PTR_T(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0);
// Type: ::<>c__DisplayClass19_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalMapSaver::<>c__DisplayClass19_0*
class CORDL_TYPE __LocalMapSaver____c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LocalMapSaver> __4__this;

  /// @brief Field floorDepth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_floorDepth, put = __cordl_internal_set_floorDepth)) int32_t floorDepth;

  /// @brief Field mapSyncData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mapSyncData, put = __cordl_internal_set_mapSyncData))::GlobalNamespace::MapSyncData* mapSyncData;

  static inline ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0* New_ctor();

  /// @brief Method <LoadMap>b__0, addr 0x154ac8c, size 0x30, virtual false, abstract: false, final false
  inline void _LoadMap_b__0(bool approved);

  constexpr ::UnityW<::GlobalNamespace::LocalMapSaver> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LocalMapSaver>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_floorDepth() const;

  constexpr int32_t& __cordl_internal_get_floorDepth();

  constexpr ::GlobalNamespace::MapSyncData*& __cordl_internal_get_mapSyncData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& __cordl_internal_get_mapSyncData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalMapSaver> value);

  constexpr void __cordl_internal_set_floorDepth(int32_t value);

  constexpr void __cordl_internal_set_mapSyncData(::GlobalNamespace::MapSyncData* value);

  /// @brief Method .ctor, addr 0x154a940, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalMapSaver____c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalMapSaver____c__DisplayClass19_0(__LocalMapSaver____c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalMapSaver____c__DisplayClass19_0(__LocalMapSaver____c__DisplayClass19_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalMapSaver> _____4__this;

  /// @brief Field mapSyncData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* ___mapSyncData;

  /// @brief Field floorDepth, offset: 0x20, size: 0x4, def value: None
  int32_t ___floorDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0, ___mapSyncData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0, ___floorDepth) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalMapSaver::<>c__DisplayClass20_0*
class CORDL_TYPE __LocalMapSaver____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::LocalMapSaver> __4__this;

  /// @brief Field floorDepth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_floorDepth, put = __cordl_internal_set_floorDepth)) int32_t floorDepth;

  /// @brief Field mapSyncData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mapSyncData, put = __cordl_internal_set_mapSyncData))::GlobalNamespace::MapSyncData* mapSyncData;

  /// @brief Field roomKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKey, put = __cordl_internal_set_roomKey))::StringW roomKey;

  static inline ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0* New_ctor();

  /// @brief Method <ExecuteLoadMap>b__0, addr 0x154acbc, size 0x1c0, virtual false, abstract: false, final false
  inline void _ExecuteLoadMap_b__0();

  constexpr ::UnityW<::GlobalNamespace::LocalMapSaver> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LocalMapSaver>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_floorDepth() const;

  constexpr int32_t& __cordl_internal_get_floorDepth();

  constexpr ::GlobalNamespace::MapSyncData*& __cordl_internal_get_mapSyncData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MapSyncData*> const& __cordl_internal_get_mapSyncData() const;

  constexpr ::StringW const& __cordl_internal_get_roomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomKey();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalMapSaver> value);

  constexpr void __cordl_internal_set_floorDepth(int32_t value);

  constexpr void __cordl_internal_set_mapSyncData(::GlobalNamespace::MapSyncData* value);

  constexpr void __cordl_internal_set_roomKey(::StringW value);

  /// @brief Method .ctor, addr 0x154ac5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalMapSaver____c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalMapSaver____c__DisplayClass20_0(__LocalMapSaver____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalMapSaver____c__DisplayClass20_0(__LocalMapSaver____c__DisplayClass20_0 const&) = delete;

  /// @brief Field floorDepth, offset: 0x10, size: 0x4, def value: None
  int32_t ___floorDepth;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalMapSaver> _____4__this;

  /// @brief Field mapSyncData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MapSyncData* ___mapSyncData;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___roomKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0, ___floorDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0, ___mapSyncData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0, ___roomKey) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalMapSaver::<>c*
class CORDL_TYPE __LocalMapSaver____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LocalMapSaver____c* __9;

  /// @brief Field <>9__20_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_1, put = setStaticF___9__20_1))::GlobalNamespace::__RoomDatabase__OnFailure* __9__20_1;

  static inline ::GlobalNamespace::__LocalMapSaver____c* New_ctor();

  /// @brief Method <ExecuteLoadMap>b__20_1, addr 0x154aee8, size 0x120, virtual false, abstract: false, final false
  inline void _ExecuteLoadMap_b__20_1(::StringW errType);

  /// @brief Method .ctor, addr 0x154aee0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LocalMapSaver____c* getStaticF___9();

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* getStaticF___9__20_1();

  static inline void setStaticF___9(::GlobalNamespace::__LocalMapSaver____c* value);

  static inline void setStaticF___9__20_1(::GlobalNamespace::__RoomDatabase__OnFailure* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalMapSaver____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LocalMapSaver____c(__LocalMapSaver____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LocalMapSaver____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LocalMapSaver____c(__LocalMapSaver____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalMapSaver____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalMapSaver
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalMapSaver*
class CORDL_TYPE LocalMapSaver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__LocalMapSaver____c;

  using __c__DisplayClass19_0 = ::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0;

  /// @brief Field copySoundKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_copySoundKey, put = __cordl_internal_set_copySoundKey))::StringW copySoundKey;

  /// @brief Field mapClipboard, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mapClipboard, put = setStaticF_mapClipboard))::GlobalNamespace::MapSyncData* mapClipboard;

  /// @brief Field mapClipboardDimensions, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_mapClipboardDimensions, put = setStaticF_mapClipboardDimensions))::UnityEngine::Vector3Int mapClipboardDimensions;

  /// @brief Field mapClipboardFloorDepth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_mapClipboardFloorDepth, put = setStaticF_mapClipboardFloorDepth)) int32_t mapClipboardFloorDepth;

  /// @brief Field pasteButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_pasteButton, put = __cordl_internal_set_pasteButton))::UnityW<::GlobalNamespace::ButtonController> pasteButton;

  /// @brief Field pasteSoundKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pasteSoundKey, put = __cordl_internal_set_pasteSoundKey))::StringW pasteSoundKey;

  /// @brief Method ClearSavedWorld, addr 0x154a090, size 0x18c, virtual false, abstract: false, final false
  inline void ClearSavedWorld();

  /// @brief Method DisplayStatusError, addr 0x1549cb0, size 0xf4, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  /// @brief Method ExecuteLoadMap, addr 0x154a948, size 0x314, virtual false, abstract: false, final false
  inline void ExecuteLoadMap(::GlobalNamespace::MapSyncData* mapSyncData, int32_t floorDepth);

  /// @brief Method LoadMap, addr 0x154a378, size 0x2f4, virtual false, abstract: false, final false
  inline void LoadMap(::GlobalNamespace::MapSyncData* mapSyncData, int32_t floorDepth);

  static inline ::GlobalNamespace::LocalMapSaver* New_ctor();

  /// @brief Method OnClearSaveButtonPressed, addr 0x154ac74, size 0x4, virtual false, abstract: false, final false
  inline void OnClearSaveButtonPressed();

  /// @brief Method OnCopyWorldToClipboardButtonPressed, addr 0x154ac68, size 0x4, virtual false, abstract: false, final false
  inline void OnCopyWorldToClipboardButtonPressed();

  /// @brief Method OnLoadEmptyButtonPressed, addr 0x154ac78, size 0xc, virtual false, abstract: false, final false
  inline void OnLoadEmptyButtonPressed();

  /// @brief Method OnLoadWorldButtonPressed, addr 0x154ac6c, size 0x4, virtual false, abstract: false, final false
  inline void OnLoadWorldButtonPressed();

  /// @brief Method OnPasteWorldFromClipboardButtonPressed, addr 0x154ac70, size 0x4, virtual false, abstract: false, final false
  inline void OnPasteWorldFromClipboardButtonPressed();

  /// @brief Method OnSaveWorldButtonPressed, addr 0x154ac64, size 0x4, virtual false, abstract: false, final false
  inline void OnSaveWorldButtonPressed();

  /// @brief Method RefreshPasteButton, addr 0x1549998, size 0xac, virtual false, abstract: false, final false
  inline void RefreshPasteButton();

  /// @brief Method Start, addr 0x1549994, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryCopyActiveWorldToClipboard, addr 0x1549da4, size 0x2ec, virtual false, abstract: false, final false
  inline void TryCopyActiveWorldToClipboard();

  /// @brief Method TryLoadMapFromClipboard, addr 0x154a66c, size 0x2d4, virtual false, abstract: false, final false
  inline void TryLoadMapFromClipboard();

  /// @brief Method TryLoadWorld, addr 0x154a21c, size 0x15c, virtual false, abstract: false, final false
  inline void TryLoadWorld();

  /// @brief Method TrySaveActiveWorld, addr 0x1549a44, size 0x26c, virtual false, abstract: false, final false
  inline void TrySaveActiveWorld();

  constexpr ::StringW const& __cordl_internal_get_copySoundKey() const;

  constexpr ::StringW& __cordl_internal_get_copySoundKey();

  constexpr ::UnityW<::GlobalNamespace::ButtonController> const& __cordl_internal_get_pasteButton() const;

  constexpr ::UnityW<::GlobalNamespace::ButtonController>& __cordl_internal_get_pasteButton();

  constexpr ::StringW const& __cordl_internal_get_pasteSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_pasteSoundKey();

  constexpr void __cordl_internal_set_copySoundKey(::StringW value);

  constexpr void __cordl_internal_set_pasteButton(::UnityW<::GlobalNamespace::ButtonController> value);

  constexpr void __cordl_internal_set_pasteSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x154ac84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MapSyncData* getStaticF_mapClipboard();

  static inline ::UnityEngine::Vector3Int getStaticF_mapClipboardDimensions();

  static inline int32_t getStaticF_mapClipboardFloorDepth();

  static inline void setStaticF_mapClipboard(::GlobalNamespace::MapSyncData* value);

  static inline void setStaticF_mapClipboardDimensions(::UnityEngine::Vector3Int value);

  static inline void setStaticF_mapClipboardFloorDepth(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalMapSaver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalMapSaver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalMapSaver(LocalMapSaver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalMapSaver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalMapSaver(LocalMapSaver const&) = delete;

  /// @brief Field copySoundKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___copySoundKey;

  /// @brief Field pasteSoundKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___pasteSoundKey;

  /// @brief Field pasteButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ButtonController> ___pasteButton;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Local Map Saver: " };

  /// @brief Field failedToCopyPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToCopyPreface{ u"Failed to copy: " };

  /// @brief Field failedToLoadPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToLoadPreface{ u"Failed to load: " };

  /// @brief Field failedToPastePreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToPastePreface{ u"Failed to paste: " };

  /// @brief Field failedToSavePreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToSavePreface{ u"Failed to save: " };

  /// @brief Field oldWorldLoadKey offset 0xffffffff size 0x8
  static constexpr ::ConstString oldWorldLoadKey{ u"worldData" };

  /// @brief Field worldSaveKey offset 0xffffffff size 0x8
  static constexpr ::ConstString worldSaveKey{ u"worldData-" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalMapSaver, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMapSaver, ___copySoundKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMapSaver, ___pasteSoundKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalMapSaver, ___pasteButton) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalMapSaver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalMapSaver*, "", "LocalMapSaver");
NEED_NO_BOX(::GlobalNamespace::__LocalMapSaver____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalMapSaver____c*, "", "LocalMapSaver/<>c");
NEED_NO_BOX(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalMapSaver____c__DisplayClass19_0*, "", "LocalMapSaver/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalMapSaver____c__DisplayClass20_0*, "", "LocalMapSaver/<>c__DisplayClass20_0");
