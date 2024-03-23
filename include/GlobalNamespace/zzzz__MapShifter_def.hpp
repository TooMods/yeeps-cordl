#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MapShifter)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __MapShifter____c__DisplayClass3_0;
}
// Forward declare root types
namespace GlobalNamespace {
class MapShifter;
}
namespace GlobalNamespace {
class __MapShifter____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapShifter);
MARK_REF_PTR_T(::GlobalNamespace::__MapShifter____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapShifter::<>c__DisplayClass3_0*
class CORDL_TYPE __MapShifter____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapShifter> __4__this;

  /// @brief Field direction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::StringW direction;

  /// @brief Field isDestructive, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDestructive, put = __cordl_internal_set_isDestructive)) bool isDestructive;

  /// @brief Field shift, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_shift, put = __cordl_internal_set_shift))::UnityEngine::Vector3Int shift;

  static inline ::GlobalNamespace::__MapShifter____c__DisplayClass3_0* New_ctor();

  /// @brief Method <ShiftMap>b__0, addr 0x154be10, size 0x1ec, virtual false, abstract: false, final false
  inline void _ShiftMap_b__0(bool approved);

  constexpr ::UnityW<::GlobalNamespace::MapShifter> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapShifter>& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_direction() const;

  constexpr ::StringW& __cordl_internal_get_direction();

  constexpr bool const& __cordl_internal_get_isDestructive() const;

  constexpr bool& __cordl_internal_get_isDestructive();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_shift() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_shift();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapShifter> value);

  constexpr void __cordl_internal_set_direction(::StringW value);

  constexpr void __cordl_internal_set_isDestructive(bool value);

  constexpr void __cordl_internal_set_shift(::UnityEngine::Vector3Int value);

  /// @brief Method .ctor, addr 0x154bcb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapShifter____c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapShifter____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapShifter____c__DisplayClass3_0(__MapShifter____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapShifter____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapShifter____c__DisplayClass3_0(__MapShifter____c__DisplayClass3_0 const&) = delete;

  /// @brief Field shift, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___shift;

  /// @brief Field isDestructive, offset: 0x1c, size: 0x1, def value: None
  bool ___isDestructive;

  /// @brief Field direction, offset: 0x20, size: 0x8, def value: None
  ::StringW ___direction;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapShifter> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapShifter____c__DisplayClass3_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapShifter____c__DisplayClass3_0, ___shift) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapShifter____c__DisplayClass3_0, ___isDestructive) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapShifter____c__DisplayClass3_0, ___direction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapShifter____c__DisplayClass3_0, _____4__this) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapShifter
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapShifter*
class CORDL_TYPE MapShifter : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::GlobalNamespace::__MapShifter____c__DisplayClass3_0;

  /// @brief Field shiftSoundKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_shiftSoundKey, put = __cordl_internal_set_shiftSoundKey))::StringW shiftSoundKey;

  /// @brief Method DisplayStatusError, addr 0x154bcc0, size 0xf4, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  static inline ::GlobalNamespace::MapShifter* New_ctor();

  /// @brief Method OnDestructiveShiftMapYNegativeButtonPressed, addr 0x154bdfc, size 0xc, virtual false, abstract: false, final false
  inline void OnDestructiveShiftMapYNegativeButtonPressed();

  /// @brief Method OnShiftMapXNegativeButtonPressed, addr 0x154bdc0, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapXNegativeButtonPressed();

  /// @brief Method OnShiftMapXPositiveButtonPressed, addr 0x154bdb4, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapXPositiveButtonPressed();

  /// @brief Method OnShiftMapYNegativeButtonPressed, addr 0x154bdf0, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapYNegativeButtonPressed();

  /// @brief Method OnShiftMapYPositiveButtonPressed, addr 0x154bde4, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapYPositiveButtonPressed();

  /// @brief Method OnShiftMapZNegativeButtonPressed, addr 0x154bdd8, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapZNegativeButtonPressed();

  /// @brief Method OnShiftMapZPositiveButtonPressed, addr 0x154bdcc, size 0xc, virtual false, abstract: false, final false
  inline void OnShiftMapZPositiveButtonPressed();

  /// @brief Method ShiftMap, addr 0x154b8b4, size 0x404, virtual false, abstract: false, final false
  inline void ShiftMap(::GlobalNamespace::__MapObject__Facing localShiftDirection, bool isDestructive);

  constexpr ::StringW const& __cordl_internal_get_shiftSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_shiftSoundKey();

  constexpr void __cordl_internal_set_shiftSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x154be08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapShifter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapShifter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapShifter(MapShifter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapShifter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapShifter(MapShifter const&) = delete;

  /// @brief Field shiftSoundKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___shiftSoundKey;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Map Shifter: " };

  /// @brief Field failedToShiftPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToShiftPreface{ u"Failed to shift: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapShifter, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapShifter, ___shiftSoundKey) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapShifter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapShifter*, "", "MapShifter");
NEED_NO_BOX(::GlobalNamespace::__MapShifter____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapShifter____c__DisplayClass3_0*, "", "MapShifter/<>c__DisplayClass3_0");
