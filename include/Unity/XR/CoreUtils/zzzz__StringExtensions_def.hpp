#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringExtensions)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class StringExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::StringExtensions);
// Type: Unity.XR.CoreUtils::StringExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::StringExtensions*
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_StringBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_StringBuilder, put = setStaticF_k_StringBuilder))::System::Text::StringBuilder* k_StringBuilder;

  /// @brief Method FirstToUpper, addr 0x2874b38, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW FirstToUpper(::StringW str);

  /// @brief Method InsertSpacesBetweenWords, addr 0x2874c68, size 0x278, virtual false, abstract: false, final false
  static inline ::StringW InsertSpacesBetweenWords(::StringW str);

  static inline ::System::Text::StringBuilder* getStaticF_k_StringBuilder();

  static inline void setStaticF_k_StringBuilder(::System::Text::StringBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringExtensions(StringExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringExtensions(StringExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::StringExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::StringExtensions*, "Unity.XR.CoreUtils", "StringExtensions");
