#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerListItem)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass40_0;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountFailed;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountSuccess;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerListItem;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __PlayerListItem____c__DisplayClass40_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerListItem);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0);
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem::<>c__DisplayClass32_0*
class CORDL_TYPE __PlayerListItem____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerListItem> __4__this;

  /// @brief Field <>9__1, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* __9__1;

  /// @brief Field <>9__2, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__ReportsManager__OnReportAccountFailed* __9__2;

  /// @brief Field playerData, offset 0x18, size 0x50
  __declspec(property(get = __cordl_internal_get_playerData, put = __cordl_internal_set_playerData))::GlobalNamespace::PlayerData playerData;

  static inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0* New_ctor();

  /// @brief Method <OnReportButtonPressed>b__0, addr 0x1552e18, size 0x11c, virtual false, abstract: false, final false
  inline void _OnReportButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method <OnReportButtonPressed>b__1, addr 0x1552f34, size 0x104, virtual false, abstract: false, final false
  inline void _OnReportButtonPressed_b__1();

  /// @brief Method <OnReportButtonPressed>b__2, addr 0x1553038, size 0x180, virtual false, abstract: false, final false
  inline void _OnReportButtonPressed_b__2(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const& __cordl_internal_get___9__1() const;

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::PlayerData const& __cordl_internal_get_playerData() const;

  constexpr ::GlobalNamespace::PlayerData& __cordl_internal_get_playerData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value);

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value);

  constexpr void __cordl_internal_set_playerData(::GlobalNamespace::PlayerData value);

  /// @brief Method .ctor, addr 0x1552024, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerListItem____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerListItem____c__DisplayClass32_0(__PlayerListItem____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerListItem____c__DisplayClass32_0(__PlayerListItem____c__DisplayClass32_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerListItem> _____4__this;

  /// @brief Field playerData, offset: 0x18, size: 0x50, def value: None
  ::GlobalNamespace::PlayerData ___playerData;

  /// @brief Field <>9__1, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* _____9__1;

  /// @brief Field <>9__2, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0, ___playerData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0, _____9__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0, _____9__2) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem::<>c__DisplayClass33_0*
class CORDL_TYPE __PlayerListItem____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerData, offset 0x10, size 0x50
  __declspec(property(get = __cordl_internal_get_playerData, put = __cordl_internal_set_playerData))::GlobalNamespace::PlayerData playerData;

  static inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0* New_ctor();

  /// @brief Method <OnKickButtonPressed>b__0, addr 0x15531b8, size 0x78, virtual false, abstract: false, final false
  inline void _OnKickButtonPressed_b__0(bool approved);

  constexpr ::GlobalNamespace::PlayerData const& __cordl_internal_get_playerData() const;

  constexpr ::GlobalNamespace::PlayerData& __cordl_internal_get_playerData();

  constexpr void __cordl_internal_set_playerData(::GlobalNamespace::PlayerData value);

  /// @brief Method .ctor, addr 0x15524cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerListItem____c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerListItem____c__DisplayClass33_0(__PlayerListItem____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerListItem____c__DisplayClass33_0(__PlayerListItem____c__DisplayClass33_0 const&) = delete;

  /// @brief Field playerData, offset: 0x10, size: 0x50, def value: None
  ::GlobalNamespace::PlayerData ___playerData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0, ___playerData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem::<>c__DisplayClass37_0*
