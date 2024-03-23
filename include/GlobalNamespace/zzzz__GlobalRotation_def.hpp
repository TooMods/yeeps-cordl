#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GlobalRotation)
namespace GlobalNamespace {
struct RotationItem;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalRotation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GlobalRotation);
// Type: ::GlobalRotation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GlobalRotation
struct CORDL_TYPE GlobalRotation {
public:
  // Declarations
  __declspec(property(get = get_doesExpire)) bool doesExpire;

  /// @brief Method GetItemDebugString, addr 0x1597e60, size 0x430, virtual false, abstract: false, final false
  inline ::StringW GetItemDebugString();

  /// @brief Method IsExpired, addr 0x1597924, size 0xe4, virtual false, abstract: false, final false
  inline bool IsExpired();

  /// @brief Method IsWithin, addr 0x1597a08, size 0xf0, virtual false, abstract: false, final false
  inline bool IsWithin(::System::DateTime dateTime);

  /// @brief Method ToString, addr 0x1597af8, size 0x368, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x1597914, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::StringW rotationKey, ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>* rotationItems,
                    ::System::DateTime startTime, ::System::Nullable_1<::System::DateTime> expireTime);

  /// @brief Method get_doesExpire, addr 0x15978d8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_doesExpire();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalRotation();

  // Ctor Parameters [CppParam { name: "rotationKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "rotationItems", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::GlobalNamespace::RotationItem,::Array<::GlobalNamespace::RotationItem>*>>*", modifiers: "", def_value: None }, CppParam { name:
  // "startTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "expireTime", ty: "::System::Nullable_1<::System::DateTime>", modifiers: "", def_value: None }]
  constexpr GlobalRotation(::StringW rotationKey,
                           ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>* rotationItems,
                           ::System::DateTime startTime, ::System::Nullable_1<::System::DateTime> expireTime) noexcept;

  /// @brief Field rotationKey, offset: 0x0, size: 0x8, def value: None
  ::StringW rotationKey;

  /// @brief Field rotationItems, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::GlobalNamespace::RotationItem, ::Array<::GlobalNamespace::RotationItem>*>>* rotationItems;

  /// @brief Field startTime, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime startTime;

  /// @brief Field expireTime, offset: 0x18, size: 0x10, def value: None
  ::System::Nullable_1<::System::DateTime> expireTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalRotation, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalRotation, rotationKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalRotation, rotationItems) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalRotation, startTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalRotation, expireTime) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalRotation, "", "GlobalRotation");
