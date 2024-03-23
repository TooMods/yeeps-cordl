#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace Amazon::Util {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Extensions);
// Type: Amazon.Util::Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::Extensions*
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUpper, addr 0x2210eb8, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW ToUpper(::StringW str, ::System::Globalization::CultureInfo* culture);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Extensions, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Extensions*, "Amazon.Util", "Extensions");
