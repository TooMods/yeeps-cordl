#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HostPrefixUtils)
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class HostPrefixUtils;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::HostPrefixUtils);
// Type: Amazon.Runtime.Internal.Util::HostPrefixUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::HostPrefixUtils*
class CORDL_TYPE HostPrefixUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field labelValidationRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelValidationRegex, put = setStaticF_labelValidationRegex))::System::Text::RegularExpressions::Regex* labelValidationRegex;

  /// @brief Method IsValidLabelValue, addr 0x2439fbc, size 0xa0, virtual false, abstract: false, final false
  static inline bool IsValidLabelValue(::StringW value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_labelValidationRegex();

  static inline void setStaticF_labelValidationRegex(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HostPrefixUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HostPrefixUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HostPrefixUtils(HostPrefixUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HostPrefixUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HostPrefixUtils(HostPrefixUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::HostPrefixUtils, 0x10>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::HostPrefixUtils);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::HostPrefixUtils*, "Amazon.Runtime.Internal.Util", "HostPrefixUtils");