class CORDL_TYPE __PlayerListItem____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerListItem> __4__this;

  /// @brief Field displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName))::StringW displayName;

  static inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0* New_ctor();

  /// @brief Method <TryShowReportHistory>b__0, addr 0x1553230, size 0x2d8, virtual false, abstract: false, final false
  inline void _TryShowReportHistory_b__0(int32_t reportCount, int32_t banCount, int32_t longestBanDuration, bool wasPermabanned);

  /// @brief Method <TryShowReportHistory>b__1, addr 0x1553508, size 0x114, virtual false, abstract: false, final false
  inline void _TryShowReportHistory_b__1(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  /// @brief Method .ctor, addr 0x15524d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerListItem____c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerListItem____c__DisplayClass37_0(__PlayerListItem____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerListItem____c__DisplayClass37_0(__PlayerListItem____c__DisplayClass37_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerListItem> _____4__this;

  /// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___displayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0, ___displayName) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem::<>c__DisplayClass39_0*
class CORDL_TYPE __PlayerListItem____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__1, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* __9__1;

  /// @brief Field <>9__2, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__ReportsManager__OnReportAccountFailed* __9__2;

  /// @brief Field playerData, offset 0x10, size 0x50
  __declspec(property(get = __cordl_internal_get_playerData, put = __cordl_internal_set_playerData))::GlobalNamespace::PlayerData playerData;

  static inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0* New_ctor();

  /// @brief Method <OnWarnButtonPressed>b__0, addr 0x155361c, size 0x130, virtual false, abstract: false, final false
  inline void _OnWarnButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method <OnWarnButtonPressed>b__1, addr 0x155374c, size 0xc4, virtual false, abstract: false, final false
  inline void _OnWarnButtonPressed_b__1();

  /// @brief Method <OnWarnButtonPressed>b__2, addr 0x1553810, size 0xec, virtual false, abstract: false, final false
  inline void _OnWarnButtonPressed_b__2(::StringW errType);

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const& __cordl_internal_get___9__1() const;

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::PlayerData const& __cordl_internal_get_playerData() const;

  constexpr ::GlobalNamespace::PlayerData& __cordl_internal_get_playerData();

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value);

  constexpr void __cordl_internal_set_playerData(::GlobalNamespace::PlayerData value);

  /// @brief Method .ctor, addr 0x1552700, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerListItem____c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerListItem____c__DisplayClass39_0(__PlayerListItem____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerListItem____c__DisplayClass39_0(__PlayerListItem____c__DisplayClass39_0 const&) = delete;

  /// @brief Field playerData, offset: 0x10, size: 0x50, def value: None
  ::GlobalNamespace::PlayerData ___playerData;

  /// @brief Field <>9__1, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* _____9__1;

  /// @brief Field <>9__2, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0, ___playerData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0, _____9__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0, _____9__2) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem::<>c__DisplayClass40_0*
