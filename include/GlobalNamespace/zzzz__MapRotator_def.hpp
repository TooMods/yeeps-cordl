#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MapRotator)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace GlobalNamespace {
class __MapRotator____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __MapRotator____c__DisplayClass6_0;
}
// Forward declare root types
namespace GlobalNamespace {
class MapRotator;
}
namespace GlobalNamespace {
class __MapRotator____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __MapRotator____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MapRotator);
MARK_REF_PTR_T(::GlobalNamespace::__MapRotator____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__MapRotator____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapRotator::<>c__DisplayClass4_0*
class CORDL_TYPE __MapRotator____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapRotator> __4__this;

  /// @brief Field clockwise, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_clockwise, put = __cordl_internal_set_clockwise)) bool clockwise;

  static inline ::GlobalNamespace::__MapRotator____c__DisplayClass4_0* New_ctor();

  /// @brief Method <RotateMap>b__0, addr 0x154b6bc, size 0xfc, virtual false, abstract: false, final false
  inline void _RotateMap_b__0(bool approved);

  constexpr ::UnityW<::GlobalNamespace::MapRotator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapRotator>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_clockwise() const;

  constexpr bool& __cordl_internal_get_clockwise();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapRotator> value);

  constexpr void __cordl_internal_set_clockwise(bool value);

  /// @brief Method .ctor, addr 0x154b2b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapRotator____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapRotator____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapRotator____c__DisplayClass4_0(__MapRotator____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapRotator____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapRotator____c__DisplayClass4_0(__MapRotator____c__DisplayClass4_0 const&) = delete;

  /// @brief Field clockwise, offset: 0x10, size: 0x1, def value: None
  bool ___clockwise;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapRotator> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapRotator____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapRotator____c__DisplayClass4_0, ___clockwise) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapRotator____c__DisplayClass4_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapRotator::<>c__DisplayClass6_0*
class CORDL_TYPE __MapRotator____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MapRotator> __4__this;

  /// @brief Field flipIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_flipIndex, put = __cordl_internal_set_flipIndex)) int32_t flipIndex;

  static inline ::GlobalNamespace::__MapRotator____c__DisplayClass6_0* New_ctor();

  /// @brief Method <FlipMap>b__0, addr 0x154b7b8, size 0xfc, virtual false, abstract: false, final false
  inline void _FlipMap_b__0(bool approved);

  constexpr ::UnityW<::GlobalNamespace::MapRotator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MapRotator>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_flipIndex() const;

  constexpr int32_t& __cordl_internal_get_flipIndex();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MapRotator> value);

  constexpr void __cordl_internal_set_flipIndex(int32_t value);

  /// @brief Method .ctor, addr 0x154b598, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MapRotator____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MapRotator____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MapRotator____c__DisplayClass6_0(__MapRotator____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MapRotator____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MapRotator____c__DisplayClass6_0(__MapRotator____c__DisplayClass6_0 const&) = delete;

  /// @brief Field flipIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___flipIndex;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MapRotator> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MapRotator____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapRotator____c__DisplayClass6_0, ___flipIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MapRotator____c__DisplayClass6_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MapRotator
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MapRotator*
class CORDL_TYPE MapRotator : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::GlobalNamespace::__MapRotator____c__DisplayClass4_0;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__MapRotator____c__DisplayClass6_0;

  /// @brief Field flipSoundKey, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_flipSoundKey, put = __cordl_internal_set_flipSoundKey))::StringW flipSoundKey;

  /// @brief Field rotateSoundKey, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_rotateSoundKey, put = __cordl_internal_set_rotateSoundKey))::StringW rotateSoundKey;

  /// @brief Method DisplayStatusError, addr 0x154b5a0, size 0xf4, virtual false, abstract: false, final false
  inline void DisplayStatusError(::StringW message);

  /// @brief Method FlipMap, addr 0x154b2b8, size 0x2e0, virtual false, abstract: false, final false
  inline void FlipMap(::GlobalNamespace::__MapObject__Facing localFlipDirection);

  static inline ::GlobalNamespace::MapRotator* New_ctor();

  /// @brief Method OnFlipXButtonPressed, addr 0x154b6a4, size 0x8, virtual false, abstract: false, final false
  inline void OnFlipXButtonPressed();

  /// @brief Method OnFlipZButtonPressed, addr 0x154b6ac, size 0x8, virtual false, abstract: false, final false
  inline void OnFlipZButtonPressed();

  /// @brief Method OnRotateClockwiseButtonPressed, addr 0x154b694, size 0x8, virtual false, abstract: false, final false
  inline void OnRotateClockwiseButtonPressed();

  /// @brief Method OnRotateCounterClockwiseButtonPressed, addr 0x154b69c, size 0x8, virtual false, abstract: false, final false
  inline void OnRotateCounterClockwiseButtonPressed();

  /// @brief Method RotateMap, addr 0x154b008, size 0x2a8, virtual false, abstract: false, final false
  inline void RotateMap(bool clockwise);

  constexpr ::StringW const& __cordl_internal_get_flipSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_flipSoundKey();

  constexpr ::StringW const& __cordl_internal_get_rotateSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_rotateSoundKey();

  constexpr void __cordl_internal_set_flipSoundKey(::StringW value);

  constexpr void __cordl_internal_set_rotateSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x154b6b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MapRotator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MapRotator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MapRotator(MapRotator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MapRotator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MapRotator(MapRotator const&) = delete;

  /// @brief Field rotateSoundKey, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___rotateSoundKey;

  /// @brief Field flipSoundKey, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___flipSoundKey;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Map Rotator: " };

  /// @brief Field failedToFlipPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToFlipPreface{ u"Failed to flip: " };

  /// @brief Field failedToRotatePreface offset 0xffffffff size 0x8
  static constexpr ::ConstString failedToRotatePreface{ u"Failed to rotate: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MapRotator, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MapRotator, ___rotateSoundKey) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MapRotator, ___flipSoundKey) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MapRotator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MapRotator*, "", "MapRotator");
NEED_NO_BOX(::GlobalNamespace::__MapRotator____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapRotator____c__DisplayClass4_0*, "", "MapRotator/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__MapRotator____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MapRotator____c__DisplayClass6_0*, "", "MapRotator/<>c__DisplayClass6_0");
