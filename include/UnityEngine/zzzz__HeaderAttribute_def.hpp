#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HeaderAttribute)
// Forward declare root types
namespace UnityEngine {
class HeaderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HeaderAttribute);
// Type: UnityEngine::HeaderAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::HeaderAttribute*
class CORDL_TYPE HeaderAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field header, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header))::StringW header;

  static inline ::UnityEngine::HeaderAttribute* New_ctor(::StringW header);

  constexpr ::StringW const& __cordl_internal_get_header() const;

  constexpr ::StringW& __cordl_internal_get_header();

  constexpr void __cordl_internal_set_header(::StringW value);

  /// @brief Method .ctor, addr 0x28008cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW header);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeaderAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeaderAttribute(HeaderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeaderAttribute(HeaderAttribute const&) = delete;

  /// @brief Field header, offset: 0x10, size: 0x8, def value: None
  ::StringW ___header;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HeaderAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::HeaderAttribute, ___header) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HeaderAttribute*, "UnityEngine", "HeaderAttribute");