class CORDL_TYPE __PlayerListItem____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerListItem> __4__this;

  /// @brief Field <>9__1, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1))::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* __9__1;

  /// @brief Field <>9__2, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__ReportsManager__OnReportAccountFailed* __9__2;

  /// @brief Field durationDays, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_durationDays, put = __cordl_internal_set_durationDays)) int32_t durationDays;

  /// @brief Field playerData, offset 0x10, size 0x50
  __declspec(property(get = __cordl_internal_get_playerData, put = __cordl_internal_set_playerData))::GlobalNamespace::PlayerData playerData;

  static inline ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0* New_ctor();

  /// @brief Method <OnBanButtonPressed>b__0, addr 0x15538fc, size 0x194, virtual false, abstract: false, final false
  inline void _OnBanButtonPressed_b__0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  /// @brief Method <OnBanButtonPressed>b__1, addr 0x1553a90, size 0x104, virtual false, abstract: false, final false
  inline void _OnBanButtonPressed_b__1();

  /// @brief Method <OnBanButtonPressed>b__2, addr 0x1553b94, size 0x18c, virtual false, abstract: false, final false
  inline void _OnBanButtonPressed_b__2(::StringW errType);

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerListItem>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*& __cordl_internal_get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*> const& __cordl_internal_get___9__1() const;

  constexpr ::GlobalNamespace::__ReportsManager__OnReportAccountFailed*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ReportsManager__OnReportAccountFailed*> const& __cordl_internal_get___9__2() const;

  constexpr int32_t const& __cordl_internal_get_durationDays() const;

  constexpr int32_t& __cordl_internal_get_durationDays();

  constexpr ::GlobalNamespace::PlayerData const& __cordl_internal_get_playerData() const;

  constexpr ::GlobalNamespace::PlayerData& __cordl_internal_get_playerData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerListItem> value);

  constexpr void __cordl_internal_set___9__1(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* value);

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__ReportsManager__OnReportAccountFailed* value);

  constexpr void __cordl_internal_set_durationDays(int32_t value);

  constexpr void __cordl_internal_set_playerData(::GlobalNamespace::PlayerData value);

  /// @brief Method .ctor, addr 0x1552a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerListItem____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerListItem____c__DisplayClass40_0(__PlayerListItem____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerListItem____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerListItem____c__DisplayClass40_0(__PlayerListItem____c__DisplayClass40_0 const&) = delete;

  /// @brief Field playerData, offset: 0x10, size: 0x50, def value: None
  ::GlobalNamespace::PlayerData ___playerData;

  /// @brief Field durationDays, offset: 0x60, size: 0x4, def value: None
  int32_t ___durationDays;

  /// @brief Field <>4__this, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerListItem> _____4__this;

  /// @brief Field <>9__1, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* _____9__1;

  /// @brief Field <>9__2, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, ___playerData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, ___durationDays) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, _____4__this) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, _____9__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0, _____9__2) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerListItem
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerListItem*
class CORDL_TYPE PlayerListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass32_0 = ::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0;

  using __c__DisplayClass37_0 = ::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0;

  using __c__DisplayClass39_0 = ::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0;

  using __c__DisplayClass40_0 = ::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0;

  /// @brief Field addFriendButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_addFriendButton, put = __cordl_internal_set_addFriendButton))::UnityW<::GlobalNamespace::SimpleButtonController> addFriendButton;

  /// @brief Field avatar, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field backgroundImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundImage, put = __cordl_internal_set_backgroundImage))::UnityW<::UnityEngine::UI::Image> backgroundImage;

  /// @brief Field banButtonContainer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_banButtonContainer, put = __cordl_internal_set_banButtonContainer))::UnityW<::UnityEngine::GameObject> banButtonContainer;

  /// @brief Field headMutedContainer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_headMutedContainer, put = __cordl_internal_set_headMutedContainer))::UnityW<::UnityEngine::GameObject> headMutedContainer;

  /// @brief Field headVoiceChatSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_headVoiceChatSource, put = __cordl_internal_set_headVoiceChatSource))::UnityW<::GlobalNamespace::ExpressionController> headVoiceChatSource;

  /// @brief Field isMaster, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_isMaster, put = __cordl_internal_set_isMaster)) bool isMaster;

  /// @brief Field isModeratorActionPromptActive, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isModeratorActionPromptActive, put = setStaticF_isModeratorActionPromptActive)) bool isModeratorActionPromptActive;

  /// @brief Field isMuted, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isMuted, put = __cordl_internal_set_isMuted)) bool isMuted;

  /// @brief Field isReportPromptActive, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get_isReportPromptActive, put = __cordl_internal_set_isReportPromptActive)) bool isReportPromptActive;

  /// @brief Field isSpectator, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get_isSpectator, put = __cordl_internal_set_isSpectator)) bool isSpectator;

  /// @brief Field kickButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_kickButton, put = __cordl_internal_set_kickButton))::UnityW<::GlobalNamespace::SimpleButtonController> kickButton;

  /// @brief Field muteButton, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_muteButton, put = __cordl_internal_set_muteButton))::UnityW<::GlobalNamespace::SimpleButtonController> muteButton;

  /// @brief Field mutedSprite, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mutedSprite, put = __cordl_internal_set_mutedSprite))::UnityW<::UnityEngine::Sprite> mutedSprite;

  /// @brief Field nameContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_nameContainer, put = __cordl_internal_set_nameContainer))::UnityW<::UnityEngine::GameObject> nameContainer;

  /// @brief Field nextCanShowReportHistoryTime, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_nextCanShowReportHistoryTime, put = __cordl_internal_set_nextCanShowReportHistoryTime)) float_t nextCanShowReportHistoryTime;

  /// @brief Field playerNameText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerNameText, put = __cordl_internal_set_playerNameText))::UnityW<::UnityEngine::UI::Text> playerNameText;

  /// @brief Field registeredUserID, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredUserID, put = __cordl_internal_set_registeredUserID))::StringW registeredUserID;

  /// @brief Field reportButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_reportButton, put = __cordl_internal_set_reportButton))::UnityW<::GlobalNamespace::SimpleButtonController> reportButton;

  /// @brief Field roleIcon, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_roleIcon, put = __cordl_internal_set_roleIcon))::UnityW<::UnityEngine::UI::Image> roleIcon;

  /// @brief Field seekerBorder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_seekerBorder, put = __cordl_internal_set_seekerBorder))::UnityW<::UnityEngine::GameObject> seekerBorder;

  /// @brief Field sortName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_sortName, put = __cordl_internal_set_sortName))::StringW sortName;

  /// @brief Field spectatorContainer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_spectatorContainer, put = __cordl_internal_set_spectatorContainer))::UnityW<::UnityEngine::GameObject> spectatorContainer;

  /// @brief Field unmutedSilentSprite, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_unmutedSilentSprite, put = __cordl_internal_set_unmutedSilentSprite))::UnityW<::UnityEngine::Sprite> unmutedSilentSprite;

  /// @brief Field unmutedSprite, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_unmutedSprite, put = __cordl_internal_set_unmutedSprite))::UnityW<::UnityEngine::Sprite> unmutedSprite;

  /// @brief Field userID, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_userID, put = __cordl_internal_set_userID))::StringW userID;

  /// @brief Field wasHighEnergy, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_wasHighEnergy, put = __cordl_internal_set_wasHighEnergy)) bool wasHighEnergy;

  /// @brief Method Clear, addr 0x1551b44, size 0x5c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CompareTo, addr 0x1551178, size 0x54, virtual false, abstract: false, final false
  inline int32_t CompareTo(::GlobalNamespace::PlayerListItem* other);

  /// @brief Method Deregister, addr 0x15514c4, size 0x2e4, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method DestroySelf, addr 0x1551270, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Display, addr 0x1550dd8, size 0x3a0, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::PlayerListItem* New_ctor();

  /// @brief Method OnAddFriendButtonPressed, addr 0x1552a9c, size 0x2d8, virtual false, abstract: false, final false
  inline void OnAddFriendButtonPressed();

  /// @brief Method OnBanButtonPressed, addr 0x1552708, size 0x38c, virtual false, abstract: false, final false
  inline void OnBanButtonPressed(int32_t durationDays);

  /// @brief Method OnCanKickOtherPlayersUpdated, addr 0x1551b14, size 0x30, virtual false, abstract: false, final false
  inline void OnCanKickOtherPlayersUpdated(bool newCanKickOtherPlayers);

  /// @brief Method OnDisable, addr 0x1552d94, size 0x10, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1552d74, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnKickButtonPressed, addr 0x155223c, size 0x290, virtual false, abstract: false, final false
  inline void OnKickButtonPressed();

  /// @brief Method OnMuteButtonPressed, addr 0x1551ba0, size 0x58, virtual false, abstract: false, final false
  inline void OnMuteButtonPressed();

  /// @brief Method OnReportButtonPressed, addr 0x1551cfc, size 0x328, virtual false, abstract: false, final false
  inline void OnReportButtonPressed();

  /// @brief Method OnSpeakingVolumeUpdated, addr 0x1552da4, size 0x6c, virtual false, abstract: false, final false
  inline void OnSpeakingVolumeUpdated(float_t newEnergy);

  /// @brief Method OnUserMutedStateChanged, addr 0x1551bf8, size 0x48, virtual false, abstract: false, final false
  inline void OnUserMutedStateChanged(::StringW userID, bool newMuted);

  /// @brief Method OnWarnButtonPressed, addr 0x15524dc, size 0x224, virtual false, abstract: false, final false
  inline void OnWarnButtonPressed();

  /// @brief Method Register, addr 0x15517a8, size 0x324, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method SetBanButtonsActive, addr 0x1551acc, size 0x48, virtual false, abstract: false, final false
  inline void SetBanButtonsActive(bool newActive);

  /// @brief Method SetIsMuted, addr 0x1551c40, size 0xbc, virtual false, abstract: false, final false
  inline void SetIsMuted(bool newIsMuted);

  /// @brief Method TryShowReportHistory, addr 0x155202c, size 0x210, virtual false, abstract: false, final false
  inline void TryShowReportHistory();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_addFriendButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_addFriendButton();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_backgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_backgroundImage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_banButtonContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_banButtonContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_headMutedContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_headMutedContainer();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_headVoiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_headVoiceChatSource();

  constexpr bool const& __cordl_internal_get_isMaster() const;

  constexpr bool& __cordl_internal_get_isMaster();

  constexpr bool const& __cordl_internal_get_isMuted() const;

  constexpr bool& __cordl_internal_get_isMuted();

  constexpr bool const& __cordl_internal_get_isReportPromptActive() const;

  constexpr bool& __cordl_internal_get_isReportPromptActive();

  constexpr bool const& __cordl_internal_get_isSpectator() const;

  constexpr bool& __cordl_internal_get_isSpectator();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_kickButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_kickButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_muteButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_muteButton();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_mutedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_mutedSprite();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameContainer();

  constexpr float_t const& __cordl_internal_get_nextCanShowReportHistoryTime() const;

  constexpr float_t& __cordl_internal_get_nextCanShowReportHistoryTime();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_playerNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_playerNameText();

  constexpr ::StringW const& __cordl_internal_get_registeredUserID() const;

  constexpr ::StringW& __cordl_internal_get_registeredUserID();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_reportButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_reportButton();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_roleIcon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_roleIcon();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_seekerBorder() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_seekerBorder();

  constexpr ::StringW const& __cordl_internal_get_sortName() const;

  constexpr ::StringW& __cordl_internal_get_sortName();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spectatorContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spectatorContainer();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_unmutedSilentSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_unmutedSilentSprite();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_unmutedSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_unmutedSprite();

  constexpr ::StringW const& __cordl_internal_get_userID() const;

  constexpr ::StringW& __cordl_internal_get_userID();

  constexpr bool const& __cordl_internal_get_wasHighEnergy() const;

  constexpr bool& __cordl_internal_get_wasHighEnergy();

  constexpr void __cordl_internal_set_addFriendButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_banButtonContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_headMutedContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_isMaster(bool value);

  constexpr void __cordl_internal_set_isMuted(bool value);

  constexpr void __cordl_internal_set_isReportPromptActive(bool value);

  constexpr void __cordl_internal_set_isSpectator(bool value);

  constexpr void __cordl_internal_set_kickButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_mutedSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_nameContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_nextCanShowReportHistoryTime(float_t value);

  constexpr void __cordl_internal_set_playerNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_registeredUserID(::StringW value);

  constexpr void __cordl_internal_set_reportButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_roleIcon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_seekerBorder(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_sortName(::StringW value);

  constexpr void __cordl_internal_set_spectatorContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_unmutedSilentSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_unmutedSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_userID(::StringW value);

  constexpr void __cordl_internal_set_wasHighEnergy(bool value);

  /// @brief Method .ctor, addr 0x1552e10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_isModeratorActionPromptActive();

  static inline void setStaticF_isModeratorActionPromptActive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerListItem(PlayerListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerListItem(PlayerListItem const&) = delete;

  /// @brief Field playerNameText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___playerNameText;

  /// @brief Field backgroundImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___backgroundImage;

  /// @brief Field seekerBorder, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___seekerBorder;

  /// @brief Field headVoiceChatSource, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___headVoiceChatSource;

  /// @brief Field avatar, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field headMutedContainer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___headMutedContainer;

  /// @brief Field muteButton, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___muteButton;

  /// @brief Field unmutedSprite, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___unmutedSprite;

  /// @brief Field unmutedSilentSprite, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___unmutedSilentSprite;

  /// @brief Field mutedSprite, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___mutedSprite;

  /// @brief Field isMuted, offset: 0x68, size: 0x1, def value: None
  bool ___isMuted;

  /// @brief Field reportButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___reportButton;

  /// @brief Field kickButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___kickButton;

  /// @brief Field addFriendButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___addFriendButton;

  /// @brief Field banButtonContainer, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___banButtonContainer;

  /// @brief Field roleIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___roleIcon;

  /// @brief Field nameContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___nameContainer;

  /// @brief Field spectatorContainer, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___spectatorContainer;

  /// @brief Field isMaster, offset: 0xa8, size: 0x1, def value: None
  bool ___isMaster;

  /// @brief Field userID, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___userID;

  /// @brief Field registeredUserID, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___registeredUserID;

  /// @brief Field sortName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___sortName;

  /// @brief Field isSpectator, offset: 0xc8, size: 0x1, def value: None
  bool ___isSpectator;

  /// @brief Field isReportPromptActive, offset: 0xc9, size: 0x1, def value: None
  bool ___isReportPromptActive;

  /// @brief Field nextCanShowReportHistoryTime, offset: 0xcc, size: 0x4, def value: None
  float_t ___nextCanShowReportHistoryTime;

  /// @brief Field wasHighEnergy, offset: 0xd0, size: 0x1, def value: None
  bool ___wasHighEnergy;

  /// @brief Field REPORT_HISTORY_COOLDOWN offset 0xffffffff size 0x4
  static constexpr float_t REPORT_HISTORY_COOLDOWN{ 3.0 };

  /// @brief Field unmutedSilentMaxAudioEnergy offset 0xffffffff size 0x4
  static constexpr float_t unmutedSilentMaxAudioEnergy{ 0.3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerListItem, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___playerNameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___backgroundImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___seekerBorder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___headVoiceChatSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___avatar) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___headMutedContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___muteButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___unmutedSprite) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___unmutedSilentSprite) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___mutedSprite) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___isMuted) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___reportButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___kickButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___addFriendButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___banButtonContainer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___roleIcon) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___nameContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___spectatorContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___isMaster) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___userID) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___registeredUserID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___sortName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___isSpectator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___isReportPromptActive) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___nextCanShowReportHistoryTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerListItem, ___wasHighEnergy) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerListItem*, "", "PlayerListItem");
NEED_NO_BOX(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerListItem____c__DisplayClass32_0*, "", "PlayerListItem/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerListItem____c__DisplayClass33_0*, "", "PlayerListItem/<>c__DisplayClass33_0");
NEED_NO_BOX(::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerListItem____c__DisplayClass37_0*, "", "PlayerListItem/<>c__DisplayClass37_0");
NEED_NO_BOX(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerListItem____c__DisplayClass39_0*, "", "PlayerListItem/<>c__DisplayClass39_0");
NEED_NO_BOX(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerListItem____c__DisplayClass40_0*, "", "PlayerListItem/<>c__DisplayClass40_0");
