#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReloadAttribute)
namespace UnityEngine::Rendering {
struct __ReloadAttribute__Package;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __ReloadAttribute__Package;
}
namespace UnityEngine::Rendering {
class ReloadAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__ReloadAttribute__Package);
MARK_REF_PTR_T(::UnityEngine::Rendering::ReloadAttribute);
// Type: ::Package
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::ReloadAttribute::Package
struct CORDL_TYPE __ReloadAttribute__Package {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ReloadAttribute__Package_Unwrapped
  enum struct ____ReloadAttribute__Package_Unwrapped : int32_t {
    __E_Builtin = static_cast<int32_t>(0x0),
    __E_Root = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ReloadAttribute__Package_Unwrapped() const noexcept {
    return static_cast<____ReloadAttribute__Package_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReloadAttribute__Package();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReloadAttribute__Package(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Builtin value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__ReloadAttribute__Package const Builtin;

  /// @brief Field Root value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__ReloadAttribute__Package const Root;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__ReloadAttribute__Package, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__ReloadAttribute__Package, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::ReloadAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ReloadAttribute*
class CORDL_TYPE ReloadAttribute : public ::System::Attribute {
public:
  // Declarations
  using Package = ::UnityEngine::Rendering::__ReloadAttribute__Package;

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW path, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

  static inline ::UnityEngine::Rendering::ReloadAttribute* New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

  /// @brief Method .ctor, addr 0x17d121c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

  /// @brief Method .ctor, addr 0x17d12bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

  /// @brief Method .ctor, addr 0x17d1214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::StringW, ::Array<::StringW>*> paths, ::UnityEngine::Rendering::__ReloadAttribute__Package package);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReloadAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReloadAttribute(ReloadAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReloadAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReloadAttribute(ReloadAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ReloadAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__ReloadAttribute__Package, "UnityEngine.Rendering", "ReloadAttribute/Package");
NEED_NO_BOX(::UnityEngine::Rendering::ReloadAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReloadAttribute*, "UnityEngine.Rendering", "ReloadAttribute");
