#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumDisplayAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::GUI {
class EnumDisplayAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute);
// Type: Unity.XR.CoreUtils.GUI::EnumDisplayAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::GUI {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.GUI::EnumDisplayAttribute*
class CORDL_TYPE EnumDisplayAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field Names, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Names, put = __cordl_internal_set_Names))::ArrayW<::StringW, ::Array<::StringW>*> Names;

  /// @brief Field Values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Values, put = __cordl_internal_set_Values))::ArrayW<int32_t, ::Array<int32_t>*> Values;

  static inline ::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute* New_ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> enumValues);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_Names() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_Names();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_Names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_Values(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x28826c0, size 0x230, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> enumValues);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumDisplayAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumDisplayAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumDisplayAttribute(EnumDisplayAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumDisplayAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumDisplayAttribute(EnumDisplayAttribute const&) = delete;

  /// @brief Field Names, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___Names;

  /// @brief Field Values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute, ___Names) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute, ___Values) == 0x18, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils::GUI
NEED_NO_BOX(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GUI::EnumDisplayAttribute*, "Unity.XR.CoreUtils.GUI", "EnumDisplayAttribute");
